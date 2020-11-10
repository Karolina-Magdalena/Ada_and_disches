#include <iostream>
#include <algorithm>

using namespace std;

int t;
int n;
int c;

void ada(int arr[], int n)
{
int sum1=0;
int sum2=0;
	if (n==1)
	    {
	        cout<<arr[0]<<endl;
	    }
	else if (n==2)
	    {
	        if (arr[0]>=arr[1]) {cout<<arr[0]<<endl;}
	        else {cout<<arr[1]<<endl;}
	    }
	else if (n==3)
	    {
	        sum1=arr[0]+arr[1];
	        sum2=arr[2];
	        if (sum1>=sum2) {cout<<sum1<<endl;}
	        else {cout<<sum2<<endl;}
	    }
	else if (n==4)
	    {
	       sum1=arr[3]; //x
	       sum2=arr[2]+arr[1]; //y
	       if (sum2<=sum1)
	       {sum2=sum2+arr[0];}
	       else {sum1=sum1+arr[0];}

	       if (sum1>=sum2) {cout<<sum1<<endl;}
	       else {cout<<sum2<<endl;}
	    }
}

int main() {

	cin>>t;
	for (int j=1;j<=t;j++)
	{
	cin>>n;
	int *arr;
	arr=new int[n];

	for (int i=0;i<n;i++)
	{
	    cin>>c;
	    arr[i]=c;
	}
	sort(arr,arr+n);
	ada(arr,n);
	}
	return 0;
}
