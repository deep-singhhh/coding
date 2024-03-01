#include<iostream>
using namespace std;
int main(){
    int a , b;
    cout<<"Enter the first numbers you want to swap:";
    cin>>a;
    cout<<"Entr the second number you want to swap:";
    cin>>b;

    a = a+b;
    b = a-b;
    a = a-b;
    cout<<"After swapping the numbers are:"<<endl<<a<<endl<<b;
    
    return 0;
}