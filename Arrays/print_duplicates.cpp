void printDuplicates(int arr[], int n)
{
   //add code here.
   int i;
   bool b = false;
   for(i=0;i<n;i++)
   {
       int ind = arr[i]%n;
       arr[ind]+=n;
       if(arr[ind] >= 2*n && arr[ind] < 3*n)
       {
           b = true;
           cout<<arr[i]%n<<" ";
       }
   }
   if(!b) cout<<"-1";
   //cout<<endl;
}
