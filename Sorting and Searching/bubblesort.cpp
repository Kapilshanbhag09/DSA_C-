#include<iostream>
using namespace std;
int main(){
    int arr[9]={2,5,6,9,12,24,45,56,60};
    int n=9;
    for(int i=0;i<n-i;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int swap=0;
                swap=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=swap;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" -> ";
    }
    return 0;
}