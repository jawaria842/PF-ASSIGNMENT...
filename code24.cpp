#include<iostream>
using namespace std;
int main(){
    int marks1,marks2,marks3,marks4,marks5;
    int total;
    float average;
    cout<<"enter marks of subject 1:";
    cin>>marks1;
    cout<<"enter marks of subject 2:";
    cin>>marks2;
    cout<<"enter marks of subject 3:";
    cin>>marks3;
    cout<<"enter marks of subject 4:";
    cin>>marks4;
    cout<<"enter marks of subject 5:";
    cin>>marks5;
    total=marks1+marks2+marks3+marks4+marks5;
    average=(marks1+marks2+marks3+marks4+marks5)/5;
    cout<<"total="<<total<<endl;
    cout<<"average="<<average<<endl;
    return 0;
}