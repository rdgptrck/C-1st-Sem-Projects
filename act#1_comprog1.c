#include <stdio.h>

int main() {
    
    //Variable Declaration 
    int radius = 0;
    float perimeterOfCircle = 0, areaOfCircle = 0;
    float pi = 3.1416;
    
    //Asking the user for the Radius
    printf("Enter the Radius of the Circle: ");
    scanf("%i", &radius);
    
    //Formula
    perimeterOfCircle = 2 * pi * radius;
    areaOfCircle = pi * (radius * radius);
    
    //Displaying of Results
    printf("The Perimeter of the Circle = %.2f", perimeterOfCircle);
    printf("\nThe Area of the Circle = %.2f", areaOfCircle);
    
return 0;
    
}