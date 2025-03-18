#include <stdio.h>

int main() {
    
    //Variable Declaration
    float introToComputing = 0, computerProgramming = 0, businessApplicationSoftware = 0, understandingTheSelf = 0, purposiveCommunication = 0, mathInModernWorld = 0, civicWelfare = 0, movementCompetency = 0, readingsPhHistory = 0;
    float generalWeightedAverage = 0;
    int units, ITC = 3, BAS = 3, UTS = 3, PC = 3, MMW = 3, CWTS = 3, READ = 3, PE = 2, CP1 = 5;
    
    //Asking for the Grades of each Courses
    printf("Enter your Grades for each Courses to compute your GWA\n");
    printf("\nIntroduction To Computing: ");
    scanf("%f", &introToComputing);
    printf("Computer Programming 1: ");
    scanf("%f", &computerProgramming);
    printf("Business Application Software: ");
    scanf("%f", &businessApplicationSoftware);
    printf("Understanding The Self: ");
    scanf("%f", &understandingTheSelf);
    printf("Purposive Communication: ");
    scanf("%f", &purposiveCommunication);
    printf("Mathematics In The Modern World: ");
    scanf("%f", &mathInModernWorld);
    printf("Civic Welfare Training Service: ");
    scanf("%f", &civicWelfare);
    printf("Movement And Competency Training: ");
    scanf("%f", &movementCompetency);
    printf("Reading In The Philippine History With IP Studies: ");
    scanf("%f", &readingsPhHistory);
        
    //Calculate the weighted grades for each course
    float totalWeightedGrades = 0;
    int totalUnits = 0;
    
    //Multiply each grades to their corresponding units
    totalWeightedGrades += introToComputing * ITC; //+= means add and assign
    totalWeightedGrades += computerProgramming * CP1;
    totalWeightedGrades += businessApplicationSoftware * BAS;
    totalWeightedGrades += understandingTheSelf * UTS;
    totalWeightedGrades += purposiveCommunication * PC;
    totalWeightedGrades += mathInModernWorld * MMW;
    totalWeightedGrades += civicWelfare * CWTS;
    totalWeightedGrades += movementCompetency * PE;
    totalWeightedGrades += readingsPhHistory * READ;
    
    //Sum all the units
    totalUnits = ITC + BAS + UTS + PC + MMW + CWTS + READ + PE + CP1;
    
    //Computing for the GWA
    generalWeightedAverage = totalWeightedGrades / totalUnits;
    
    //Displaying the Results
    printf("\nYour General Weighted Average is %.2f", generalWeightedAverage);

return 0;
    
}