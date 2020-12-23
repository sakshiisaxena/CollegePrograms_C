//BINARY SEARCH WITH FUNCTION
#include<stdio.h>
#include<conio.h>
#define MAX_SIZE 5

void binary_search(int[],int);

int main() {
    int arr_search[MAX_SIZE], i,element;
    printf("\nEnter Elements for Searching : \n", MAX_SIZE);
    for (i = 0; i < MAX_SIZE; i++)
        scanf("%d", &arr_search[i]);
	printf("Enter Element to Search : ");
    scanf("%d", &element);
    binary_search(arr_search,element);
}

void binary_search(int fn_arr[],int element) {
   int f = 0, r = MAX_SIZE,mid;
   
   while (f <= r) {
	  mid = (f+r)/2;

	  if (fn_arr[mid] == element) {
         printf("\nSearch Element  : %d  : Found :  Position : %d.\n", element, mid+1);
         break;
	  }
      else if (fn_arr[mid] < element)
         f = mid + 1;    
      else
         r = mid - 1;
   }
   if (f > r)
      printf("\nSearch Element : %d  : Not Found \n", element);
}
