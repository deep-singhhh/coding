#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a character:";
    char ch;
    cin>>ch;
    int ascii = (int)ch;
    if((ascii>=65 && ascii<=90) || (ascii>=97 && ascii<=122)){
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
            cout<<"Character is a vowel.";
        }
        else{
            cout<<"Character is a consonant";
        }
    }
    else{
        cout<<"The character is not an alphabet.";
    }
    return 0;
}