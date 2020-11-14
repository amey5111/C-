//c++ program to check wether the number is even or odd
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a Number:";
    cin>>num;
    if (num%2== 0)
    {
        cout<<num<<" is a EVEN number";
    }
    else
    {
        cout<<num<<"is a ODD number";
    }
    return 0;

}
