#include<iostream>
using namespace std;
//Car will be super class
class Car{
public:
    string name,color;
    Car(string _name,string _color){
        name=_name;
        color=_color;
    }
};
//ElectricCar will be child class and inherits froms Car class
class ElectricCar:public Car{
public:
    int batterycapacity;
    ElectricCar(string _name,string _color,int _batterycapacity):Car(_name,_color){
        batterycapacity=_batterycapacity;
    };

};
//Petrol car inherits from Car class
class PetrolCar:public Car{
public:
    int fuelcapacity;
    PetrolCar(string _name,string _color,int _fuelcapacity):Car(_name,_color){
        fuelcapacity=_fuelcapacity;
    }
};
int main(){
    ElectricCar e=ElectricCar("Mercedes","Black",50);
    PetrolCar p=PetrolCar("Omni","white",20);
    cout<<e.name<<endl;
    cout<<p.name<<endl;
    return 0;
}