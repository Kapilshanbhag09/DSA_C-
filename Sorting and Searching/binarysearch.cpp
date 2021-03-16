//ONly for sorted arrays
//Best case O(1)
//Worst case O(logn)
#include<iostream>
using namespace std;
void binarysearch(int arr[],int low, int top,int ele){
    while (low<=top)
    {
        int mid=(low+top)/2;
        cout<<"Mid is: "<<mid<<endl;
        if(ele<arr[mid]){
            top=mid-1;
            cout<<"Less"<<endl;
        }
        else if(ele>arr[mid]){
            low=mid+1;
            cout<<"MOre"<<endl;
        }
        else{
            cout<<"Found it"<<endl;
            break;
        }
    }
}
int main(){
    int arr[9]={2,5,6,9,12,24,45,56,60};
    int ele;
    cin>>ele;
    binarysearch(arr,0,8,ele);
    return 0;
}