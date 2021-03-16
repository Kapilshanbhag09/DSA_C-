#include<iostream>
using namespace std;
int main(){
    int arr[9]={3,6,7,9,1,2,4,8,5};
    for(int i=0;i<9;i++){
        cout<<arr[i]<<endl;
    }
    for(int i=0;i<9;i++){
        if(5==arr[i]){
            cout<<"Found at "<<i+1<<" position"<<endl;
            break;
        }

    }
    return(0);
}