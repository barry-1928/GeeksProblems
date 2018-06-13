#include <iostream>
using namespace std;
typedef long long int ll;

int main() {
	//code
	ll t,n,i;
	cin>>t;
	string s;
	while(t--)
	{
	    cin>>n;
	    cin>>s;
	    int cnt[26] = {0};
	    for(i=0;i<n;i++)
	    {
	        cnt[s[i]-97]++;
	    }
	    bool b = false;
	    for(i=0;i<n;i++)
	    {
	        if(cnt[s[i]-97] == 1)
	        {
	            b = true;
	            cout<<s[i]<<endl;
	            break;
	        }
	    }
	    if(!b)
	    {
	        cout<<"-1\n";
	    }
	}
	return 0;
}
