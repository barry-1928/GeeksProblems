#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll n;
string s;

void find_first_non_repeating_element()
{
    vector<pair<ll,ll>> cnt_firstocc(26);
    ll i;
    for(i=0;i<n;i++)
    {
        if(cnt_firstocc[s[i]-'a'].first == 0)
        {
            cnt_firstocc[s[i]-'a'].second = i;
        }
        ++cnt_firstocc[s[i]-'a'].first;
    }
    ll ans = 99999;
    for(i=0;i<26;i++)
    {
        if(cnt_firstocc[i].first == 1)
        {
            ans = min(ans,cnt_firstocc[i].second);
        }
    }
    if(ans == 99999)
    {
        cout<<"-1\n";
    }
    else
    {
        cout<<s[ans]<<"\n";
    }
}
int main()
{
    ll t,i;
    
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>s;
        find_first_non_repeating_element();
    }
    return 0;
}
