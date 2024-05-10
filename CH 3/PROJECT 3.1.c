/* CHAPTER: 3
   PROJECT: 1  
   AUTHOR: MACYJALBERTO
   DATE: MAY 09, 2024
   PROJECT DESCRIPTION: WRITE PROGRAM THAT ACCEPTS DATR FROM USER IN FORMAT mm/dd/yyyy AND DISPLAYS AS yyyymmdd.
*/
#include <stdio.h>

int main(void) {
    int month, day, year;
    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);
    printf("You entered the date %d%02d%02d.", year, month, day); // %02d displays input as 0(input) if it is only one digit. For example, input is 1, since it is only one digit, it will display as 01
    return 0;
}
