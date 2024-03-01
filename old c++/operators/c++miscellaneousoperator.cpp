#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<sizeof(a)<<endl;  //4


    char name='a';
    cout<<sizeof(name)<<endl; //1

    bool flag;
    a=name? flag = true : flag = false;
    cout<<flag<<endl; // 0

    cout<<(&a)<<endl;

    int c = 6;
    cout<<(c++)<<endl; // 6
    int b=5;
    cout<<(++b)<<endl;  //6

    cout<<(b+c)<<endl;  // 13
     


    return 0;
}