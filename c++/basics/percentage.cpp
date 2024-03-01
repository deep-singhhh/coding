#include<iostream>
using namespace std;
int main(){
    float x1 , x2  , x3 , x4, x5;
    cout<<"Enter the marks in first in subject:";
    cin>>x1;
    cout<<"Enter the marks in second in subject:";
    cin>>x2;
    cout<<"Enter the marks in third in subject:";
    cin>>x3;
    cout<<"Enter the marks in fourth in subject:";
    cin>>x4;
    cout<<"Enter the marks in fifth in subject:";
    cin>>x5;
    float percent = (x1+x2+x3+x4+x5)/5;
    cout<<"Percentage is:"<<percent<<endl;
    return 0;
}