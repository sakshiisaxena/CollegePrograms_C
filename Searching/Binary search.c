#include <stdio.h>
int main()
{
   int i, l,u, mid, n, search, a[100];
   printf("Enter number of elements:\n");
   scanf("%d",&n); 
   printf("Enter %d integers:\n", n);
   for (i = 0; i < n; i++)
      scanf("%d",&a[i]); 
   printf("Enter the value to find:\n");
   scanf("%d", &search);
   l = 0;
   u = n - 1;
   mid = (l+u)/2;
   while (l <= u)
    {
      if (a[mid] < search)
         l = mid + 1;    
      else if (a[mid] == search) {
         printf("%d is present at index %d.\n", search, mid+1);
         break;
      }
      else
         u = mid - 1;
      mid = (l + u)/2;
   }
   if (l > u)
      printf("Not found! %d is not present in the list.\n", search);
  
}
