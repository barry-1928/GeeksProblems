#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() 
{
	//code
	ll t,i,j;
	string s;
	cin>>t;
	while(t--)
	{
	    cin>>s;
	    ll n = s.length();
	    vector<ll> cnt(26);
	    cnt[s[0]-'a']++;
	    ll prev = 0;
	    ll max1 = 1;
	    for(i=1;i<n;i++)
	    {
	        if(cnt[s[i]-'a'] == 1)
	        {
	            for(j=prev;;j++)
	            {
	                if(s[j] == s[i])
	                {
	                    max1 = max(max1,i-j);
	                    prev = j+1;
	                    break;
	                }
	                cnt[s[j]-'a']--;
	                
	            }
	        }
	        else
	        {
	            cnt[s[i]-'a']++;
	            max1 = max(max1,i-prev+1);
	        }
	    }
	    cout<<max1<<endl;
	}
	return 0;
}
