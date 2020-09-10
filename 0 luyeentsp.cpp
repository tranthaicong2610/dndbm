#include<iostream>
using namespace std;
int main ()
{
	float n;
	cin>>n;
	float tong=0;
		long i;
		for( i=1;i<=n;i++)
		{
			tong+=(n+1)/2;
			if(tong>n) break;
		}
		cout<<i-1;
		
	
	return 0;
}
