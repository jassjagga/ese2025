/*
 * file_Read.cpp
 *
 *  Created on: Jul. 16, 2019
 *      Author: jass
 */
#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{
	ifstream inFile;

	inFile.open("words.txt");

	if(inFile.fail()){

		cerr<<"errer while opening"<<endl;
	exit(1);
	}

	int x,y;
	inFile >> x >> y;
	cout<<"number 1"<<x <<endl;
	cout<<"number 2"<<y<<endl;

	return 0;
}



