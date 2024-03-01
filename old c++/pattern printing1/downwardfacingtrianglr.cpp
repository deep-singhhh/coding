/*
#include<iostream>
using namespace std;
int main(){
    int r;
    cout<<"Enter the number of rows:";
    cin>>r;                                                  
    for(int i=r;i>=r;--i){
        for(int j=1;j<=i;++j){
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}

*/

#include <iostream>
using namespace std;

int main() {
    int r;
    cout << "Enter the number of rows: ";
    cin >> r;

    for (int i = r; i >= 1; --i) {
        for (int j = 1; j <= i; ++j) {
            cout << " * ";
        }
        cout << endl;
    }

    return 0;
}

