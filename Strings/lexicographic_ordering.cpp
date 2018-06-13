#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll mod = 1000003;

ll fact[16];

int main() {
	//code
	ll t,n,i,j;
	string s;
	fact[0] = 1;
	for(i=1;i<=15;i++)
	{
	    fact[i] = (i*fact[i-1])%mod;
	}
	cin>>t;
	while(t--)
	{
	    cin>>s;
	    n = s.length();
	    set<char> st;
	    for(i=0;i<n;i++)
	    {
	        st.insert(s[i]);
	    }
	    if(st.size() != n)
	    {
	        cout<<"0\n";
	        continue;
	    }
	    else
	    {
	        string s1;
	        ll ans = 0;
	        for(i=0;i<n;i++)
	        {
	            char ch = s[i];
	            ll cnt = 0;
	            for(j=i+1;j<n;j++)
	            {
	                if(s[j] < ch)
	                {
	                    cnt++;
	                }
	            }
	            ans = (ans+(cnt*fact[n-i-1])%mod)%mod;
	        }
	        cout<<1+ans<<endl;
	    }
	}
	return 0;
}
