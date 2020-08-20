#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    int x , y1 ,y2;
    int t = 0;
    int n ;

    printf("Enter Number : ");
        scanf("%d", &n);

        while (n == 0) {
            printf("*");
            return 0;
        }

        for (t = 0; t < n; t++) {
            printf("*");
        }

        printf("\n");

        for (  y1 = 0; y1 < (n - 2); y1++) {

            printf("*");
             for (   y2 = 0; y2 < (n - 2); y2++) {
                    printf(" ");
              }
         printf("*");
         printf("\n");
        }

        for (t = 0; t < n; t++) {
                printf("*");
        }



    
    return 0;
}