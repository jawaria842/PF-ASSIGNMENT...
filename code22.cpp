#include<iostream>
#include<string>
using namespace std;
int main(){
    string name;
    int age;
    float height;
    char gender;
    cout<<"enter name:";
    cin>>name;
    cout<<"enter age:";
    cin>>age;
    cout<<"enter height(in cm):";
    cin>>height;
    cout<<"enter gender(M/F):";
    cin>>gender;
    cout<<"\nstudent details\n";
    cout<<"name:"<<name<<endl;
    cout<<"age:"<<age<<endl;
    cout<<"height:"<<height<<"cm"<<endl;
    cout<<"gender:"<<gender<<endl;
    return 0;

}