# include <iostream>
using namespace std;
class WaterTank
{
    public:
    int height;
    int length; 
    int breadth; 
    

};



int main (){
    WaterTank Tank_No_1;
    cout<<"Enter height of the tank :"<<endl;
    cin>>Tank_No_1.height;
    cout<<"Enter length of the tank :"<<endl;
    cin>>Tank_No_1.length;
    cout<<"Enter bredth of the tank :"<<endl;
    cin>>Tank_No_1.breadth;
    cout<<"volume of Tank_No_1 :"<<Tank_No_1.height * Tank_No_1.length * Tank_No_1.breadth;



    return 0;
}