#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll n;
string s;
vector<string> v;
void find_all_permutations(ll start)
{
    if(start == n)
    {
        v.push_back(s);
        //cout<<s<<" ";
        return;
    }
    ll i;
    for(i=start;i<n;i++)
    {
        swap(s[start],s[i]);
        find_all_permutations(start+1);
        swap(s[start],s[i]);
    }
}
int main()
{
    ll t,i;
    
    cin>>t;
    while(t--)
    {
        cin>>s;
        n = s.length();
        find_all_permutations(0);
        sort(v.begin(),v.end());
        for(i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
        v.clear();
        cout<<endl;
    }
    return 0;
}
