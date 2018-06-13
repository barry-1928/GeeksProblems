#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll n;
string s;

void reverse_words_in_a_string()
{
    ll prev = 0,i,j;
    for(i=0;i<=n;i++)
    {
        if(s[i] == '.' || i == n)
        {
            //reverse from prev to i-1
            for(j=prev;j<(prev+i)/2;j++)
            {
                swap(s[j],s[i-(j-prev+1)]);
            }
            prev = i+1;
        }
    }
    for(i=0;i<n/2;i++)
    {
        swap(s[i],s[n-1-i]);
    }
    cout<<s<<"\n";
}
int main()
{
    ll t,i;
    
    cin>>t;
    while(t--)
    {
        cin>>s;
        n = s.length();
        reverse_words_in_a_string();
    }
    return 0;
}
