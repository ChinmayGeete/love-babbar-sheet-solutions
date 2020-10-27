// Find the maximum and minimum element in an array
#include<bits/stdc++.h>
using namespace std;
int main()
{
	cout<<"enter the number of elements in array\n";
	int n;
	cin>>n;
	int a[n];
	cout<<"enter array\n";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int max=a[0];
	int min=a[0];
	for(int i=0;i<n;i++)
	{
		if(a[i]>max)
		max=a[i];
		if(a[i]<min)
		min=a[i];
	}
	cout<<"Max is "<<max<<endl;
	cout<<"Min is "<<min<<endl;
}
