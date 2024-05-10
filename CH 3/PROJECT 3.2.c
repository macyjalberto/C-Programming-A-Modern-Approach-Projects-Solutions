/* CHAPTER: 3
   PROJECT: 1  
   AUTHOR: MACYJALBERTO
   DATE: MAY 09, 2024
   PROJECT DESCRIPTION: WRITE PROGRAM THAT FORMATS PRODUCT INFORMATION ENTERED BY USER.
*/
#include <stdio.h>

int main(void) {
    int itemNum, month, day, year;
    float unitPrice;
    printf("Enter item number: ");
    scanf("%d", &itemNum);
    printf("Enter unit price: ");
    scanf("%f", &unitPrice);
    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);
    printf("Item\t\t\tUnit\t\t\tPurchase\n\t\t\tPrice\t\t\tDate");
    printf("\n%d\t\t\t$%7.2f\t\t%02d/%02d/%04d", itemNum, unitPrice, month, day, year);
    // the price is %7.2f because there are 7 spaces from the right (meaning input of 7 would be "$   7.00",
    // if counting everything (minus the $ because it's not part of %f), then it would equal to 7 spaces in total), and 2 decimals
    return 0;
}
