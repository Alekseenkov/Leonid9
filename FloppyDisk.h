#pragma once
#include<string>
#include<list>
#include<iostream>
#include<algorithm>
#include<numeric>
#define MAXdiskSpace 360

class FloppyDisk
{
public:
	FloppyDisk() { free.push_back(MAXdiskSpace*1024); };
	~FloppyDisk() {};

	void comand();
	void print_list();



private:

	class File
	{
	public:
		File(std::string name_file, int size_file) 
		{
			if ((size_file < 18) || (size_file > 32 * 1024))
				throw std::exception("Error!\n Invalid file size.\n");///////////////////////////////////////////////////////////////
				/*std::cout << "Error!\n Invalid file size.\n";*/
				this->name_file = name_file;
				this->size_file = size_file;
			
		};
		~File() {};
		std::string name_file;
		int size_file;

	
	};

	std::list<File> busy;//занято 
	std::list<int> free;//свободно

	void  write_file(std::string name_file, int size_file);
	void  delete_file(std::string name_file, int size_file);

};



