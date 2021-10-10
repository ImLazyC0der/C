/*
   hare krishna hare krishna krishna krishna hare hare
   hare rama hare rama rama rama hare hare
   
   #3

*/

// find union and intersection of sorted array

#include<bits/stdc++.h>
using namespace std;
void unionsolve(int arr1[],int arr2[],int n,int m)
{
	int i=0,j=0;
	while(i<n&&j<m)
	{
		if(arr1[i]<arr2[j])
		cout<<arr1[i++]<<" ";
		else if(arr2[j]<arr1[i])
		cout<<arr2[j++]<<" ";
		else
		{
			cout<<arr1[i++]<<" ";
			j++;
		}		
	}
	while(i<n)
	cout<<arr1[i++]<<" ";
	while(j<m)
	cout<<arr2[j++]<<" ";
}

void intrsolve(int a[],int b[],int n,int m)
{
	int i=0,j=0;
	while(i<n&&j<m)
	{
		if(a[i]<b[j])
		i++;
		else if(b[j]<a[i])
		j++;
		else
		{
			cout<<a[i++]<<" ";
			j++;
		}
	}
}
int main()
{
	int arr1[]={1,3,4,5,7,9};
	int arr2[]={2,4,6,7,8};
	int n= sizeof(arr1)/sizeof(arr1[0]);
	int m= sizeof(arr2)/sizeof(arr2[0]);
	unionsolve(arr1,arr2,n,m);
	cout<<endl;
	intrsolve(arr1,arr2,n,m);
	
	return 0;
}
