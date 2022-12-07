#include<iostream>
using namespace std;
template <typename T>
void bubble_sort(T *arr,int n)
{
	int i,j,p,sc;
	T temp;
	for(p=1; p<n; p++)
	{
		sc=0;
		for(i=0; i<n-p; i++)
		{
			j=i+1;
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
				sc++;
			}
		}
		if(sc==0)
		{
			break;
		}
    }
}
int main()
{
	int n,i;
	cin>>n;
	int arr[n];
	float brr[n];
	for(i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	for(i=0; i<n; i++)
	{
		cin>>brr[i];
	}
	bubble_sort(arr,n);
	bubble_sort(brr,n);
	for(i=0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	for(i=0; i<n; i++)
	{
		cout<<brr[i]<<" ";
	}
}