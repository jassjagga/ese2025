#include<iostream>
#include<string>

int main()
{
	std::string ch1(40,'-');

	std::cout<<ch1<<std::endl;

	std::string name;
	std::cout<<"Please Enter the name of person = ";
	std::cin>>name;
	std::cout<<"Hello! "<<name<<std::endl;

	std::cout<<ch1<<std::endl;

	std::string third="* Hello!, "+name+"! *";
    const std::string space(third.size(),' ');
	std::string second="*" +space+"*";
	const std::string first(third.size(),'*');

	std::cout<<first<<std::endl;
	std::cout<<second<<std::endl;
	std::cout<<third<<std::endl;
	std::cout<<second<<std::endl;
	std::cout<<first<<std::endl;

	std::cout<<ch1<<std::endl;

	const std::string hello="HELLO";
	const std::string message=hello+" ,word"+"!";

	std::cout<<message<<std::endl;

	std::cout<<ch1<<std::endl;

//this will not work

//	const std::string exclam="!";
//  const std::string message1="Hello"+",world"+exclam;
//	std::cout<<message1<<std::endl;

	std::cout<<ch1<<std::endl;

	{
		const std::string s="a string";
		std::cout<<s<<std::endl;


	{
		const std::string s="another string";
		std::cout<<s<<std::endl;

	}}

	std::cout<<ch1<<std::endl;
/*
	{
		std::string s="a string";
		{
			std::string x= s + " , really";
			std::cout<<s<<std::endl;}
			std::cout<<x<<std::endl;

		}

*/

	{
		std::cout<<"what is your name?";
		std::string name;
		std::cin>>name;
		std::cout<<"Hello, "<< name <<std::endl<<"And what is yours?";
		std::cin>> name;
		std::cout<<"Hello, " <<name<<" ,nice to meet you tool"<< std::endl;

	}

	return 0;

}
