/*
 * fstream.cpp
 *
 *  Created on: Jul. 21, 2019
 *      Author: jass
 */
#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{
    int number;
    string words;
	ofstream myFile;
	myFile.open ("mytext.txt");
	cout<<"please enter the words = ";

	while(getline(cin,words))
	{
	     myFile<<words;
	}



	myFile.close();

    string line;
	ifstream my1;
	my1.open ("mytext.txt");

	if(my1.is_open())
	{
	    while(getline(my1,line))
	    {
	        cout<<"the line is = "<<line<<endl;

	    }
	}


	return 0;


}
