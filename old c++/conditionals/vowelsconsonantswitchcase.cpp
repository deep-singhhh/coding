#include<iostream>
using namespace std;
int main(){
    char letter;
    cout<<"Enter the letter you want to check for vowel and consonant: ";
    cin>>letter;
    switch(letter){
        case'a':
        cout<<"Vowel";
        break;
                                                 /* this program can be better because in this program capital letters are not considered*/
        case 'e':
        cout<<"Vowel";
        break;

        case 'i':
        cout<<"Vowel";
        break;

        case 'o':
        cout<<"Vowel";
        break;

        case 'u':
        cout<<"Vowel";
        break;

        default:
        cout<<"Constant";

    }
    return 0;
}