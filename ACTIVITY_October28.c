#include <stdio.h>

int main() {
    int sizeOfArray = 0;

    printf("Input Number of students: ");
    scanf("%i", &sizeOfArray);
    printf("\n");
    
    int age[sizeOfArray];
    char bscs1aName[sizeOfArray][30];   
    char contact[sizeOfArray][12];   


    // Input Names, Ages, Contact
    for (int i = 0; i < sizeOfArray; i++) {
        printf("Name#%i: ", i + 1);
        scanf(" %[^\n]", bscs1aName[i]);  

        printf("Age#%i: ", i + 1);
        scanf("%i", &age[i]);         

        printf("Contact#%i: ", i + 1);
        scanf("%s", contact[i]);    
        printf("\n");
    }
    // Display the elements of the array
    printf("List of Students:\n");
    for (int i = 0; i < sizeOfArray; i++) {
        printf("%i. %s, %i, %s\n", i + 1, bscs1aName[i], age[i], contact[1]);
    }

    return 0;
}