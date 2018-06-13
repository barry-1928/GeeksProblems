#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() 
{
	//code
	ll t,i,j,n,k;
	string s1,s2;
	cin>>t;
	while(t--)
	{
	    cin>>s1>>s2;
	    vector<ll> c(26);
	    for(i=0;i<s2.length();i++)
	    {
	        c[s2[i]-'a']++;
	    }
	    vector<ll> cnt(26);
	    ll front = 0;
	    ll rear = -1;
	    cnt[s1[0]-'a']++;
	    ll min1 = INT_MAX;
	    n = s1.length();
	    ll final_f = 0, final_r = -1;
	    for(i=1;i<n;i++)
	    {
	        cnt[s1[i]-'a']++;
	        bool b = true;
	        for(j=0;j<26;j++)
	        {
	            if(c[j]!=0 && cnt[j]<c[j])
	            {
	                b = false;
	                break;
	            }
	        }
	        if(b)
	        {
	            rear = i;
	            if(rear == -1)
	            {
	                
	                final_r = i;
	                min1 = rear-front+1;
	            }
	            else if(min1 > rear-front+1)
	            {
	                final_r = i;
	                min1 = rear-front+1;
	            }
	        }
	        for(j=front;b;j++)
	        {
	            cnt[s1[j]-'a']--;
	            bool b1 = true;
    	        for(k=0;k<26;k++)
    	        {
    	            if(c[k]!=0 && cnt[k]<c[k])
    	            {
    	                b1 = false;
    	                break;
    	                
    	            }
    	        }
    	        if(!b1)
    	        {
    	            cnt[s1[j]-'a']++;
    	            
    	            front = j;
    	            if(min1 > rear-front+1)
    	            {
    	                min1 = rear-front+1;
    	                final_f = front;
    	                final_r = rear;
    	            }
    	            
    	            break;
    	        }
	        }
	    }
	    
	    if(rear == -1)
	    {
	        cout<<"-1\n";
	    }
	    else
	    {
    	    for(i=final_f;i<=final_r;i++)
    	    {
    	        cout<<s1[i];
    	    }
    	    cout<<endl;
	    }
	    
	}
	return 0;
}
