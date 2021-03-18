//GAME proto-type 1
#include<iostream>
#include<string>
using namespace std;

int main()
{
    
   cout<<"**************************************"<<endl;
   cout<<"**                                  **"<<endl;
   cout<<"**        Adventure Game            **"<<endl;
   cout<<"**                                  **"<<endl;
   cout<<"**************************************"<<endl;
   cout<<"***********----WELCOME----*************"<<endl;
   case1:
    int sword= 0;
    string direction;
    string E = "east";
    cout<<"******----Cave of Cacophony----******"<<endl;
    cout<<"NOTE-HINT= Sun rise From which direction "<<endl;
    cout<<"Please Enter the direction (north,south,west,east)  = ";
    cin>>direction;
    
    if (direction == E)
    {
        cout<<" Congrts! You successfully Pass the **Cave of Cacophony**  = "<<endl;
        cout<<"*************-----Twisty Tunnel----***"<<endl;
    }
    else
    {
        cout<<"('.') So SORRY! You Lost in the CAVE TRY AGAIN"<<endl;
        
    }
   
   case2:
   
   string S ="south";
   cout<<"NOTE-HINT = IF canada is the north than what we can say America is ?"<<endl;
    cout<<"NOW! Which Direction you want to go bubby! (north,south,west,east)  = " ;
    cin>>direction;
    
    if (direction == S )
    {
        cout<<"WOW! Great! You cleared THE TUNNEL SEE YOU IN THE NEXT STAGE "<<endl;
        cout<<"*************-----Rapid River----***"<<endl;
        
    }
    else
    {
        cout<<"('.')So SORRY! This TUNNEL is complex TRY AGAIN!"<<endl;
        
        goto case1;
    }
    
    case3: 
    
    string E1= "east";
    string W= "west";
    string N= "north";
    
    cout<<"Okay! lets make a choice you want to go with flow or against the flow =";
        cin>>direction;
        
    if (direction == E1)
    {
     cout<<"Next stage You are Nice going "<<endl;
     cout<<"*************-----Dragon's Den----***"<<endl;
    }
    else if (direction == W)
    {   
        sword =1;
        cout<<"*************-----Secret Sword Stash----***"<<endl;
        cout<<"Awsome! you just reach in the SECRET SWORD STASH and you found a sword here"<<endl;
        
    }
    else if(direction == N )
    {
        cout<<"Welcome Back to the Twisty Tunnel!"<<endl;
        goto case2;
    }
    else
    {
        cout<<"Sad! for you, You reach to the start again"<<endl;
        goto case1;
        
    }
    
    case4:
    if(sword == 1)
    {
         string E2 = "east";
         cout<<"Now which direction you want to go, you have sword to kill the Dragon = ";
         cin>>direction;
        
             if(direction == E2) 
             {
              cout<<"*************-----Rapid River----***"<<endl;
              cout<<"WOW! Great! You come back with sword to Rapid River"<<endl;
            
              string E4= "east";
              string W2= "west";
    
              cout<<"Go for Dragon, sword will kill that dreagon enter the Direction = ";
              cin>>direction;
        
                       if(direction == E4)
                         {
                          cout<<"*************-----Dragon's Den ----***"<<endl;
                          cout<<"**WIN**WIN**WIN**WIN**WIN**WIN**WIN**WIN*"<<endl;
                          cout<<"You Killed the Dragon with the sword"<<endl;
                          cout<<"*************Victory Vault****************"<<endl;
                          cout<<"-winner--winner--winner--winner--winner--winner-"<<endl;
            
                         return 0; 
            
                             }
        
                             else
        {
           cout<<"Sad! for you, You reach to the start again"<<endl;
           
        goto case1;
        }
            
        }
        else
        {
            cout<<"Sad! for you, You reach to the start again"<<endl;
            goto case1;
        
        }
    }
    else 
    {
      string E3 = "east";
        if(direction == E3)
        {
            cout<<"*************-----Dragon's Den----***"<<endl;
            cout<<"*DEATH**DEATH**DEATH**DEATH**DEATH**DEATH*"<<endl;
            cout<<"You enter without a sword so drangon killed you "<<endl;
            cout<<"----------Grievous Graveyard-------------------"<<endl;
            cout<<"***********THE END*****************************"<<endl;
            cout<<"*************Restart the Game**************** "<<endl;
            
            return 1;
    }
   
    }
    
    return 0;
    
}
