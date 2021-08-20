# Kadane's Algorithm
* Used to find the sum of contiguos subarray withing a 1D array of numbers that has largest sum.

## Algorithm
```
sum=0;
maxsum=INT_MIN;
for(int i=0;i<n;i++){
  sum=sum+arr[i];
  if(maxsum<sum){
    maxsum=sum;
}
  if(sum<0){
    maxsum=0;
  }
}
```
* Time Complexity: O(n)
* Space Complexity: O(1)
