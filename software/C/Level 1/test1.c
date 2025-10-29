#include <stdio.h>

int main() {
    int num, reversed = 0, remainder;
    

    scanf("%d", &num);
    
    while (num != 0) {
        remainder = num % 10;           // Get the last digit
        reversed = reversed * 10 + remainder;  // Append it to reversed number
        num/= 10;                     // Remove last digit from num
    }
    
    printf("Reversed number: %d\n", reversed);
    
    return 0;
}
