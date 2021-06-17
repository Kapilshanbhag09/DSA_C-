#include<iostream>
using namespace std;

class AbstractCar{
    virtual void getcarprice()=0;
};
class Car: AbstractCar{
private:
    string id;
public:
    int price=2000000;
    void getcarprice(){
            cout<<"Price is: "<<price<<endl;
        
        
    }
};
int main(){
    Car c=Car();
    c.getcarprice();
    
    return 0;
}