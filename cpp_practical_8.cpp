# include <iostream>
using namespace std;
// creating a class named as Car
class Car
{
     //Private variables that can be accessed inside the class only
    private:
    int Licence_id, Model_number;

    //Public variables that can be accessed Everywhere inside the class only
    public:
    string name, colour;
    int No_of_seats;



    void setFeatures(){
    //This is the class Method to feed the features
        Licence_id= 12345;
        Model_number= 511201;
        name = "Volkswagen";
        colour = "brown";

    }
    void getFeatures(){
        //This is the class method to print the feeded features
        cout<<"These are the features of my car"<<endl;
        cout<<"Licence_id -: "<<Licence_id<<endl;
        cout<<"model_No. -: "<<Model_number<<endl;
        cout<<"name of company of car -:"<<name<<endl;
        cout<<"colour of car -: "<<colour<<endl;
        
    }

}; 
int main(){
    Car myCar;   //creating the object of class
    myCar.setFeatures();   //accesing the created class method using the object
    myCar.getFeatures();   //accesing the created class method using the object

    return 0;
}