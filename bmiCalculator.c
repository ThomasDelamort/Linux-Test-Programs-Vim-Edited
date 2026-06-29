#include <stdio.h>

float calculateBMI(float height, float weight) {
    float BMI = weight / (height * height);

    return BMI;
}

int main () {
    
    char name[50];
    bool metricSys = true;
    
    float height = 0;
    float weight = 0;

    printf("What is your name: ");
    scanf("%s", name);
    
    switch (metricSys) {
	case true:
	   printf("How tall are you(meter): ");
	   scanf("%f", &height);

	   printf("How much is your weight(kg): ");
	   scanf("%f", &weight);

	   float BMI = calculateBMI(height, weight);  
	   
	   printf("Your BMI is %2.f", BMI);
	   break;


        case false:
	   break;
    }
    

    return 0;
}
