#include<iostream>
using namespace std;
int main(){
    const float pi=3.14;
    float radius,area,circumference;
    cout<<"enter radius of circle:";
    cin>>radius;
    area=pi*radius*radius;
    circumference=2*pi*radius;
    cout<<"area of circle="<<area<<endl;
    cout<<"circumference of circle="<<circumference<<endl;
    return 0;

}