/*
   Hare krishna hare krishna krishna krishna hare hare
   hare rama hare rama rama rama hare hare
   
   #2 

*/

// Move	all	the	negative	elements	to	one	side	of	the	array.


#include<bits/stdc++.h>
using namespace std;

void solve(int a[],int n)
{
	int ar[n],j=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]<0)
		ar[j++]=a[i];
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]>=0)
		ar[j++]=a[i];
	}
	for(int i=0;i<n;i++)
	cout<<i[ar]<<" ";
	
}

int main()
{
	int arr[]={0,6,3,-5,9,-2,-34,7};
	int n= sizeof(arr)/sizeof(arr[0]);
	
	solve(arr,n);

	
	return 0;
}
