#include<iostream>
using namespace std;
int main(){
    float num=15.58971;
    int integralPart;
    float fractionalPart;
    integralPart=(int)num;
    fractionalPart=num-integralPart;
    cout<<"integral part="<<integralPart<<endl;
    cout<<"fractional part="<<fractionalPart<<endl;
    return 0;
}