#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    bool flag = true; // true means prime
    for(int i=2;i<=n-1;i++){
        if(n%i==0){   // i is a factor of n
            flag = false;  // false means composite
            break;
        }
        // 1 2 3 5 7 11 13 17 19
    }
    if(n==1) cout<<"1 ia neither prime nor composite.";
    else if(flag==true) cout<<n<<" is a prime .";
    else cout<<n<<" is a composite.";
    return 0;
}