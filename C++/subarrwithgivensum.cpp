#include<bits/stdc++.h>
using namespace std;
int subArraySum(int ar[], int n, int sum){
    int curr_sum = ar[0];
    int start = 0; 
    int i;
    for(i = 1; i<=n; i++){
        while(curr_sum>sum && start<i-1){
            curr_sum = curr_sum - ar[start];
            start++;
        }
        if(curr_sum == sum){
            cout<<"sum found between indexes "<<start<<" and "<<i-1;
            return 1;
        }
        if(i<n){
            curr_sum = curr_sum + ar[i];
        }
    }
    cout<<"No subarray is found here";
        return 0;
}
int main(){
    int n;
    cout<<"enter number of elements in array:";
    cin>>n;
    int sum;
    cout<<"enter the sum you want to see:";
    cin>>sum;
    int ar[n];
    cout<<"enter elements in array:";
    for(int i = 0; i<n; i++){
        cin>>ar[i];
    }
    subArraySum(ar,n,sum);
    return 0;
}