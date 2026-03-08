#include "FileManager.h"
#include <filesystem>
#include <fstream>
#include <iostream>

void FileManager::listFiles(const std::string& path) {
	for (const auto& entry : std::filesystem::directory_iterator(path)) {
		std::cout << entry.path().filename().string() << std::endl;
	}
}

bool FileManager::createFile(const std::string& filename) {
	std::ofstream ofs(filename);
	return ofs.good();
}

bool FileManager::deleteFile(const std::string& filename) {
	return std::filesystem::remove(filename);
}

bool FileManager::renameFile(const std::string& oldName, const std::string& newName) {
	std::filesystem::rename(oldName, newName);
	return true;
}