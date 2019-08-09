#include<iostream>
//#include "loge.h"
#define log(x) std::cout<< x << std::endl;
int main()
{
	/* void* ptr = nullptr;
	log(ptr);
	//simple pointer
	int var = 8;
	int* p = &var;
	log("var");
	log(var);
	log("pointer first time");
	log(p);
	
	//Acessing the date and writing to it
	*p = 10;
	log("log pointr after change");
	log(p);
	log("var");
	log(var);
	*/
	//buffer of memory and set the pointer to start
	
	char* buffer = new char[8];
	memset(buffer, 0, 8);

	char** p = &buffer;

	delete[] buffer;
	std::cin.get();
}