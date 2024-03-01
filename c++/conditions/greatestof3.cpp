#include<iostream>
using namespace std;
int main(){
    int a , b, c;
    cout<<"Enter first number:";
    cin>>a;
    cout<<"Enter second number:";
    cin>>b;
    cout<<"Enter third number:";
    cin>>c;
    if(a>b && a>c){
        cout<<a<<" is greatest";
    }
    if(b>c && b>a){
        cout<<b<<" is greatest";
    }
    if(c>>a && c>>b){
        cout<<c<<" is greatest";
    }



    return 0;
}