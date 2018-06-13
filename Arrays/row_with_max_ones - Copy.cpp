#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool h[51][51];

int main() 
{
	//code
	ll t,n,m,i,j;
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
	        sort(h[i],h[i]+m);
	    }
	    ll first = m;
	    ll max1 = -1, ind = -1;
	    for(i=0;i<m;i++)
	    {
	        if(h[0][i])
	        {
	            first = i;
	            break;
	        }
	    }
	    if(max1 < m-first)
	    {
	        max1 = m-first;
	        ind = 0;
	    }
	    for(i=1;i<n;i++)
	    {
	        while(first>=1 && h[i][first-1])
	        {
	            first--;
	        }
	        if(max1 < m-first)
	        {
	            max1 = m-first;
	            ind = i;
	        }
	    }
	    cout<<ind<<"\n";
	}
	return 0;
}
