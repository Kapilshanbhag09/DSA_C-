#include<iostream>
using namespace std;
int main(){
    int arr[9]={60,56,45,24,12,19,6,5,2};
    int n=9;
    for(int i=0;i<n-1;i++){
        int minIndex=i;
        int swap=0;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        swap=arr[i];
        arr[i]=arr[minIndex];
        arr[minIndex]=swap;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" -> ";
    }
    return(0);
}