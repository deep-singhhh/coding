#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of terms for this AP 1,3,5,7,9,......";
    cin>>n;
    for(int i=1;i<=(2*n)-1;i=i+2){
        cout<<i<<endl;
    }
    return 0;
}