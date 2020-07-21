#include "Folder.h"

void Folder::add_folder(std::string path, std::string foldername)
{
}

void Folder::delete_folder(std::string path, std::string foldername)
{
}

void Folder::add_file(std::string path, std::string filename, int size)
{
}

File Folder::get_file(std::string path, std::string filename)
{
	return File();
}

std::list<File> Folder::get_files(std::string path, std::string filename)
{
	return std::list<File>();
}

void Folder::delete_file(std::string path, std::string filename)
{
}
