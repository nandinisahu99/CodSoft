#include<bits/stdc++.h>
using namespace std;

int main(){
    int lb=1,ub=100;
    int random=floor(rand()%(ub-lb+1));

    cout<<random;
    int count=0;
    do{
        count++;
        int userinput;
        cout<<"Guess the random generated number in bewteen(1 to 100): ";
        cin>>userinput;
        
        if(userinput==random){
            cout<<"Congratulations get the correct answer in "<<count<< " attempt";
            break;
        }
        else if(userinput<random) cout<<"Your guess is low. Please try again to get the correct answer";
        else cout<<"Your guess is high. Please try again to get the correct answer";
        cout<<endl;
    }while(true);
    
    return 0;
}

