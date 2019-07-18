#include<iostream>
#include<vector>
#include<string>
#include<iterator>

using namespace std;
vector<string>::iterator iter;
vector<string>::size_type maxlen =0;
vector<string>::size_type current =0;    

void print(vector<string> my_string)
{
    cout<<"You enter this sentence ="<<endl;
    for(iter=my_string.begin(); iter != my_string.end(); iter++)
    {
        cout<<" "<<*iter;
    }
}
int main()
{
    vector<string> my_string;
    string words;
   // my_string={"hello", "hi","diggerone","bigest_element","thenextone","small","max",};
    
    cout<<"Please enter any sentence = ";
    
    while(cin>>words)
    {
        my_string.push_back(words);
        
    }
    
    string max_string;

    for(iter= my_string.begin();iter !=my_string.end();iter++)
    {  
        
      current = (*iter).size();
        
        while(current>maxlen)
        {
            maxlen = current;
            max_string=*iter;
            
        }
        
    }
    cout<<endl;
    print(my_string);
    cout<<endl;
    cout<<"Biggest string or word in this sentence is = " <<max_string;

    return 0;
    
}


