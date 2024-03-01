#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age:";
    cin>>age;
    if(age<12){
        cout<<"you aere a child.";
    }
    else if(age>=12 & age<18){
        cout<<"you are a teenager.";
    }
    else{
        cout<<"you are an adult.";
    }



    return 0;
}