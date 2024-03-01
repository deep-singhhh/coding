#include<iostream>
using namespace std;
int main(){
    int a , b;
    char op;
    cout<<"Enter first value:";
    cin>>a;
    cout<<"Enter operaton:";
    cin>>op;
    cout<<"Enter second value:";
    cin>>b;
    switch(op){
        case '+':
        cout<< a+b;
        break;
        case '-':
        cout<< a-b;
        break;
        case '*':
        cout<< a*b;
        break;
        case '/':
        cout<< a/b;
        break;
    }
    return 0;
}