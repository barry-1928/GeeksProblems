#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll h[101];

int main() 
{
	//code
	ll t,n,i;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    for(i=0;i<n;i++)
	    {
	        cin>>h[i];
	    }
	    ll max1 = h[n-1];
	    ll overall_max = -1;
	    for(i=n-2;i>=0;i--)
	    {
	        if(h[i] < max1)
	        {
	            overall_max = max(overall_max,max1-h[i]);
	        }
	        max1 = max(max1,h[i]);
	    }
	    cout<<overall_max<<endl;
	    
	}
	return 0;
}
