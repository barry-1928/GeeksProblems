#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll h[105];

int main() 
{
	//code
	ll t,n,i;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    ll tot = 0;
	    for(i=1;i<=n;i++)
	    {
	        cin>>h[i];
	        tot+=h[i];
	    }
	    ll cur = 0;
	    bool b = false;
	    for(i=1;i<=n;i++)
	    {
	        if(cur == tot-cur-h[i])
	        {
	            b = true;
	            cout<<i<<"\n";
	            break;
	        }
	        cur+=h[i];
	    }
	    if(!b) cout<<"-1\n";
	}
	return 0;
}
