#include "Folder.h"
//out functions.

//This function is to check a path lead to a directory not a file.
//https://thispointer.com/c-check-if-given-path-is-a-file-or-directory-using-boost-c17-filesystem-library/
bool directoryCheck(std::string path)
{
	try {
		filesys::path Obj(path);
		if (filesys::exists(Obj) && filesys::is_directory(Obj)) {
			return true;
		}
	}
	catch (filesys::filesystem_error& E)
	{
		std::cout << E.what() << std::endl;
	}
	return false;

}
void Folder::add_folder(std::string path, std::string foldername)
{
	bool checking = directoryCheck(path);
	if (checking) { 
		///I believe this will create a folder! Im not entirely sure! 
		//However, we need to make this folder! a FolderNode object by using the string foldername.
		filesys::create_directories(path + foldername);
	}
	
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
