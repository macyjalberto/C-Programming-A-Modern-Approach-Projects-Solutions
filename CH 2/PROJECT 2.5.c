/* CHAPTER: 2
   PROJECT: 5  
   AUTHOR: MACYJALBERTO
   DATE: MAY 09, 2024
   PROJECT DESCRIPTION: WRITE PROGRAM ASKING USER TO ENTER X VALUE, THEN DISPLAY THE VALUE FOR POLYNOMIAL 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6
*/
#include <stdio.h>

int main(void) {
    int x, result;
    printf("3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6\n");
    printf("Enter an x value: ");
    scanf("%d", &x);
    result = (3 * x * x * x * x * x) + (2 * x * x * x * x) - (5 * x * x * x) - (x * x) + (7 * x) - 6;
    printf("3(%d)^5 + 2(%d)^4 - 5(%d)^3 - (%d)^2 + 7(%d) - 6 is equal to... %d", x, x, x, x, x, result);
    return 0;
}
