#include<iostream>
using namespace std;
int main(){
    int a,b,temp;
    cout<<"enter value of a:";
    cin>>a;
    cout<<"value of b:";
    cin>>b;
    //usin temp
    temp=a;
    a=b;
    b=temp;
    cout<<"after interchange:"<<endl;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    return 0;

}