#include <iostream>

using namespace std;
long long int N=100000;
void game_with_number(long long int arr[],long long int k){
    
   
    if (k==1) cout <<arr[0];
    else
    {
    for(int i=0;i<k-1;i++)
    {
        arr[i]=arr[i] | arr[i+1];
        cout<<arr[i];
    }
    cout<<arr[k-1];
    }
}
int main()
{
    long long int q,n,i;
    
    cin>>q;
    while(q--)
    {   cin>>n;
        if (n<=N){ 
        long long int arr[n];
        for( i=0;i<n;i++)
        cin>>arr[i];
        game_with_number(arr,n);
    }
    }
    return 0;
}
