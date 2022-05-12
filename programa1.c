#include <stdio.h>
#include <math.h>
int main() {    

    float number1, number2, sum, sub, mul, lsl, lsr, andv, orv;
    
    printf("Enter two integers: ");
    scanf("%f %f", &number1, &number2);

    // calculating sum
    sum = number1 + number2;
    
    // calculating sub
    sub = number1 - number2; 
    
    // calculating mul
    mul = number1 * number2; 
    
    // calculating lsl
    lsl = number2*pow(2,3); 
    
    // calculating lsr
    lsr = number2*pow(2,.33333);
    
    // calculating and
    andv = (number1 == number2) && (number1 > 5);
    
    // calculating or
    orv = (number1 == number2) || (number1 > 5);
    
    
    printf("%f + %f = %f\n", number1, number2, sum);
    printf("%f - %f = %f\n", number1, number2, sub);
    printf("%f * %f = %f\n", number1, number2, mul);
    printf("%f lsl %f = %f\n", number1, number2, lsl);
    printf("%f lsr %f = %f\n", number1, number2, lsl);
    printf("AND = %f\n", andv);
    printf("OR = %f", orv);
    return 0;
}
