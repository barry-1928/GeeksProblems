#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll h[10001];

int main() {
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
	    unordered_set<ll> st;
	    st.insert(0);
	    ll sum = 0;
	    bool b = false;
	    for(i=0;i<n;i++)
	    {
	        sum+=h[i];
	        if(st.find(sum) != st.end())
	        {
	            b = true;
	            break;
	        }
	        st.insert(sum);
	    }
	    if(b) cout<<"Yes\n";
	    else cout<<"No\n";
	}
	return 0;
}
