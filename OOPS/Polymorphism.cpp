#include<iostream>
using namespace std;
class Car{
public:
    string name,color;
    Car(string _name,string _color){
        name=_name;
        color=_color;
    }
    virtual void checkcapacity(){
        cout<<"I am not sure of fuel"<<endl;
    }
};

class ElectricCar:public Car{
public:
    int batterycapacity;
    ElectricCar(string _name,string _color,int _batterycapacity):Car(_name,_color){
        batterycapacity=_batterycapacity;
    };
      void checkcapacity(){
        cout<<"The battery capacity is :"<<batterycapacity<<endl;
    }

};

class PetrolCar:public Car{
public:
    int fuelcapacity;
    PetrolCar(string _name,string _color,int _fuelcapacity):Car(_name,_color){
        fuelcapacity=_fuelcapacity;
    }

    void checkcapacity(){
        cout<<"Checking Fuel Capacity :"<<fuelcapacity<<endl;
    }
};
//class ElectricCar and PetrolCar has same method check capacity but in Electric Car it prints battery capcity and in Petrol Car it prints Fuel capacity
int main(){
    ElectricCar e=ElectricCar("Mercedes","Black",50);
    PetrolCar p=PetrolCar("Omni","white",20);
    e.checkcapacity();
    p.checkcapacity();
    Car *c1=&e;
    Car *c2=&p;
    c1->checkcapacity();
    c2->checkcapacity();
    return 0;
}