
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