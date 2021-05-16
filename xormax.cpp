#include <iostream>

using namespace std;


 int xorsum(int arr[], int k) {

int maxSum = 0,xr=1,sum=0,x;
int a1[k];

if (k==1) return(arr[0]);
if (k==2) return (arr[0] ^ arr[1]);
for(int i = 0; i < k-1; i++) {

for(int j = i; j <= k; j++) {
    sum = 0; xr=0;x=0;
 for(int s=i;s<j;s++,x++)
   { 
    if (s==i && j==i+1) break; 
    if (s==0 && j==k) continue;
     xr=xr^arr[s];
    if (xr > maxSum)  maxSum=xr;

    //cout<<sum;
    }
   
//cout<<sum<<"\n";
//Keep track of maximum sum
}}
return maxSum;
}

int  main() {
{
int arr[4] = {1,2,3,4};

int result = xorsum(arr, 4);
cout<<result<<endl;
}
{
int arr[6] = {8,1,2,12,7,6};

int result = xorsum(arr, 6);
cout<<result<<endl;
}
{
int arr[2] = {6,4};

int result = xorsum(arr, 2);
cout<<result<<endl;
}
    return 0;
}
