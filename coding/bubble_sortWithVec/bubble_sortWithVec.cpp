/*
 * bubble_sortWithVec.cpp
 *
 *  Created on: Jul. 16, 2019
 *      Author: jass
 */
#include<iostream>
#include<vector>
#include<iterator>
#include<string>
#include<algorithm>
using namespace std;

vector<int>::iterator iter;

void print(vector<int> my_vec)
{
	cout<<"The vector is = ";
	for(iter=my_vec.begin();iter != my_vec.end();iter++)
	{
		cout<<" "<<*iter;
	}
}

int main()
{
	vector<int> my_vec ={1,3,5,2,6,8,9};

	sort (my_vec.begin(),my_vec.end());

	print(my_vec);

	return 0;

}



