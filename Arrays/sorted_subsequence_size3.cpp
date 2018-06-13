vector<int> find3Numbers(vector<int> h, int n)
{
   //Your code here
   int min1 = 2000;
   int max1 = -1;
   int l = -1,i;
   int r = -1;
   vector<int> smaller(n,-1);
   vector<int> greater(n,-1);
   for(i=0;i<n;i++)
   {
       if(min1 < h[i])
       {
           smaller[i] = min1;
       }
       if(min1 > h[i])
       {
           min1 = h[i];
           l = i;
       }
   }
   for(i=n-1;i>=0;i--)
   {
       if(max1 > h[i])
       {
           greater[i] = max1;
       }
       if(max1 < h[i])
       {
           max1 = h[i];
           r = i;
       }
   }
   vector<int> v;
   for(i=0;i<n;i++)
   {
       if(smaller[i]!=-1 && greater[i]!=-1)
       {
           v.push_back(smaller[i]);
           v.push_back(h[i]);
           v.push_back(greater[i]);
           return v;
       }
   }
   return v;
}
