#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the numbers you want to check for:";
    cin>>a>>b>>c;
    if(a ==b+c){
        cout<<"YES";
    }
    else if(b ==a+c){
        cout<<"YES";
    }
    else if(c ==a+b){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;

} 