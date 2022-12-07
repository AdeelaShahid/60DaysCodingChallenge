//if-else
#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"ENTER YOUR AGE"<<endl;
    cin>>age;
    if(age>18){
        cout<<"WELCOME to the party"<<endl;
    }
    else if(age==18){
        cout<<"NOT ALLOWED"<<endl;

    }
    else{
        cout<<"HEY KID!.. school jao"<<endl;
    }
    return 0;
}