#include<bits/stdc++.h>
using namespace std;

int main(){

    again:
    srand(time(NULL));
    int random_number = rand() % 100 + 1;
    cout<<"You have only Five chance to win the Game"<<endl;
    int n;
    int c=1;
    do{
        cout<<"Enter the number (1 - 100) : ";
        cin>>n;
        if(n < random_number){
            c++;
            cout<<"Enter greater "<<endl;
        }
        else if(n > random_number){
            c++;
            cout<<"Enter lesser : "<<endl;
        }
        else{
            cout<<"Yes! you have found the number in "<<c<<" attempts"<<endl;
        }
    }while(n != random_number);

    if(c<=5){
        cout<<"You Win!"<<endl;
    }
    else{
        cout<<"Oh! You Loss"<<endl;
    }

    string str;
    cout<<"Do You want to play again (yes/no) : ";
    cin>>str;

    if(str == "yes"){
        goto again;
    }
    else if(str == "no"){
        cout<<"Ok! End Game"<<endl;
    }
    else{
        cout<<"Invalid Choice"<<endl;
    }
    return 0;
}