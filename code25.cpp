#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float a,b,c,s,area;
    cout<<"enter side a:";
    cin>>a;
    cout<<"enter side b:";
    cin>>b;
    cout<<"enter side c:";
    cin>>c;
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<"area of triangle="<<area<<endl;
    return 0;
}