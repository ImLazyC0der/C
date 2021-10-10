/*
     hare krishna hare krishna krishna krishna hare hare
     hare rama hare rama rama rama hare hare
     
     #7

*/

// pairs with given sum

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
void solve1(int arr[],int n,int s)
{
	for(int i=0;i<n;i++)
	for(int j=i+1;j<n;j++)
	{
		if(arr[i]+arr[j]==s)
		cout<<arr[i]<<" "<<arr[j]<<endl;
	}
}
void solve2(int arr[],int n,int s)
{
	map<int,int>m;
	for(int i=0;i<n;i++)
	{
		int r=s-arr[i];
		if(m.find(r)!=m.end())
		{
		int c=m[r];
		for(int j=0;j<c;j++)
		cout<<r<<" "<<arr[i]<<endl;
	}
		m[arr[i]]++;
	}
}
void solve3(int arr[],int n,int s)
{
	int i=0,j=n-1;
	while(i<j)
	{
		if(arr[i]+arr[j]==s)
		{
		cout<<arr[i]<<" "<<arr[j]<<endl;
		i++,j--;
	}
		else if(arr[i]+arr[j]<s)
		i++;
		else
		j--;
	}
}
int main()
{
   fast
   int arr[]={1,5,7,-1,5};
   int n=sizeof(arr)/sizeof(arr[0]);
   
   int s=6;
   solve1(arr,n,s);
   solve2(arr,n,s);
   solve3(arr,n,s);
   return 0;
}

