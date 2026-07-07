#include<iostream>
using namespace std ;
#include<string>

int main (){
    int age ;
    int quantity ;
    cout <<"This is a movie ticket booking system."<< "\n"<< "Please enter your age." ;
    cin >> age ;
    if ( age <= 12 ){
        cout << "You are a minor. Your ticket price is Rs.100" << "\n";
        cout << "Enter the quantity " <<"\n" ;
        cin >> quantity ;
        cout <<" Your grand total is:" << 100*quantity ;
    } else if ( age >12 && age < 60  ){
        cout << "You are a Adult. Your ticket price is Rs.250" << "\n";
        cout << "Enter the quantity " <<"\n";
        cin >> quantity ;
        cout <<" Your grand total is:" << 250*quantity ;
    }else if ( age >60 ){
        cout << "You are a senoir citizen. Your ticket price is Rs.150" << "\n";
        cout << "Enter the quantity "  << "\n";
        cin >> quantity ;
        cout <<" Your grand total is:" << 150*quantity ;
    }
    else {cout << "Age is invalid";}

    return 0 ;
}
