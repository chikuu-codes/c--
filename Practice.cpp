#include<iostream>
using namespace std ;

// Function to find hoghest marks in array 
int topper(int array[] , int size){
    int max ;
    int i = 0;
    max= array[0];
    for (i ; i< size; i++){
        if (array[i] > max){
            max= array[i] ;
        }

        }
        return max ;
};

int main (){
    int n , sum= 0 ,avg  ;
    cout << " Enter how many students are there:" ;
    cin >> n ;
    int marks[n] ;
    for (int i = 0 ; i <n ; i++){
        cout <<" Enter marks of student"  << i+1;
        cin >> marks[i] ;
    }
    for (int i = 0 ; i<n ; i++){
         sum = sum + marks[i] ;
    }
    avg = sum/n ;
    cout <<"Average of students is:"<<avg << endl ;
    cout<< "Topper is :" << topper(marks , n) ;


    return 0 ;
}