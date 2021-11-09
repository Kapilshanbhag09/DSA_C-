#include<iostream>
using namespace std;

bool search(int arr[],int l, int r,int ele){
    int mid=(l+r)/2;
    if(l>r){
        return 0;
    }
    if(arr[mid]==ele){
        return true;
    }
    else if(arr[mid]>ele){
        return search(arr,l,mid-1,ele);
    }
    else{
        return search(arr,mid+1,r,ele);
    }

}
int main(){
    int arr[10]={2,5,9,13,23,45,56,78,89,90};
    if(search(arr,0,9,90)){
        cout<<"Element found"<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }
    return 0;
}