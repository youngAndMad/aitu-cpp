#include <iostream>
using namespace std;
 
int main()
{
	int n;
	cin>>n;
	int massiv[n][n];
	for (int i=0; i<n; i++)
	{
		int a=i+1;
		for (int j=0; j<n; j++)
		{
			massiv[i][j]=a;
			a++;
			if (a>n) a=1;
		}
	}
	for (int i=0; i<n; i++)
	{
	        for (int j=0; j<n; j++)
	               cout<<massiv[i][j]<<' ';
	        cout<<endl;
	}    
	return 0;
}