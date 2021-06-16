#include<iostream>
using namespace std;
class Car{
    public:
        int mil;
        string com;
        Car(int milage, string company){
            mil=milage;
            com=company;
        }
        void show(){
            cout<<"MIlage: "<<mil<<endl;
        }
};
class Employee{
    private:
        string last="Shanbhag";
    public:
        string name="Kapil";
        string Comp;
        int age;
        void introduce(){
            cout<<"My last name: "<<last<<endl;
        }


};
int main(){
    Car c=Car(20,"Ford");
    c.show();
    Employee e1=Employee();
    e1.introduce();


}