#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll h[35][35];

int main() 
{
	//code
	ll t,n,m,x,i,j;
	cin>>t;
	while(t--)
	{
	    cin>>n>>m;
	    for(i=0;i<n;i++)
	    {
	        for(j=0;j<m;j++)
	        {
	            cin>>h[i][j];
	        }
	    }
	    bool b = false;
	    cin>>x;
	    i = 0, j = m-1;
	    while(i>=0 && i<n && j>=0 && j<m)
	    {
	        if(h[i][j] == x)
	        {
	            b = true;
	            break;
	        }
	        else if(h[i][j] < x)
	        {
	            i++;
	        }
	        else
	        {
	            j--;
	        }
	    }
	    if(b)
	    {
	        cout<<"1\n";
	    }
	    else
	    {
	        cout<<"0\n";
	    }
	}
	return 0;
}
