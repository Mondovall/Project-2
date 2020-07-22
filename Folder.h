#pragma once
#include<string>
#include<iostream>
#include<list>
#include<map>
#include<direct.h>
#include<filesystem>
#include <experimental/filesystem>
namespace filesys = std::experimental::filesystem;

bool directoryCheck(std::string path);
struct File ///files are keys in the nodes
{
	std::string name;
	double size;
	File()
	{
		name = "";
		size = 0;

	}

};
class FolderNode  //child folders
{ //Btree Node declaration
public: 
	///Some functions will go here .
	FolderNode*init()
	{
	

	}

private:
	std::string name;
	double size;
	File* fileKey; ///keys for Node
	FolderNode** folderKey; //Node (folder) contained inside a folder and so on. / also contains files.
	bool leafNode; //if a node is a leaf.
	std::list<File*> filesInFolder;

friend class Folder;
};
class Folder //the root node (big folder)
{
public:
	Folder() //default (empty tree/folder).
	{
		name = "";
		rootFolder = nullptr;
		size = 0;

	}
	Folder(std::string name, double size, FolderNode* root) {
		this->name = name;
		this->size = size;
		this->rootFolder = root;
	}
	void add_folder(std::string path, std::string foldername);

	void delete_folder(std::string path, std::string foldername);
	void add_file(std::string path, std::string filename, int size);
	File get_file(std::string path, std::string filename);
	std::list<File> get_files(std::string path, std::string filename);
	void delete_file(std::string path, std::string filename);
private:
	std::string name;
	double size;

	FolderNode* rootFolder; //root node.
};







