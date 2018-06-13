#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll h[201];

int main() 
{
	//code
	ll t,n,x,i,j;
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
	        for(j=i+1;j<n;j++)
	        {
	            ll req = x - h[i] - h[j];
	            if(req == h[i] && req == h[j])
	            {
	                if(mp[req] >= 3)
	                {
	                    b = true;
	                    break;
	                }
	            }
	            else if(req == h[i] || req == h[j])
	            {
	                if(mp[req] >= 2)
	                {
	                    b = true;
	                    break;
	                }
	            }
	            else
	            {
	                if(mp[req] >= 1)
	                {
	                    b = true;
	                    break;
	                }
	            }
	        }
	        if(b) break;
	    }
	    if(b) cout<<"1\n";
	    else cout<<"0\n";
	}
	return 0;
}
