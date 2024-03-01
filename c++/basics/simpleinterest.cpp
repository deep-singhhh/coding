#include<iostream>
using namespace std;
int main(){
    float p , r, t;
    cout<<"Enter the Prinncipal:";
    cin>>p;
    cout<<"Enter the Rate:";
    cin>>r;
    cout<<"Enter the Time:";
    cin>>t;
    float SI = (p*r*t)/100.0;
    cout<<"Simple Iterest is :"<<SI<<endl;

    return 0;

}