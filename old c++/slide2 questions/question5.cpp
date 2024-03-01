#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double a, b, c, x1, x2, D;
    cout<<"Enter the coefficient a:";
    cin>>a;
    cout<<"Enter the coefficient b:";
    cin>>b;
    cout<<"Enter the coefficient c:";
    cin>>c;
    D = b*b - 4*a*c;
    if(D>0){
        x1 = (-b + sqrt(D))/2*a;
        x2 = (-b - sqrt(D))/2*a;
        cout<<"The roots are real and distinct"<<x1<<"and"<<x2<<endl;

    }
    else if(D==0){
        x1 = -b/2*a;
        cout<<"The roota are real and equal"<<x1<<"and"<<x2<<endl;
    }
    else{
        double realpart = -b/2*a;
        double imagpart = sqrt(-D)/2*a;
        cout<<"The roots are complex conjugates:"<<realpart<<" + "<<imagpart<<"i and "<<realpart<<" - "<<imagpart<<"i"<<endl;
    }









    return 0;
}