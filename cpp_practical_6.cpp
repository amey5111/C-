# include<iostream>
using namespace std;
class SampleClass
{
    public:
    void giveMessage()
    {
        cout<<"Hello Now the object is created";
    }
};
int main (){
    SampleClass sample_obj;
    sample_obj.giveMessage();



    return 0;
}