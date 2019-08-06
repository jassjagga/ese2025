#include<iostream>
//use of #pragma once will stop error here because we are including file twice while log.h conatins struct hye{} which cause dublication error 
#include "log.h"
#include "log.h"

int main()
{
	//by setting breakpoint here (we and study the whole program)
	
	int a=8;
	a++;
	std::string b="hello";
	
	for(int i=0;i!=5;i++)
	{
		const char c=b[i];
		std::cout<<c<<std::endl;
	}
	//instead of cout we make function describing it in other cpp file and accessing it by header file log.h 
	logint();
	log("Hello world!");
	std::cin.get();
	
}
