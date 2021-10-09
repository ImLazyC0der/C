
/*
   hare krishna hare krishna krishna krishna hare hare
   hare rama hare rama rama rama hare hare
   
   #5

*/

// rotate array 

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
void leftrotatebyone(int arr[],int n)
{
	int t=arr[0],i;
	 	for(i=0;i<n-1;i++)
	 	arr[i]=arr[i+1];
	 	
	 	arr[i]=t;
}
void rightrotatebyone(int arr[],int n)
{
	int t=arr[n-1],i;
	 	for(i=n-1;i>0;i--)
	 	arr[i]=arr[i-1];
	 	
	 	arr[0]=t;
}
void solve(int arr[],int n,int d)
{
	forp(i,d)
	 {
	 	leftrotatebyone(arr,n);
	 }
	 for(int i=0;i<n;i++)
	 cout<<arr[i]<<" ";
}
void revrsearray(int arr[],int a,int b)
{
	while(a<b)
	{
		swap(arr[a],arr[b]);
		a++;
		b--;
	}
}
void solve2(int arr[],int n,int d)  //reversal algorithm
{
	if(d==0)
	return;
	
	revrsearray(arr,0,d-1);
	revrsearray(arr,d,n-1);
	revrsearray(arr,0,n-1);
}
int main()
{
   fast
  // int ar[]={2,4,6,3,1,9};
   int a[]={2,4,6,3,1,9};
   int n=sizeof(a)/sizeof(a[0]),d;
   cin>>d; //rotate array by d postn
   
  solve(a,n,d);
   cout<<endl;
   solve2(a,n,d);
   
   for(int i=0;i<n;i++)
	 cout<<a[i]<<" ";

   return 0;
}

