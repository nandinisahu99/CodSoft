#include<bits/stdc++.h>
using namespace std;

unordered_map<string,int>mp;

void addTask(string task){
    mp[task]=1;
    cout<<"Task is succefully added"<<endl;
}

void displayTask(){
    cout<<"Pending Task are:-"<<endl;
    for(auto it:mp){
        if(it.second==1){
            cout<<it.first<<endl;
        }
    }
    cout<<endl;
    cout<<"Completed Task are:-"<<endl;
    for(auto it:mp){
        if(it.second==0){
            cout<<it.first<<endl;
        }
    }
    cout<<endl;
}

void MarkTask(string task){
    mp[task]=0;
    cout<<"Succefully Marked the task is Completed"<<endl;
}

void removeTask(string task){
    mp.erase(task);
    cout<<"Succefully removed the task"<<endl;
}

int main(){
    
    cout<<"Welcome to TO-DO List"<<endl;
    char ch;
    do{
        int x;
        cout<<"Choose (1 or 2 or 3 or 4) for:- \n1.) Add Task \n2.) View Task \n3.) Marrk Task as Completed \n4.) Remove Task\n Which one you want to perform: ";
        cin>>x;
        
        switch(x){
            case 1:{
                string task;
                cout<<"Enter the task: ";
                cin>>task;
                addTask(task);
                break;
            }
            case 2:
                displayTask();
                break;
            case 3:{
                string task;
                cout<<"Enter the task which you mask as completed: ";
                cin>>task;
                MarkTask(task);
                break;
            }
            case 4:{
                string task;
                cout<<"Enter the task which you want to delete: ";
                cin>>task;
                removeTask(task);
                break;
            }
            default:
                cout<<"Choose any one option to perform the task";
                break;
        }
        cout<<"Do you want to continue to perform any other operations(y/n): ";
        cin>>ch;
        cin.ignore();
        cout<<endl;
    }while(ch=='y');
    
    return 0;
}