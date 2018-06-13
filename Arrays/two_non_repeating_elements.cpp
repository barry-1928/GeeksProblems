#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll h[2000010];

int main() {
	//code
    ll t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll sum = 0;
        for(i=0;i<2*n+2;i++)
        {
            cin>>h[i];
            sum = sum ^ h[i];
        }
        ll left_most = log2(sum);
        ll x = 0, y = 0;
        for(i=0;i<2*n+2;i++)
        {
            if(h[i] & (1<<left_most))
            {
                x = x ^ h[i];
            }
            else
            {
                y = y^ h[i];
            }
        }
        if(y < x) swap(x,y);
        cout<<x<<" "<<y<<endl;
    }
	return 0;
}
