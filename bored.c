#include <stdio.h>

int main () {
    int numberOfCourses = 0;
    double gwa = 0;
    double sum = 0;
    double grade = 0;

    printf("<>===<> Calculate your GWA now <>===<>");
    
    printf("\nHow many courses: "); 
    scanf("%d", &numberOfCourses); 
    double grades[numberOfCourses];

    for (int i = 0; i < numberOfCourses; i++) {
	printf("Enter Grade %d: ", i+1);
        scanf(" %lf", &grade);
	grades[i] = grade;
	grade = 0;
    }

    for (int j = 0; j < numberOfCourses; j++) {
	sum += grades[j];
    }
    gwa = sum / numberOfCourses;

    printf("\nYour GWA is: %.2f", gwa);
    return 0;

    if (gwa < 2.5) {
	printf("Very Good!");
    }
}
