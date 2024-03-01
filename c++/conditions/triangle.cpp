#include<iostream>
using namespace std;
int main(){
    int a , b , c;
    cout<<"Enter first side if triangle:";
    cin>>a;
    cout<<"Enter second side if triangle:";
    cin>>b;
    cout<<"Enter third side if triangle:";
    cin>>c;
    if((a+b>c) && (b+c>a) && (c+a>b) ){
        cout<<"Yes, it is a triangle.";
    }
    else{
        cout<<"It's not a triangle.";
    }
    return 0;
}