#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    if(n%5==0 || n%3==0){
        cout<<"Divisible by 5 or3.";
    }
    else{
        cout<<"Not divisible by 5 and also not by 3.";
    }
    return 0;
}