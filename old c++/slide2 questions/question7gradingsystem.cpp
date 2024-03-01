#include<iostream>
using namespace std;
int main(){
    float marks;
    cout<<"Enter your marks:";
    cin>>marks;
    if(marks>=90){
        cout<<"Grade Ex.";
    }
    else if(marks<90 && marks>=80){
        cout<<"Grade A.";
    }
     else if(marks<80 && marks>=70){
        cout<<"Grade B.";
    }
    else if(marks<70 && marks>=60){
        cout<<"Grade C.";
    }
    else if(marks<60 && marks>=50){
        cout<<"Grade D.";
    }
        else if(marks<50 && marks>=35){
        cout<<"Grade P.";
    }else{
        cout<<"Grade F.";
    }
   



    return 0;
}