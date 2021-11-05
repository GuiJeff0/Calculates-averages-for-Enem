#include <stdio.h>
#include <stdlib.h>

//Calculate your average on Enem
int main(){
    printf("If your college does not have weight for the grades, please type 1 in the weights\n");

    float nature_n, math_n, language_n, humnan_n, redaction_n;
    int w1, w2, w3, w4, w5; //respective weights
    float arithmetic_average, weighted_average;

    //Collecting notes and weights
    printf("Enter your nature note and weight: ");
    scanf("%f", &nature_n);
    scanf("%i", &w1);

    printf("Enter your math grade and weight: ");
    scanf("%f", &math_n);
    scanf("%i", &w2);

    printf("Enter your language note and weight: ");
    scanf("%f", &language_n);
    scanf("%i", &w3);

    printf("Enter your human grade and weight: ");
    scanf("%f", &humnan_n);
    scanf("%i", &w4);

    printf("Enter your essay note and weight: ");
    scanf("%f", &redaction_n);
    scanf("%i", &w5);

    //calculate the notes
    arithmetic_average = (nature_n+math_n+language_n+humnan_n+redaction_n) /5;
    weighted_average =((nature_n*w1)+(math_n*w2)+(language_n*w3)+(humnan_n*w4)+(redaction_n*w5))/ (w1+w2+w3+w4+w5);

    printf("\nYour arithmetic average was: %.2f", arithmetic_average);
    printf("\nYour weighted average was: %.2f", weighted_average);


  return 0;
}
