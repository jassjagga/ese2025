#include<iostream>
#include<map>
#include<iterator>

using namespace std;
map<int,string>::iterator iter;


int main()
{
    map<int,string> my_map;
    
    my_map[1]="jas";
    my_map[2]="joey";
    my_map[3]="richal";
    my_map[4]="chandler";
    my_map[5]="Monicka";
    my_map[6]="ross";
    
    cout<<my_map[3]<<endl;
    
    return 0;
    
}
