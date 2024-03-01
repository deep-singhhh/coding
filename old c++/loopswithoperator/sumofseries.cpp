//    1-2+3-4......n


#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter thr number of term till you want:";
    cin>>n;
    int result =0;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            result =result -i;
        }
        else{
            result =result +i;
        }
    }
    cout<<result<<endl;
    return 0;
}