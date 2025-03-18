#include <stdio.h>

int main() {
    
    //Variable Declaration 
    int number, originalNumber = 0;
    int years, months, weeks, days;
    
    //Asking the user for the Number of Days to Convert
    printf("Enter the Number of Days You Want to Convert: ");
    scanf("%i", &number);

    //Storing the orignal number for later use
    originalNumber = number;
    
    //Formula
    years = number / 365;
    number %= 365; //%= calculates the remainder of a variable and then assigns that remainder back to the variable
    
    months = number / 30;
    number %= 30;
    
    weeks = number / 7; 
    days = number % 7;
    
    //Displaying of Results
    printf("%i days is = %i year/s, %i month/s, %i week/s, and %i day/s", originalNumber, years, months, weeks, days);
    //printf("\nThe Area of the Circle = %.2f", areaOfCircle);
    
return 0;
    
}