#include<iostream>
#include<iterator>
#include<list>

using namespace std;
list<int>::iterator iter;

void printList(list<int> my_list)
{   
  
    for(iter=my_list.begin();iter !=my_list.end(); iter++)
    {
        cout<<" "<<*iter;
        
    }
}

int main()
{
    list<int>my_list ={2,5,4,1,3,6,8,7};
    cout<<"your entered list without sorting = "<<endl;
    
    printList(my_list);
    cout<<endl;
    
    my_list.sort();
    cout<<"your entered list after sorting = "<<endl;
    
    printList(my_list);
    
    return 0;
    
    
}
