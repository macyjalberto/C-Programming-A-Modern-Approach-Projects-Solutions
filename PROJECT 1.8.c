/* CHAPTER: 1
   PROJECT: 8
   AUTHOR: MACYJALBERTO
   DATE: MAY 09, 2024
   PROJECT DESCRIPTION: WRITE PROGRAM CALCULATING REMAINING BALANCE ON LOAN AFTER THE FIRST, SECOND, AND THIRD MONTHLY PAYMENTS.
*/
#include <stdio.h>

int main(void) {
    float loan, interestRate, monthlyPayment, monthlyInterestRate, first, second, third;
    printf("Enter amount of loan: $");
    scanf("%f", &loan);
    printf("Enter interest rate: %%");
    scanf("%f", &interestRate);
    printf("Enter monthly payment: $");
    scanf("%f", &monthlyPayment);
    monthlyInterestRate = interestRate/100/12; // interestRate shows per year, so have to convert to 0.06, which is 6% in decimal form, then divide by 12 because it is per month, and there are 12 months
    first = (loan - monthlyPayment) + (loan * monthlyInterestRate);
    second = (first - monthlyPayment) + (first * monthlyInterestRate);
    third = (second - monthlyPayment) + (second * monthlyInterestRate);;
    printf("\nBalance remaining after first payment: $%.2f\n", first);
    printf("Balance remaining after second payment: $%.2f\n", second);
    printf("Balance remaining after third payment: $%.2f\n", third);
    return 0;
}
