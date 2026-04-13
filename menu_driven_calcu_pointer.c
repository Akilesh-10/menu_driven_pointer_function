/**
 *  Create menu-driven calculator using function pointers.
 */

 #include <stdio.h>

 // math functions

float add(float a, float b) {return a+b; }
float subt(float a, float b) {return a-b; }
float mul(float a, float b) {return a*b; }
float div(float a, float b) {return a/b; }

/**
 * we can use array of function pointers to create menu driven calculator
 * Syntax of array of function pointers
 * return_type(*array_name[])(parameter_types)
 */

 int main(){
    float (*operations[])(float,float) = {add,subt,mul,div};

    int choice;
    float num1, num2;

    printf("--- Function Pointer Calculator ---\n");
    printf("0: Add\n1: Subtract\n2: Multiply\n3: Divide\n");
    printf("Enter choice (0-3): ");
    scanf("%d", &choice);

    // Validate input
    if (choice < 0 || choice > 3) {
        printf("Invalid choice!\n");
        return 1;
    }

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    // 3. Call the function using the pointer at the chosen index
    float result = operations[choice](num1, num2);

    printf("Result: %.2f\n", result);

    return 0;


 }
