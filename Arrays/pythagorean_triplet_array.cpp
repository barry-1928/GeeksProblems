#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll h[101];

int main() 
{
	//code
	ll t,i,n,j;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    set<ll> st;
	    for(i=0;i<n;i++)
	    {
	        cin>>h[i];
	        h[i]*=h[i];
	        st.insert(h[i]);
	    }
	    bool b = false;
	    for(i=0;i<n;i++)
	    {
	        for(j=i+1;j<n;j++)
	        {
	            if(st.find(h[i]+h[j]) != st.end())
	            {
	                b = true;
	                break;
	            }
	        }
	        if(b) break;
	    }
	    if(b) cout<<"Yes\n";
	    else cout<<"No\n";
	    
	}
	return 0;
}
