#include <stdio.h>

int sum(int number);
int maxN;
int dywtc();
char input = 'y';

int main() {
    int number = 1;
    if (input == 'y' || input == 'Y') {
        printf("\nInput Number: ");
        scanf("%i", &maxN);
        sum(number);
        printf("\n");
        dywtc();
    } 
}

int sum(int number) {
    printf("%i\t", number);
    if (number < maxN) {
        return sum(number + 1);
    } 
}

int dywtc() {
    printf("\nDo you want to print another set of numbers? [Yy|Else]: ");
    scanf(" %c", &input);

    // dywtc
    if (input == 'y' || input == 'Y') {
        main(); // if Yy call main() mendoza
    } else {
        printf("\nExiting Program\n");
    }

return 0;
} 