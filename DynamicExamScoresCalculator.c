/* DynamicExamScoreCalculator_Surname.c
MEMBERS:
1. Alcantara, Ashley Gabrielle 
2. Camacho, Kyle Christian
3. Dayapera, Joshua
4. Pangilinan, Rodge Patrick
*/ 
#include <stdio.h>


int main() {
    int sections, students[10], totalStudents = 0; 
    int i, j, maxScore = 0, minScore = 100, modeCount[101] = {0}, allScores[100];
    int scoreCount = 0;
    float sectionAvg[10], totalSum = 0;
    int sectionMax[10], sectionMin[10];

    while (1) {
    printf("Enter number of sections: ");
    if (scanf("%d", &sections) != 1) {
                while (getchar() != '\n');
                printf("Invalid input! Please enter a valid number.\n");
                continue; // Ask for size again
            }

    // Step 1: Input the number of students per section
    for (i = 0; i < sections; i++) {
        while (1) {
            printf("Enter number of students in section %d: ", i + 1);
            if (scanf("%d", &students[i]) == 1 && students[i] > 0) {
                totalStudents += students[i];
                break;
            } else {
                while (getchar() != '\n');  // Clear the buffer
                printf("Invalid input! Please enter a valid number of students (positive integer).\n");
            }
        }
    }

    // Step 2: Collect scores dynamically per section
    for (i = 0; i < sections; i++) {
        int sectionSum = 0;
        sectionMax[i] = 0;  
        sectionMin[i] = 100; 
        printf("\n", i + 1);
      
        for (j = 0; j < students[i]; j++) {
            int score;
                
                int valid = 0; 
                while (!valid) {
                printf("Enter exam score of student %d in section %d: ", j + 1, i + 1);
                if (scanf("%d", &score) == 1) {
                    valid = 1; 
                } else {
                    printf("Invalid input. Please enter a valid number.\n");
                    while (getchar() != '\n'); 
                }
            }
            sectionSum += score;
            totalSum += score;
            allScores[scoreCount++] = score;
            modeCount[score]++;

            // Check section max and min score
            if (score > sectionMax[i]) sectionMax[i] = score;
            if (score < sectionMin[i]) sectionMin[i] = score;

            // Check overall max and min score
            if (score > maxScore) maxScore = score;
            if (score < minScore) minScore = score;
            
        
        // Calculate average per section
        sectionAvg[i] = (float)sectionSum / students[i];
    }

    // Step 3: Calculate overall average
    float overallAvg = totalSum / totalStudents;

    // Step 4: Calculate mode (most frequent score)
    int modeScores[101], modeIndex = 0, modeFreq = 0;
    for (i = 0; i < 101; i++) {
        if (modeCount[i] > modeFreq) {
            modeFreq = modeCount[i];
            modeIndex = 0;
            modeScores[modeIndex++] = i;
        } else if (modeCount[i] == modeFreq && modeFreq > 1) {
            modeScores[modeIndex++] = i;
        }
    }

    // Step 5: Calculate median
    // Sorting all scores
    for (i = 0; i < scoreCount - 1; i++) {
        for (j = i + 1; j < scoreCount; j++) {
            if (allScores[i] > allScores[j]) {
                int temp = allScores[i];
                allScores[i] = allScores[j];
                allScores[j] = temp;
            }
        }
    }
    float median;
    if (scoreCount % 2 == 0)
        median = (allScores[scoreCount / 2 - 1] + allScores[scoreCount / 2]) / 2.0;
    else
        median = allScores[scoreCount / 2];

    // Step 6: Display results
    printf("\n--- Results ---\n");
    for (i = 0; i < sections; i++) {
        printf("Average score in section %d: %.2f\n", i + 1, sectionAvg[i]);
    }
    printf("Average score in all sections: %.2f\n", overallAvg);
    printf("\n");

    for (i = 0; i < sections; i++) {
        printf("Highest score in section %d: %d\n", i + 1, sectionMax[i]);
    }
    printf("Highest score in all sections: %d\n", maxScore);
    printf("\n");

    for (i = 0; i < sections; i++) {
        printf("Lowest score in section %d: %d\n", i + 1, sectionMin[i]);
    }
    printf("Lowest score in all sections: %d\n", minScore);
    printf("\n"); 

    printf("Mode: ");
    for (i = 0; i < modeIndex; i++) {
        if (i > 0) printf(", ");
        printf("%d", modeScores[i]);
    }
    printf("\n");

    printf("Median: %.2f\n", median);

    return 0;
}
}
}