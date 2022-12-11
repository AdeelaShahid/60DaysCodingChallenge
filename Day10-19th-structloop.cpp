//write a program using struct with the help of loop
#include<iostream>
using namespace std;
struct student
{
int rollno[10];
string name;
int age[50];
};
int main()
{
    int n;
    cout<<"enter the number of students"<<endl;
    cin>>n;
    struct student st;
    for(int i = 0; i=n; i++)
    {
        cout<<"student"<< i+1 <<endl;
        st.rollno[i] = i+1;
        cout<<st.rollno[i]<<endl;
        cout<<"enter name"<<endl;
        cin>>st.name;
        cout<<"enter age"<<endl;
        cin>>st.age[i];
    }
    return 0;

}