//union
#include<iostream>
using namespace std;
int main(){
    union property
    {
        /* data */
        int item;
        char alp;
        float value;
    };
    union property laptop;
    laptop.value = 80000;
    laptop.alp = 'L';
    cout<<laptop.alp;
    
}
