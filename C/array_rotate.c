// C++ program to rotate an array by
// d elements
#include <bits/stdc++.h>
using namespace std;

int main(){
	int a[]={1,2,3,4,5,6,7,8,9};
	int n=9;
	int d=2;
	int temp[d];
	for(int i=0;i<d;i++){
		temp[i]=a[i];
	}
	for(int i=0,j=d;i<n-1;i++,j++){
		a[i]=a[j];
	}
	int c[n+d];
	int i=0;
	int j=0;
	int k=0;
	for(;i<n-2;i++){
		c[k++]=a[i];
	}
	for(;j<d;j++){
		c[k++]=temp[j];
}
	
	for(int i=0;i<n;i++){
		cout<<c[i]<<" ";
	}
}
