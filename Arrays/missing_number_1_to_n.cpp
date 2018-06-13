#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
	//code
	ll t,n,sum,i,x;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    sum = 0;
	    for(i=0;i<n-1;i++)
	    {
	        cin>>x;
	        sum+=x;
	    }
	    sum = n*(n+1)/2 - sum;
	    cout<<sum<<endl;
	}
	return 0;
}
