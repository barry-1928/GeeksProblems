#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll h[1001];

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
	    sort(h,h+n);
	    ll l = 0, r = n-1;
	    ll min1 = 999999;
	    ll a = -1,b = -1;
	    while(l < r)
	    {
	        if(h[l] + h[r] >= 0)
	        {
	            if(min1 > abs(h[l] + h[r]))
	            {
	                min1 = abs(h[l]+h[r]);
	                a = h[l], b = h[r];
	            }
	            r--;
	        }
	        else
	        {
	            if(min1 > abs(h[l] + h[r]))
	            {
	                min1 = abs(h[l]+h[r]);
	                a = h[l], b = h[r];
	            }
	            l++;
	        }
	    }
	    cout<<a<<" "<<b<<endl;
	}
	return 0;
}
