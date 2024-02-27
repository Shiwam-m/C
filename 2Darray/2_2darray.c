//ques WAP to store rool number and marks obtained by 4 student side by side in a matrix 
#include <stdio.h>

int main() {
    // Define a 2D array to store roll numbers and marks (4 students x 2 columns)
    int studentData[4][2];
 
    // Input data
    for (int i = 0; i < 4; i++) {
        printf("Enter Roll Number for Student %d: ", i + 1);
        scanf("%d", &studentData[i][0]);

        printf("Enter Marks Obtained by Student %d: ", i + 1);
        scanf("%d", &studentData[i][1]);
    }

    // Display the stored data
    printf("\nStudent Data:\n");
    printf("Roll Number\tMarks\n");
    for (int i = 0; i < 4; i++) {
        printf("%d\t\t%d\n", studentData[i][0], studentData[i][1]);
    }

    return 0;
}



