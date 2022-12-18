//switchCase
#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"tell me your age"<<endl;
    cin>>age;
    switch(age)
    {
        case 20:
        cout<<"you are adult"<<endl;
        break;
        case 55:
        cout<<"you are senior citizen"<<endl;
        break;
        case 80:
        cout<<"rest in peace"<<endl;
        break;
        default:
        cout<<"no special case"<<endl;
        break;

    }
    cout<<"done with category division"<<endl;
    return 0;
}