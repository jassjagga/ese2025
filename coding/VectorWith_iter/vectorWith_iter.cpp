//Program is 
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{   
    vector<string>my_vec;
    vector<string>::iterator iter;
    
    my_vec.push_back("Hello!");
    my_vec.push_back("how");
    my_vec.push_back("are");
    my_vec.push_back("you!");
    
    for(iter = my_vec.begin(); iter !=my_vec.end(); iter++)
    cout<<" "<<*iter;
    /*
    //iterator used to find something from vector
    for(iter = my_vec.begin();iter !=my_vec.end(); iter++)
    {
        if(*iter== "are")
        cout<<"Woah! We Fount it";
    }
    */
    return 0;
    
}

