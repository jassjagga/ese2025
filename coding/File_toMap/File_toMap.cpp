/*
 * File_toMap.cpp
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

map<string,string>::iterator iter;
//vector<string>::size_type word;

void printMap(map<string,string> myMap)
{   cout<<"your map have this = ";
    for(iter = myMap.begin();iter != myMap.end();iter++)
    {
        cout<<iter->first<< "=>" <<iter->second<<endl;
    }
}

int main()
{
    string words;
   map<string,string> myMap;

    fstream myFile;
    myFile.open("mytext.txt");

   // vector<string> myVec;
    while(getline(myFile,words))
    {
        myMap.insert(pair<string,string>(words,words));
    }


   printMap(myMap);
    
    return 0;

}




