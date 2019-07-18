#include<iostream>
#include<list>
#include<string>
#include<iterator>

using namespace std;
list<string>::iterator iter;
list<string>::size_type maxlen =0;
     
     list<string>::size_type current =0;    

int main()
{
    list<string> my_string;
    my_string={"hello", "hi","diggerone","bigest_element","thenextone","small","max",};
    
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
    
    cout<<max_string;

    return 0;
    
}


