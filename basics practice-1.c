// rectange area and perimeter calculator

#include <stdio.h>

int main() {
    float length, width, area, perimeter;

    // Input length and width of the rectangle
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);
    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);

    area = length * width;
    perimeter = 2 * (length + width);

    // Output the area
    printf("The area of the rectangle is: %.2f\n", area);
    printf("The perimeter of the rectangle is: %.2f\n", perimeter);


    return 0;
}