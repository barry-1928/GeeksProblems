#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll h[201];

int main() 
{
	//code
	ll t,i,n,x;
	cin>>t;
	while(t--)
	{
	    cin>>n>>x;
	    map<ll,ll> mp;
	    for(i=0;i<n;i++)
	    {
	        cin>>h[i];
	        mp[h[i]]++;
	    }
	    bool b = false;
	    for(i=0;i<n;i++)
	    {
	        if(2*h[i] == x)
	        {
	            if(mp[h[i]] >= 2)
	            {
	                b = true;
	                break;
	            }
	        }
	        else
	        {
	            if(mp[x-h[i]] != 0)
	            {
	                b = true;
	                break;
	            }
	        }
	    }
	    if(b) cout<<"Yes\n";
	    else cout<<"No\n";
	}
	return 0;
}
