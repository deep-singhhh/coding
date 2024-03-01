#include<iostream>
using namespace std;
int main(){
    float n;
    cout<<"Enter a number:";
    cin>>n;
    if(n>100 && n<1000){
        cout<<"Given number is a three digit number.";
    }
    else{
        cout<<"Given number is not a three digit number.";
    }
    return 0;
}