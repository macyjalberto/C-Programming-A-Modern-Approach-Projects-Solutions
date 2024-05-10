/* CHAPTER: 2
   PROJECT: 7
   AUTHOR: MACYJALBERTO
   DATE: MAY 09, 2024
   PROJECT DESCRIPTION: WRITE PROGRAM ASKING USER TO ENTER DOLLAR AMOUNT, THEN SHOW HOW TO PAY IN SMALLEST NUMBER OF $20, $10, $5, AND $1 BILLS.
*/
#include <stdio.h>

int main(void) {
    int dollar, twenties, tens, fives, ones;
    printf("Enter a dollar amount: $");
    scanf("%d", &dollar);
    twenties = dollar/20; // finds how many 20's in dollar
    dollar %= 20; // finds the leftover number after taking away the 20's
    tens = dollar/10; // finds how many 10's in the remainder, and so on, so forth
    dollar %= 10;
    fives = dollar/5;
    dollar %= 5;
    ones = dollar;
    printf("$20 bills: %d\n$10 bills: %d\n $5 bills: %d\n $1 bills: %d", twenties, tens, fives, ones);
    return 0;
}
