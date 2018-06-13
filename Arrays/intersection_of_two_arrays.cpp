#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll h1[1001];
ll h2[1001];
int main() {
	//code
	ll t,n,m,i,j;
	cin>>t;
	while(t--)
	{
	    cin>>n>>m;
	    for(i=0;i<n;i++)
	    {
	        cin>>h1[i];
	    }
	    for(i=0;i<m;i++)
	    {
	        cin>>h2[i];
	    }
	    sort(h1,h1+n);
	    sort(h2,h2+m);
	    i = 0;
	    j = 0;
	    bool b = false;
	    ll prev = -1;
	    while(i < n && j < m)
	    {
	        if(h1[i] < h2[j])
	        {
	            i++;
	        }
	        else if(h1[i] > h2[j])
	        {
	            j++;
	        }
	        else
	        {
	            if(prev!=h1[i])
	            {
	                b = true;
	                cout<<h1[i]<<" ";
	                prev = h1[i];
	            }
	            i++, j++;
	        }
	    }
	    if(!b)
	    {
	        cout<<"Zero";
	    }
	    cout<<endl;
	}
	return 0;
}
