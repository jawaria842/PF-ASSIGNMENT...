#include<iostream>
using namespace std;
int main(){
    float fahrenheit,celcius;
    cout<<"enter temprature in fahrenheit:";
    cin>>fahrenheit;
    celcius=5/9*(fahrenheit-32);
    cout<<"temprature in celcius:"<<celcius<<endl;
    return 0;
}