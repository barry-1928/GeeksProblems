#include <bits/stdc++.h>
using namespace std;

int h[20][20];

int main() 
{
	//code
	int t,n,i,j,k,p;
	cin>>t;
	while(t--)
	{
	    n = 4;
	    for(i=0;i<n;i++)
	    {
	        for(j=0;j<n;j++)
	        {
	            cin>>h[i][j];
	        }
	    }
	    p = 0;
	    i = 0;
	    do
	    {
	        for(k=i;k<n-i;k++)
	        {
	            cout<<h[i][k]<<" ";
	            
	        }
	        for(k=i+1;k<n-i;k++)
	        {
	            cout<<h[k][n-i-1]<<" ";
	            
	        }
	        for(k=n-i-2;k>=i;k--)
	        {
	            cout<<h[n-i-1][k]<<" ";
	            
	        }
	        for(k=n-i-2;k>i;k--)
	        {
	            cout<<h[k][i]<<" ";
	            
	        }
	        i++;
	    }
	    while(i < n/2);
	    cout<<endl;
	}
	return 0;
}
