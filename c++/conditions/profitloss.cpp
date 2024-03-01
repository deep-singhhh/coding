#include<iostream>
using namespace std;
int main(){
    float cp, sp;
    cout<<"Enter the cost price of item:";
    cin>>cp;
    cout<<"Enter the selling price of item:";
    cin>>sp;
    if(sp>cp){
        float profit = sp-cp;
        cout<<"Profit:"<<profit;
    }
    if(sp<cp){
        float loss = cp-sp;
        cout<<"Loss:"<<loss;
    }
    if(sp==cp){
        cout<<"NO Profit and NO Loss";
    }


    return 0;
}