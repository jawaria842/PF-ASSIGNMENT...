#include<iostream>
using namespace std;
int main(){
    int hours,minutes,seconds;
    int totalSeconds;
    cout<<"enter hours:";
    cin>>hours;
    cout<<"enter minutes:";
    cin>>minutes;
    cout<<"enter seconds:";
    cin>>seconds;
    totalSeconds=(hours*3600)+(minutes*60)+seconds;
    cout<<"total time in seconds="<<totalSeconds<<endl;
    return 0;
}