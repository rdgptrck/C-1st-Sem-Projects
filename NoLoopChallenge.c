#include <stdio.h>

int sum(int number);
int getValidNumber();
char getValidChoice();
int clearInput();
int maxN;

int main() {
    int number = 1;
    maxN = getValidNumber();
    sum(number);
    return 0;
}

int getValidNumber() {
    int num;
    char term;
    printf("Input Number: ");
    if (scanf("%i%c", &num, &term) != 2 || term != '\n') {
        clearInput(); 
        return getValidNumber(); 
    }
    return num;
}

char getValidChoice() {
    char choice, term;
    printf("\nDo you want to print another set of numbers? [Yy | Else]: ");
    if (scanf(" %c%c", &choice, &term) != 2 || term != '\n') {
        clearInput(); 
        printf("Exiting program.\n");
        return 0;  
    }
    if (choice != 'Y' && choice != 'y') {
        printf("Exiting program.\n");
        return 0; 
    }
    return choice;
}

int clearInput() {
    char c = getchar();
    if (c != '\n') {
        clearInput(); 
    }
}

int sum(int number) {
    printf("%i\t", number);
    if (number < maxN) {
        sum(number + 1);
    } else {
        char choice = getValidChoice();
        if (choice == 'Y' || choice == 'y') {
            int number = 1;
            maxN = getValidNumber();
            sum(number);
        }
    }
    return 0;
}