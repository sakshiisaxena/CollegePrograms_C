//WAP to find the largest among array elements
#include <stdio.h>
int main() {
    int i, n;
    float arr[20];
    printf("Enter number of elements to be entered: ");
    scanf("%d", &n);

    for (i = 0; i < n; ++i) {
        printf("Enter number%d: ", i + 1);
        scanf("%f", &arr[i]);
    }

    // storing the largest number to arr[0]
    for (i = 1; i < n; ++i) {
        if (arr[0] < arr[i])
            arr[0] = arr[i];
    }

    printf("Largest element = %.2f", arr[0]);

    return 0;
}
