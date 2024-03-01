#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number you want to check i.e, divisible by 3 or 5: ";
    cin>>n;
    if(n%3==0 || n%5==0){
        cout<<"Given input is divisible by either 3 or 5.";
    }
    return 0;
}