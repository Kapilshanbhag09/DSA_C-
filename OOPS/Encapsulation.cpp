#include<iostream>
using namespace std;
class Car{
private:
    string id;
    // Id can be acces from int main only with help of setid and getid
public:
    string name;
    void setid(string _id){
        id=_id;
    }
    string getid(){
        return id;
    }
};
int main(){
    Car c=Car();
    c.name="Honda";
    c.setid("xkdfdk1");
    cout<<"The car id is: "<<c.getid()<<endl;
    return 0;
}