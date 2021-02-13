/*
 * File_toVector.cpp

 *  Created on: Jul. 23, 2019
 *      Author: jass
 */
#include<iostream>
#include<map>
#include<string>
#include<iterator>
#include<fstream>
#include<vector>

using namespace std;
vector<string>::iterator iter;

void printVector(vector<string> myVec)
{   cout<<"your Vector have this = ";
    for(iter = myVec.begin();iter != myVec.end();iter++)
    {
        cout<<*iter;
    }
}

int main()
{
    string words;

    fstream myFile;
    myFile.open("mytext.txt");

    vector<string> myVec;
    while(getline(myFile,words))
    {
        myVec.push_back(words);
    }

    printVector(myVec);

    return 9;

}




