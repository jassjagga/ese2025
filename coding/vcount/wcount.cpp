#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

 int main()
 {
     cout<<"Please enter some text. Press <CTRL><D> to signal EoF:" <<endl;
     string words;
     vector<string> container;

     while(cin>>words)
     {
         container.push_back(words);

     }
    sort(container.begin(),container.end());

    int vSize= container.size();

    if(vSize==0) {
        cout<<"You type nothing "<<endl;
        return 1;

    }
    cout<<"Here are the word counts for each word in your text:"<<endl;
    int wordCount=1;
    words=container[0];

    for(int i=1;i<vSize;i++) {
        if (words!=container[i]) {
            cout<<words <<" : " <<wordCount<<" "<<endl;
            wordCount=0;
            words=container[i];
        }
        wordCount++;
    }


    return 0;

 }
