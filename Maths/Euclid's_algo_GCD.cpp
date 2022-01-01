#include<iostream>
using namespace std;

int gcd(int a,int b){
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}
int main(){
    cout<<gcd(10,14)<<endl;
    return 0;
}
//gcd(a,b)=gcd(b,a%b)
//gcd(a,0)=a;