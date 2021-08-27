#include<iostream>
using namespace std;
void countsort(int arr[], int n){
    int k=arr[0];
    int maxele=0;
    for(int i=0;i<n;i++){
        if(maxele<arr[i]){
            maxele=arr[i];
            //To find the greatest element
        }
    }
    int count[maxele+1]={};
    for(int i=0;i<n;i++){
        count[arr[i]]++;
    }
    for(int i=1;i<=maxele;i++){
        count[i]+=count[i-1];
        //Counts postion of the element
    }
    int output[n];
    for(int i=n-1;i>=0;i--){
        output[--count[arr[i]]]=arr[i];
    }

    for(int i=0;i<n;i++){
        arr[i]=output[i];
    }
}
int main(){
    int n=9;
    int arr[n]={2,4,3,1,6,5,8,7,8};
    countsort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}