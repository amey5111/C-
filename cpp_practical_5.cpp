//c++ program to Find out largest number among three numbers
#include<iostream>
using namespace std;
int main(){
    int num1, num2, num3;
    cout<<"Enter the First Number";
    cin>>num1;
    cout<<"Enter the Second Number";
    cin>>num2;
    cout<<"Enter the Third Number";
    cin>>num3;
    if(num1<num2)
    {
        if (num2<num3)
        {
            cout<<num3<<" is the greatest Number";

        }
        else
        {
            cout<<num2<<" is the greatest Number";
        }
    }
    else if (num1<num3)
    {
        cout<<num3<<" is the greatest Number";
    }
    else
    {
        cout<<num1<<" is the greatest Number";
    }
    return 0;
}
