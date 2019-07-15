//Simple program to understanding the vector

#include<iostream>
#include<vector>
#include<string>

using namespace std;
//print function using loop to get every element of the array one by one
void print(vector<int>my_vec)
{
    
    for(int i=0;i<my_vec.size();i++)
    cout<<my_vec.at(i)<<" ";
    
}

int main()
{   
    //int number;
      vector<int> my_vec;
   // cout<<"please enter any number =";
    //cin>>number;
    //push_back is used to load the every element to the vector 
    my_vec.push_back(11);
    my_vec.push_back(10);
    my_vec.push_back(8);
    my_vec.push_back(7);
    my_vec.push_back(6);
    cout<<"The size of the array ="<< my_vec.size() <<endl;
    cout<<"vector is =";
    print(my_vec);
    
    
    return 0;
    
    
}
