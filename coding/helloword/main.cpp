#include<iostream>
#include "log.h"
#include "log.h"

int main()
{
	int a=8;
	a++;
	std::string b="hello";
	
	for(int i=0;i!=5;i++)
	{
		const char c=b[i];
		std::cout<<c<<std::endl;
	}
	
	logint();
	log("Hello world!");
	std::cin.get();
	
}