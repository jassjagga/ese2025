#include<iostream>
#include<map>
#include<string>
#include<iterator>
#include<fstream>


using namespace std;

int main()
{
    string line;
    ofstream myfile;
    myfile.open ("mytxt.txt");
    cout<<"Postion of pointer when we open file = "<<myfile.tellp()<<endl;
    cout<<"Please type something =";
    while(getline(cin,line))
    {
        myfile<<line;
        cout<<endl;
    }
    cout<<"Position after enter something in file = "<<myfile.tellp()<<endl;

    myfile.close();

    string words;
    fstream myfile1;
    myfile1.open("mytxt.txt");

   cout<<"postion of pointer when we open file in reading = "<<myfile1.tellg()<<endl;
  //
    getline(myfile1,words);
    cout<<"data in the file = "<<words<<endl;
    //moving pointer from current postion to the end
    myfile1.seekg(ios::cur,ios::end);
    //now the position of the pointer
    cout<<"position after reading the data = "<<myfile1.tellg()<<endl;
   //adding something at the position of pointer
    myfile1<<"how are you doing";

    cout<<"position of the pointer after adding someting new = "<<myfile1.tellp()<<endl;
    myfile1.close();


    return 0;
}
