#include<iostream>

using namespace std;

float output;
float a,b;
int p;
int main(){
    
    cout<<"Select operation:\n";
    cout<<"1.addition (a+b)\n";
    cout<<"2.subtraction(a-b)\n";
    cout<<"3.multiplication(a*b)\n";
    cout<<"4.division(a/b)\n";
    cout<<"Enter number(1-4):";
    cin>>p;
    
    cout<<"Enter a:\n";
    cin>>a;
    cout<<"Enter b:\n";
    cin>>b;
    
    switch(p){
        case 1:
            output=a+b;
            //cout<<"a\n";
            break;
        case 2:
            output=a-b;
            //cout<<"b\n";
            break;
        case 3:
            output=a*b;
            //cout<<"c\n";
            break;
        case 4:
            output=a/b;
            //cout<<"d\n";
            break;
    }
    cout<<"Output:\t"<<output;
    cin.ignore();
    cin.get();

    return 0;
}