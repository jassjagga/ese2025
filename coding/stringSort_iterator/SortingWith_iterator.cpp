#include<iostream>
#include<vector>
#include<algorithm>
#include <iterator>

using namespace std;

vector<string>::iterator iter;

/*void print(vector<string> my_vec)
{
    cout<<"your enter sentence is= ";
    for(iter=my_vec.begin();iter <my_vec.end();iter++)
    {
    cout<<" "<<*iter;
    
    }

}
*/
int main()

{
    string words;
    vector<string> my_vec;
    std::vector<string>::iterator iter; 
    cout<<"Please enter any sentence ="<<endl;
   
    while (cin>>words)
    {
        my_vec.push_back(words);
    
    }
    
    sort(my_vec.begin(),my_vec.end());
    int vSize = my_vec.size();

    
   int wordcount =1;
    words = my_vec[0];
    
    for(iter=my_vec.begin();iter < my_vec.end();iter++)
    {
     if (words != *iter)
     {
     cout<<" "<<words<<" "<<wordcount<<endl;
     wordcount =0;
     words= *iter;
    }
     wordcount++;   
    }
   
  // print(my_vec);
 // cout<<"The size of the sentence= "<<my_vec.size();
    
    return 0;
    
}
