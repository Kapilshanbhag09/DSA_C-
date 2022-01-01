#include<iostream>
using namespace std;
bool binarysearch(int arr[],int l,int r,int ele){
    while(l<=r){
        int mid=(l+r)/2;
        if(arr[mid]==ele){
            return true;
        }
        else if(arr[mid]<ele){
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    return false;
}
bool search(int arr[],int ele){
    int l=0;
    int r=1;
    while (1)
    {
        cout<<"l is : "<<l<<" and r is : "<<r<<endl;
        if(binarysearch(arr,l,r,ele)){
            return true;
        }
        else{

            l=r;
            r=r*2;
            if(arr[l]>ele){
                break;
            }
        }
    }
    return false;
    
}
int main(){
    int arr[10]={2,5,9,13,23,45,56,78,89,90};
    if(search(arr,95)){
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }
    return 0;
}