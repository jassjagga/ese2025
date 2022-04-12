#include<iostream>
#include<list>
#include<iterator>
#include<string>

using namespace std;

list<string>::iterator iter;

void printList(list<string> listWords)
{   
    cout<<endl;
    cout<<" your entered sentence is= "<<endl;
    
    for(iter=listWords.begin();iter !=listWords.end();iter++)
    {
    cout<<" "<<*iter;
    
    }
}


int main()
{
    string words;
    list<string>listWords;
    
    cout<<"Please enter any sentance= ";
    
    while(cin>>words)
    {
      listWords.push_back(words);
    }
    printList(listWords);
    
    return 0;
       
}
