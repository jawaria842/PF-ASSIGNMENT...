#include<iostream>
using namespace std;
int main(){
    int num1,num2,num3,num4,max;
    cout<<"enter four num:";
    cin>>num1>>num2>>num3>>num4;
    //assume
    max=num1;
    if(num2>max){
        max=num2;
    }
    if(num3>max){
   max=num3;
    }
    if(num4>max){
        max=num4;
    }
        cout<<"maximum number is:"<<max<<endl;
        return 0;
    
}