#include<iostream>
using namespace std;
int main(){
    int arr[9]={60,56,45,24,12,19,6,5,2};
    int n=9;
    for(int i=1;i<n;i++){
        int j=i-1;
        int current=arr[i];
        while(j>=0 && arr[j]>current){
            arr[j+1]=arr[j];
            j--;
            }
            arr[j+1]=current;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"->";
    }
    return 0;
}