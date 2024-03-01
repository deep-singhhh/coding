#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Eenter a number:";
    cin>>n;
    int digits =0;
   while(n>0){
    digits++;
    n=n/10;
   } 
   cout<<"NO. of digits:"<<digits<<endl;


    return 0;
}