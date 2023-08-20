#include <stdio.h>

int main() {
    float length, breadth, area;
    
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);
    
    printf("Enter the breadth of the rectangle: ");
    scanf("%f", &breadth);
    
    if (length != breadth) {
        area = length * breadth;
        printf("The area of the rectangle is: %.2f\n", area);
    } // No else statement here
    
    return 0;
}
