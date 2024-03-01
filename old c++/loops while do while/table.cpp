#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number for table:";
    cin>>n;
    for(int i=1;i<=10;i++){
        int m=n*i;
        cout<<n<<" x "<<i<<" = "<<m<<endl;
    }
    return 0;
}