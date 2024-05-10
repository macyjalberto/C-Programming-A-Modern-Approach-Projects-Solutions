/* CHAPTER: 2
   PROJECT: 4
   AUTHOR: MACYJALBERTO
   DATE: MAY 09, 2024
   PROJECT DESCRIPTION: WRITE PROGRAM ASKING USER TO ENTER DOLLARS-AND-CENTS AMOUNT, THEN DISPLAY THE AMOUNT WITH 5% TAX ADDED
*/
#include <stdio.h>

int main(void) {
    float amount;
    printf("Enter an amount: $");
    scanf("%f", &amount);
    printf("With tax added: $%.2f", amount * 1.05); // because multiply by 1 gives amount, but multiply by 0.05 gives 5% tax, so 1.05 are those combined together
    return 0;
}
