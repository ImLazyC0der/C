/*
    hare krishna hare krishna krishna krishna hare hare
    hare rama hare rama rama rama hare hare
    
    #6
*/

//find missing number in array
#include<bits/stdc++.h>
#define ll long long int
#define ull long long
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define forp(i,n) for(int i=0;i<n;i++)
#define forn(i,n) for(int i=n-1;i>=0;i--)
#define fast ios_base::sync_with_stdio(false);
using namespace std;
void solve1(int arr[],int n)
{
	int t= (n+1)*(n+2)/2,s=0;
	forp(i,n)
	s+=arr[i];
	
	cout<<t-s<<endl;
}
void solve2(int arr[],int n) //for big number
{
	int s=1;
	for(int i=2;i<=n+1;i++)
	{
		s=s-arr[i-2]+i;
		
	}
	cout<<s<<endl;
}
void solve3(int arr[],int n) //using xor
{
	int a=arr[0];
	int b=1;
	for(int i=1;i<n;i++)
	a=a^arr[i];
	
	for(int i=2;i<=n+1;i++)
	b=b^i;
	
	cout<<(a^b);
}
int main()
{
   fast
   int arr[]={1,4,6,3,7,2};
   int n=sizeof(arr)/sizeof(arr[0]);
   
   solve1(arr,n);
   solve2(arr,n);
   solve3(arr,n);

   return 0;
}

