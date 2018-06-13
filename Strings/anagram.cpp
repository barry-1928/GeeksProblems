#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() 
{
	//code
	ll t,n,i;
	cin>>t;
	string s1, s2;
	while(t--)
	{
	    cin>>s1>>s2;
	    int cnt1[26] = {0};
	    int cnt2[26] = {0};
	    int n1 = s1.length();
	    int n2 = s2.length();
	    for(i=0;i<n1;i++)
	    {
	        cnt1[s1[i]-'a']++;
	    }
	    for(i=0;i<n2;i++)
	    {
	        cnt2[s2[i]-'a']++;
	    }
	    bool b = true;
	    for(i=0;i<26;i++)
	    {
	        if(cnt1[i] != cnt2[i])
	        {
	            b = false;
	            break;
	        }
	    }
	    
	    if(b)
	    {
	        cout<<"YES\n";
	    }
	    else
	    {
	        cout<<"NO\n";
	    }
	}
	return 0;
}
