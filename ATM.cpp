#include<iostream>

using namespace std;

int main (){

    int choices;
    int PIN;
    int ball[1];
    int dep[1];

    /*
    Make a ATM machine that display "Balance","Withdraw"."Deposit"
    Requaired degit PIN
    IF the user withraw the balance should dicress
    if the user deposit the balance should incress 
    */
   
    cout << "\n";
    cout << "----------------------------------------------" << endl;
    cout << "                ATM MACHINE" << endl;
    cout << "----------------------------------------------\n" << endl;

    cout << "(0) Exit " << endl;
    cout << "(1) Balance" << endl;
    cout << "(2) Withdraw" << endl;
    cout << "(3) Deposit \n" << endl;

    cout <<"Chosice Number : ";
    cin >> choices;
   
    switch (choices)
    {
    case 1:
        cout << "Please inter you PIN : "; // Balance
        cin>>PIN;

        if(PIN == 7319){
            cout<<"\n";
            cout << "----------------------------------------------" << endl;
            cout << "BALANCE : "<<"10,000"<<endl;
            cout << "----------------------------------------------" << endl;
        }else{
            cout<<"INCORECT PIN"<<endl;
        }
        break;

    case 2:
        cout << "Please inter you PIN : "; // Withdraw
        cin>>PIN;

            if(PIN == 7319){
            cout<<"\n";
            cout << "----------------------------------------------" << endl;
            cout << "BALANCE : "<<"10,000"<<endl;
            cout << "Enter the amount you want to withdraw : ";
            cin >> ball[0];
            cout << "Your balanace now is : " << (10000 - ball[0]) << endl;
            cout << "----------------------------------------------" << endl;
        }else{
            cout<<"INCORECT PIN"<<endl;
        }
        break;

    case 3:
        cout << "Please inter you PIN : " ; // Deposit
        cin>>PIN;

        if(PIN == 7319){
            cout<<"\n";
            cout << "----------------------------------------------" << endl;
            cout << "BALANCE : "<<"10,000"<<endl;
            cout << "Enter the amount you want to deposit : ";
            cin >> dep[0];
            cout <<"Your balance now is : " << (10000 + dep[0])<<endl;
            cout << "----------------------------------------------" << endl;
        }else{
            cout<<"INCORECT PIN"<<endl;
        }
        break;

    default:
        cout<<"NOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO!!!!!!!!!"<<endl;
        break;
    }

    return 0;
}