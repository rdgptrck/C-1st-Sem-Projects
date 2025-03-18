#include <stdio.h>

int main() {
    int choice, size, i, j; // i = rows, j = columns

    do {
        // Display the menu
        printf("\n--------------------\n\nChoose a shape to draw (Enter 0 to exit):\n");
        printf("[ 1] DrawLine\n[ 2] DrawStripedLine\n[ 3] DrawSquare\n[ 4] DrawParallelogram\n");
        printf("[ 5] DrawTriangle\n[ 6] DrawReverseTriangle\n[ 7] DrawIsoscelesTriangle\n[ 8] DrawReverseIsoscelesTriangle\n");
        printf("[ 9] DrawHourglass\n[10] DrawDiamond\n[11] DrawZero \n[12] DrawArrowUp\n");
        printf("[13] DrawArrowDown\n[14] DrawX\n[15] DrawBowtie\n[ 0] Exit Program\n");
        printf("Enter your choice: ");

        if (scanf("%i", &choice) != 1) { // Validation for choice
            while (getchar() != '\n');
            printf("\nInvalid choice! Please choose a number between 0 and 15.\n");
            continue;
        }

        // Exit
        if (choice == 0) {
            printf("Exiting the program.\n");
            break;
        }   

        if (choice < 0 || choice > 15) {
            printf("Invalid choice! Please choose a number between 0 and 15.\n");
            continue;
        }

        // Loop for size input until valid size is entered
        while (1) {
            printf("Enter the size (odd number above 3): ");
            if (scanf("%d", &size) != 1) {
                while (getchar() != '\n');
                printf("Invalid input! Please enter a valid number.\n");
                continue; // Ask for size again
            }

            // Check if the size is valid
            if (size % 2 != 0 && size > 3) {
                break; // Valid size, exit the loop
            } 
        }
        printf("\n");

        // Shape drawing logic based on choice
        switch (choice) {
            case 1:  // Draw Line
                for (i = 0; i < size; i++) {
                    printf("*");
                }
                printf("\n");
                break;

            case 2:  // Draw Striped Line
                for (i = 0; i < size; i++) {
                    if (i % 2 == 0) {
                        printf("*");
                    } else {
                        printf("_"); // spaces
                    }
                }
                printf("\n");
                break;

            case 3:  // Draw Square
                for (i = 0; i < size; i++) {
                    for (j = 0; j < size; j++) {
                        printf("*");
                    }
                    printf("\n");
                }
                break;

            case 4:  // Draw Parallelogram
                for (int i = 0; i < size; i++) {
                    for (int j = 0; j < size - i + 1; j++) {
                        printf("_");
                    }
                    for (int j = 0; j < size; j++) {
                        printf("*");
                    }
                    for (int j = 0; j < size - i + 1; j++) {
                        printf("_");
                    }
                    printf("\n");
                }
                break;

            case 5:  // Draw Triangle
                for (i = 1; i <= size; i++) {
                    for (j = 1; j <= i; j++) {
                        printf("*");
                    }
                    for (j = 1; j <= size - i; j++) {
                        printf("_");  // right underscore spaces
                    }
                    printf("\n");
                }
                break;

            case 6:  // Draw Reverse Triangle
                for (i = size; i >= 1; i--) {
                    for (j = 1; j <= i; j++) {
                        printf("*");
                    }
                    for (j = 1; j <= size - i; j++) {
                        printf("_");  // right
                    }
                    printf("\n");
                }
                break;

            case 7:  // Draw Isosceles Triangle
                for (i = 0; i < size; i++) {
                    for (j = 0; j < size - i - 1; j++) {
                        printf("_");  // left underscore spaces
                    }
                    for (j = 0; j < 2 * i + 1; j++) {
                        printf("*");
                    }
                    for (j = 0; j < size - i - 1; j++) {
                        printf("_");  // right underscore spaces
                    }
                    printf("\n");
                }
                break;

            case 8:  // Draw Reverse Isosceles Triangle
                for (i = size; i >= 1; i--) {
                    for (j = 0; j < size - i; j++) {
                        printf("_");  // left underscore spaces
                    }
                    for (j = 0; j < 2 * i - 1; j++) {
                        printf("*");
                    }
                    for (j = 0; j < size - i; j++) {
                        printf("_");  // right underscore spaces
                    }
                    printf("\n");
                }
                break;

            case 9:  // Draw Hourglass
                for (i = size / 2; i >= 0; i--) {
                    for (j = 0; j < size / 2 - i; j++) {
                        printf("_");  // left underscore spaces
                    }
                    for (j = 0; j < 2 * i + 1; j++) {
                        printf("*");
                    }
                    for (j = 0; j < size / 2 - i; j++) {
                        printf("_");  // right underscore spaces
                    }
                    printf("\n");
                }
                for (i = 1; i <= size / 2; i++) {
                    for (j = 0; j < size / 2 - i; j++) {
                        printf("_");  // left underscore spaces
                    }
                    for (j = 0; j < 2 * i + 1; j++) {
                        printf("*");
                    }
                    for (j = 0; j < size / 2 - i; j++) {
                        printf("_");  // right underscore spaces
                    }
                    printf("\n");
                }
                break;

            case 10:  // Draw Diamond
                for (i = 0; i < size / 2 + 1; i++) {
                    for (j = 0; j < size / 2 - i; j++) {
                        printf("_");  // left underscore spaces
                    }
                    for (j = 0; j < 2 * i + 1; j++) {
                        printf("*");
                    }
                    for (j = 0; j < size / 2 - i; j++) {
                        printf("_");  // right underscore spaces
                    }
                    printf("\n");
                }
                for (i = size / 2 - 1; i >= 0; i--) {
                    for (j = 0; j < size / 2 - i; j++) {
                        printf("_");  // left underscore spaces
                    }
                    for (j = 0; j < 2 * i + 1; j++) {
                        printf("*");
                    }
                    for (j = 0; j < size / 2 - i; j++) {
                        printf("_");  // right underscore spaces
                    }
                    printf("\n");
                }
                break;

            case 11:  // Draw Zero
                for (i = 0; i < size; i++) {
                    for (j = 0; j < size; j++) {
                        if (i == 0 || i == size - 1 || j == 0 || j == size - 1) {
                            printf("*");
                        } else {
                            printf("_");  // spaces
                        }
                    }
                    printf("\n");
                }
                break;

            case 12:  // Draw Arrow Up
                for (i = 0; i < size / 2 + 1; i++) {
                    for (j = 0; j < size / 2 - i; j++) {
                        printf("_");  // left underscore spaces
                    }
                    for (j = 0; j < 2 * i + 1; j++) {
                        printf("*");
                    }
                    for (j = 0; j < size / 2 - i; j++) {
                        printf("_");  // Add underscores to the right for symmetry
                    }
                    printf("\n");
                }
                for (i = 0; i < size / 2; i++) {
                    for (j = 0; j < size / 2; j++) {
                        printf("_");  // Add underscores to the left for symmetry
                    }
                    printf("*\n");
                }
                break;

            case 13:  // Draw Arrow Down
                for (i = 0; i < size / 2; i++) {
                    for (j = 0; j < size / 2; j++) {
                        printf("_");  // Add underscores to the left for symmetry
                    }
                    printf("*\n");
                }
                for (i = size / 2; i >= 0; i--) {
                    for (j = 0; j < size / 2 - i; j++) {
                        printf("_");  // Replace space with underscore on the left
                    }
                    for (j = 0; j < 2 * i + 1; j++) {
                        printf("*");
                    }
                    for (j = 0; j < size / 2 - i; j++) {
                        printf("_");  // Add underscores to the right for symmetry
                    }
                    printf("\n");
                }
                break;

            case 14:  // Draw X
                for (i = 0; i < size; i++) {
                    for (j = 0; j < size; j++) {
                        if (i == j || i + j == size - 1) {
                            printf("*");
                        } else {
                            printf("_");  // spaces
                        }
                    }
                    printf("\n");
                }
                break;

            case 15:  // Draw Bowtie
                for (i = 0; i < size / 2 + 1; i++) {
                    for (j = 0; j < i; j++) {
                        printf("*");
                    }
                    for (j = 0; j < size - 2 * i; j++) {
                        printf("_");  // spaces
                    }
                    for (j = 0; j < i; j++) {
                        printf("*");
                    }
                    printf("\n");
                }
                for (i = size / 2 - 1; i >= 0; i--) {
                    for (j = 0; j < i; j++) {
                        printf("*");
                    }
                    for (j = 0; j < size - 2 * i; j++) {
                        printf("_");  // spaces
                    }
                    for (j = 0; j < i; j++) {
                        printf("*");
                    }
                    printf("\n");
                }
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while (1);

    return 0;
}
