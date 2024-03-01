#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter an integer:";
    cin>>n;
    if(n>0){
        cout<<"Absolute value of input is:"<<n;
    }
    else{      //  n<=0
        cout<<"Absolute value of input is:"<<(-n);
    }
    return 0;
}