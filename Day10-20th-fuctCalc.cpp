//calculator using functions
#include<iostream>
using namespace std;
float add(int a, int b)
{
    int c=(a+b);
    return c;
}
float sub(int a, int b){
    int c=(a-b);
    return c;
}
float prod(int a, int b){
    int c=(a*b);
    return c;
}
float divi(float a, float b){
    float c=(a/b);
    return c;
}

int main()
{
    float x,y;
    char cal;
    cout<<"enter the values"<<endl;
    cin>>x>>y;
    cout<<"choose A for addition"<<endl<<"B for subtraction"<<endl<<"C for multiplication"<<endl<<"D for division"<<endl;
    cin>>cal;
    switch(cal)

    {
        case 'A':
        cout<<"the sum is "<<add(x,y)<<endl;
        break;
        case 'B':
        cout<<"the diff is "<<sub(x,y)<<endl;
        break;
        case 'C':
        cout<<"the mul is "<<prod(x,y)<<endl;
        break;
        case 'D':
        cout<<"the div is "<<divi(x,y)<<endl;
        break;
        default:
        cout<<"ERROR"<<endl;
    
    }
}


