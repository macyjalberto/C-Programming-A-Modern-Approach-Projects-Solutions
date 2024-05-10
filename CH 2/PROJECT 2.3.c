/* CHAPTER: 2
   PROJECT: 3
   AUTHOR: MACYJALBERTO
   DATE: MAY 09, 2024
   PROJECT DESCRIPTION: WRITE PROGRAM COMPUTING VOLUME OF SPHERE WITH 10-METRE RADIUS USING FORMULA v = 4/3πr^3
*/
#include <stdio.h>

#define PI 3.14159265358979323846

int main(void) {
    int r;
    printf("What is the radius of the sphere? ");
    scanf("%d", &r);
    printf("The volume of a sphere with a %d-metre radius is: %.2f", r, PI * 4.0f/3.0f * r * r * r);
    return 0;
}
