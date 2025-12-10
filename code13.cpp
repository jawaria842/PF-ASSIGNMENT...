#include<iostream>
using namespace std;
int main(){
    const float pi=3.14;
    float r,area;
    cout<<"enter radius of circle:";
    cin>>r;
    area=pi*r*r;
    cout<<"area of circle="<<area<<endl;
    return 0;
}