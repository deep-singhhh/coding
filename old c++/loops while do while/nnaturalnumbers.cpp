#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no. of terms till you want sum:";
    cin>>n;
    int sum =0;
    int i=1;   // loop variable
    while (i<=n){   // condition
        sum = sum+i;    //updation
        i++;
    }
    cout<<"Sum is :"<<sum<<endl;

    
      
}