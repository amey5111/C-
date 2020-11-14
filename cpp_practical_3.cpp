//c++ program to Swapping of two numbers
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter Your first Number:"<<endl;
    cin>>a;
    cout<<"Enter Your Second Number:"<<endl;
    cin>>b;
    cout<<"Numbers Before Swapping:"<<endl;
    cout<<"a= "<<a<<"b= "<<b<<endl;
    c=a;
    a=b;
    b=c;
    cout<<"Numbers After Swapping:"<<endl;
    cout<<"a= "<<a<<"b= "<<b<<endl;
    return 0;
}
