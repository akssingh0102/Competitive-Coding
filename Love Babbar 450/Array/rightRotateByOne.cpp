
void rotate(int arr[], int n)
{
   int a=arr[n-1];
   for(int i=n-1;i>=1;i--){
       arr[i]=arr[i-1];
   }
   arr[0]=a;
   
   
}