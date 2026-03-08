#pragma once
#include <string>

class FileManager {
  public:
	void listFiles(const std::string& path);
	bool createFile(const std::string& filename);
	bool deleteFile(const std::string& filename);
	bool renameFile(const std::string& oldName, const std::string& newName);
};