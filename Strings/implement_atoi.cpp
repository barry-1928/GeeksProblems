int atoi(string s)
{
    //Your code here
    int n = s.length();
    int i=0;
    bool neg = false;
    int sum = 0;
    if(s[0] == '-')
    {
        neg = true;
        if(n == 1) return -1;
        i =1;
    }
    for(;i<n;i++)
    {
        if(!(s[i]>='0' && s[i]<='9'))
        {
            return -1;
        }
        sum = (sum + (s[i]-'0')*pow(10,n-i-1));
    }
    if(neg) return -sum;
    return sum;
}
