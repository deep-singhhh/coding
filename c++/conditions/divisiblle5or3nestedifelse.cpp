#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a number:";
    int n;
    cin>>n;
    if(n%5==0){
        if(n%3==0){
            cout<<"Number is divisble by 5 and 3 both";
        }
    }
    else{
        cout<<"Not matching condition";
    }
    return 0;
}