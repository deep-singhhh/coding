#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of terms for ap 4 7 10 13 ...:";
    cin>>n;
    int a=4;
    for(int i=1;i<=n;i++){
        cout<<a<<endl;
        a=a+3;
    }
    return 0;
}