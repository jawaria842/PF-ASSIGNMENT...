#include<iostream>
using namespace std;
int main (){
    const float pi=3.14;
    float r,h,volume;
    cout<<"enter radius of cylinder:";
    cin>>r;
    cout<<"enter height of cylinder:";
    cin>>h;
    volume=pi*r*r*h;
    cout<<"volume of cylinder="<<volume<<endl;
    return 0;
}