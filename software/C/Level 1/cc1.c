#include <stdio.h>

int main() {
    int rows, num = 1;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for(int i = 1; i <= rows; i++) {
        
        for(int j = 1; j <= rows - i; j++) {
            printf("  ");
        }

        
        for(int k = 1; k <= i; k++) {
            printf("%d ", num);
            num += 2;  
        }
        printf("\n");
    }

    return 0;
}
