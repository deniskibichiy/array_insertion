 /* #include <stdio.h>
int main () {
    int LA [3] = { }, i;
    printf("This is the array before insertion\n");
    for (i < 0; i < 3; i++) {
       // printf("LA [%d] = %d", i, LA [i]);
       // printf("Inserting elements\n");
        //for ( i = 0; i < 3; i++) {
            LA[i] = i + 2;
            printf("LA[%d] = %d\n", i, LA[i]);
       // }
    }
    return 0;

} */

#include <stdio.h>
int main () {
    int LA[3] = {}, i;
    printf("Inserting Elements...\n");
    printf("The array after insertion:\n");
    for(i=0; i < 3; i++) {
        LA[i] = i + 2;
        printf("LA[%d] = %d\n", i, LA[i]);
    }
    return 0;
}