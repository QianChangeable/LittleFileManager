#include "FileManager.h"
#include <iostream>
#include <string>

int main() {
	FileManager fm;
	int choice = -1;
	while (choice != 0) {
		std::cout << "\n1. List files\n2. Create file\n3. Delete file\n4. Rename file\n0. Exit\n";
		std::cout << "Enter your choice: ";
		std::cin >> choice;
		std::string fname, newname;
		switch (choice) {
		case 1:
			fm.listFiles(".");
			break;
		case 2:
			std::cout << "Enter filename: ";
			std::cin >> fname;
			fm.createFile(fname);
			break;
		case 3:
			std::cout << "Enter filename: ";
			std::cin >> fname;
			fm.deleteFile(fname);
			break;
		case 4:
			std::cout << "Enter old filename: ";
			std::cin >> fname;
			std::cout << "Enter new filename: ";
			std::cin >> newname;
			fm.renameFile(fname, newname);
			break;
		case 0:
			std::cout << "Exit\n";
			break;
		default:
			std::cout << "Invalid choice!\n";
		}
	}
	return 0;
}