#include <stdio.h>

int main() {
    float scores[3][3];              // [student][subject]
    float sum_subject[3] = {0, 0, 0}; // เก็บผลรวมของแต่ละวิชา
    char *subjects[] = {"Math", "Physics", "Chemistry"};
    int i, j;

    // ผลคะแนนนักศึกษา3คน
    for(i = 0; i < 3; i++) {
        printf("Enter scores for Student %d:\n", i+1);
        for(j = 0; j < 3; j++) {
            printf("%s: ", subjects[j]);
            scanf("%f", &scores[i][j]);
            sum_subject[j] += scores[i][j]; // รวมคะแนนแต่ละวิชา
        }
    }

    // แสดงตารางคะแนน
    printf("\nScore Table:\n");
    printf("%-10s%10s%10s%12s\n", "Student", "Math", "Physics", "Chemistry");
    for(i = 0; i < 3; i++) {
        printf("%-10d", i+1);
        for(j = 0; j < 3; j++) {
            printf("%10.2f", scores[i][j]);
        }
        printf("\n");
    }

    // แสดงค่าเฉลี่ยแต่ละวิชา
    printf("\nAverage per subject:\n");
    for(j = 0; j < 3; j++) {
        printf("%-10s = %.2f\n", subjects[j], sum_subject[j]/3.0);
    }

    return 0;
}