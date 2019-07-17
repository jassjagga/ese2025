#include<iostream>
#include<map>
#include<iterator>

using namespace std;
map<int,string>::iterator iter;

void printmap(map<int,string> my_map)
{
    for(iter=my_map.begin();iter != my_map.end();iter++)
    {
        cout<<iter->first<< "=>" <<iter->second<<endl;
    }
}￼
jassjagga Simple Program to bubble sort with vector also include the iterators
Latest commit f3883a5  20 hours ago
Type	Name	Latest commit message	Commit time
coding	Simple Program to bubble sort with vector also include the iterators	20 hours ago
LICENSE

int main()
{
    map<int,string> my_map;
    
    my_map[1]="jas";
    my_map[2]="joey";
    my_map[3]="richal";
    my_map[4]="chandler";
    my_map[5]="Monicka";
    my_map[6]="ross";
    //to print single element by key 
    cout<<my_map[3]<<endl;
    //printing whole map keys and values using iterator 
    for(iter=my_map.begin();iter != my_map.end();iter++)
    {
        cout<<iter->first<< "=>" <<iter->second<<endl;
    }
    //insert function in maps
    my_map.insert(pair<int,string>(7,"peebhi"));
    
    printmap(my_map);
    
    //find function 
    iter=my_map.find(4);
    cout<<"key found = "<<iter->first<<" - " <<iter->second<<endl;
    
    //the size of the map 
    cout<<"the size of the map is = " <<my_map.size();
    
    
    return 0;
    
}
