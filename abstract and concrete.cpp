
#include<iostream>
using namespace std;
class vehicle{
public:
        string name;
        int price;
         int speed;
public:
    vehicle(string a,int p,int s)
    {
     name=a;
      price=p;
      speed=s;
      cout<<"Abstract class constructor"<<endl;
    }
    virtual void displayinfo()=0;

};

class car: public vehicle{
    public:
    car(string name,int price,int speed):  vehicle(name,price,speed)
    {
        cout<<"concrete class constructor"<<endl;

    }
    void displayinfo()
    {
        cout<<"car name is:" <<name<<endl<<"its price is:" <<price<<endl
        <<"running at speed "<<speed<<endl;
    }


};
int main()
{
    car obj("xyz",23,50);
    obj.displayinfo();
    return 0;
}
