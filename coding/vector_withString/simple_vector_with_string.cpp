//vector to store a string 
// simple program to learn how to store string in vector
#include<iostream>
#include<vector>
#include<string>

using namespace std;

void print(vector<string>my_vec)
{
    
    for(int i=0;i<my_vec.size();i++)
    cout<<my_vec.at(i)<<" ";
    
}

int main()
{   
      string words;
      vector<string> my_vec;
     cout<<"please enter any sentance =";
     //while command is used to push back the every word of the sentence to the vector
     while(cin>>words)
     {
       my_vec.push_back(words);
     }
    
  //  my_vec.push_back(11);
//    my_vec.push_back(10);
  //  my_vec.push_back(8);
    //my_vec.push_back(7);
//    my_vec.push_back(6);
    cout<<"The size of the array ="<< my_vec.size() <<endl;
    cout<<"vector is =";
    print(my_vec);
    
    //this is used to erase the element from the vector
   // my_vec.erase(my_vec.begin());
   //my_vec.erase(my_vec.begin()+2);
   // cout<<endl;
    //cout<<"now vector is = ";
    //print(my_vec);
    
    return 0;
    
    
}
