#include<iostream>
using namespace std;
int ceiling(int n,int arr[],int key){
    int l=0;
    int r=n-1;
    while(l<=r){
        int mid=(l+r)/2;
        if(arr[mid]==key){
            return key;
        }
        if(l==r){
            return arr[l];
        }
        else if(arr[mid]>key){
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    return 0;
}
int floor(int n,int arr[],int key){
     int l=0;
    int r=n-1;
    while(l<=r){
        int mid=(l+r)/2;
        if(arr[mid]==key){
            return key;
        }
        if(l==r){
            return arr[l-1];
        }
        else if(arr[mid]>key){
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    return 0;

}
int main(){
    int n=10;
    int arr[n]={2,3,5,7,12,15,20,25,56,90};
    cout<<"The ceiling of a number is "<<ceiling(n,arr, 25)<<endl;
    cout<<"The floor of a number is "<<floor(n,arr,25)<<endl;

}