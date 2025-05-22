#include <stdio.h>


void grading(int average);

int main() {
    int noofgrades;
    printf("Enter the number of subjects:(1-5)");
    scanf("%d",&noofgrades);
    int i;
    int sum = 0;
    int average = 0;
    int grades[noofgrades];
        for (i = 0; i < noofgrades; i++) {
            printf("Enter marks in subject %d: ", i + 1);
            scanf("%d", &grades[i]);
            sum += grades[i];}   
    average = sum / noofgrades;
    printf("The average is: %d\n", average);
    grading(average);
    return 0;

}
void grading(int average) {
    if (average >= 90) {
        printf("Grade: A\n");
    } else if (average >= 80) {
        printf("Grade: B\n");
    } else if (average >= 70) {
        printf("Grade: C\n");
    } else if (average >= 60) {
        printf("Grade: D\n");
    } else {
        printf("Grade: F\n");
    }
}