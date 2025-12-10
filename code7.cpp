#include<iostream>
using namespace std;
int main(){
    int rollNo;
    int pf,ic,cg;
    int total;
    int average;
    cout<<"enter roll number:";
    cin >> rollNo;
    cout<<"enter marks of pf:";
    cin >> pf; 
    cout<<"enter marks of ic:";
    cin >> ic;
    cout<<"enter marks of cg:";
    cin >> cg;
    total=pf+ic+cg;
    average=(total)/3;
    cout<<"rollNo:"<<rollNo<<endl;
    cout<<"total marks="<<total<<endl;
    cout<<"average marks="<<average<<endl;
    return 0; 
    
    
}