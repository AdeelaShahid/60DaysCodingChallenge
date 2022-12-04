//Calculator using switch case
#include<iostream>
using namespace std;
int main(){
    float a,b;
    char cal;
    cout<<"enter any number"<<endl;
    cin>>a>>b;
    cout<<"choose A for addition"<<endl;
    cout<<"choose S for subtraction"<<endl;
    cout<<"choose M for multiplication"<<endl;
    cout<<"choose D for division"<<endl;
    cin>>cal;
    switch(cal)
    {
        case 'A':
        cout<<"addition is "<<a+b<<endl;
        break;
        case 'S':
        cout<<"subtraction is "<<a-b<<endl;
        break;
        case 'M':
        cout<<"multiplication is "<<a*b<<endl;
        break;
        case 'D':
        cout<<"division is "<<a/b<<endl;
        break;
        default:
        cout<<"ERROR"<<endl;
    }
    return 0;
}