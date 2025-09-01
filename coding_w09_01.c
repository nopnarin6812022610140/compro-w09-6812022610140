#include <stdio.h>

int main() {
    int start, stop;
    
    printf("Enter start number: ");
    scanf("%d", &start);
    printf("Enter stop number: ");
    scanf("%d", &stop);

    if (start < stop) {
        printf("Even numbers from %d to %d are:\n", start, stop);
        for (int i = start; i <= stop; i++) {
            if (i % 2 == 0) {
                printf("%d ", i);
            }
        }
        printf("\nEnd of loop\n");
    }
    else if (start == stop) {
        printf("Your Start number is equal to Stop number, please try again!\n");
    }
    else { // start > stop
        printf("Your Start number is greater than Stop number, please try again!\n");
    }

    return 0;
}