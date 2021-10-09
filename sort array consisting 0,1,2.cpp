/*
    Hare krishna Hare Krishna Krishna krishna hare hare
    Hare Rama Hare Rama Rama Rama Hare Hare
 # 1
    
*/

//1. Given	an	array	which	consists	of	only	0,	1	and	2.	Sort	the	array	without	
//   using	any	sorting	algorithm.

#include<bits/stdc++.h>
using namespace std;
void solve(int arr[],int n)
{
	int c1=0,c2=0,c3=0,j=0;
	for (int i=0;i<n;i++)
	{
		if(arr[i]==0)
		c1++;
		if(arr[i]==1)
		c2++;
		if(arr[i]==2)
		c3++;
	}
	while(c1>0)
	{
		arr[j++]=0;
		c1--;
	}
	while(c2>0)
	{
		arr[j++]=1;
		c2--;
	}
	while(c3>0)
	{
		arr[j++]=2;
		c3--;
	}
	for(int i=0;i<n;i++)
	cout<<i[arr]<<" ";
}

void solve2(int arr[],int n)
{
	int lo=0,mid=0,hi=n-1;
	while(mid<=hi)
	{
		switch(arr[mid])
		{
		case 0:
			swap(arr[lo++],arr[mid++]);
			break;
		case 1:
		    mid++;
		    break;
		case 2:
			swap(arr[mid],arr[hi--]);
		}
			
	}
	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
}

void solve3(int a[],int n)
{
	int lo=0,hi=n-1;
	while(lo<=hi)
	{
		if(a[lo]==1)
		swap(a[lo],a[hi--]);
		else
		lo++;
	}
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
}
int main()
{
	int arr[]={0,1,2,2,1,2,1,0,2,1,0};
	int arr2[]={0,1,1,0,1,0,1,0,1};
	int n=sizeof(arr)/sizeof(arr[0]);
	int n2=sizeof(arr)/sizeof(arr[0]);
	solve(arr,n);
	cout<<endl;
	solve2(arr,n);
	 cout<<endl;
	solve3(arr2,n2);
	return 0;
}	
