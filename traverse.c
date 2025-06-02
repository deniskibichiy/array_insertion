/*Write a program to write and displa n numbers using an array*/
#include <stdio.h>
int main () {
    int i, n, arr[20];
   // clrscr ();
    printf("\n Enter the number of elements in the array: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("\n arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    printf("\n The array elements are ");
    for (i = 0; i < n; i++) {
        printf("%d \n", arr[i]);
        return 0;
    }
}