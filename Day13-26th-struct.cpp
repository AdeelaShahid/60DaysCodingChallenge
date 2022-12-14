//write a prog. using struct keyword
#include <iostream>
using namespace std;
struct family
{
    int age;
    char favAlph;
    float salary;
};

int main(){
    struct family adeela;
    adeela.age = 21;
    adeela.favAlph = 'A';
    adeela.salary = 0.00000;
    cout<<"adeela"<<endl;
    cout<<adeela.age<<endl;
    cout<<adeela.favAlph<<endl;
    cout<<adeela.salary<<endl;  
    struct family papa;
    papa.age = 48;
    papa.favAlph = 's';
    papa.salary = 1234567890000;
    cout<<"papa"<<endl;
    cout<<papa.age<<endl;
    cout<<papa.favAlph<<endl;
    cout<<papa.salary<<endl; 
    struct family ahmad;
    ahmad.age = 21;
    ahmad.favAlph = 'a';
    ahmad.salary = 0000;
    cout<<"ahmad"<<endl;
    cout<<ahmad.age<<endl;
    cout<<ahmad.favAlph<<endl;
    cout<<ahmad.salary<<endl; 

    return 0;

}