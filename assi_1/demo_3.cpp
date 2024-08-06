//function overloading
//3) write a function 'Add' which is able to add 
//3 int value and 1 float value 
//2 int value and 2 float value ,
//1 int value and 3 float value,
//4 int value ,
//4 float value,
#include <stdio.h>

int Add(int a, int b, int c, int d) {
    return a + b + c + d;
}

float Add(int a, int b, int c, float d) {
    return a + b + c + d;
}

float Add(int a, int b, float c, float d) {
    return a + b + c + d;
}

float Add(int a, float b, float c, float d) {
    return a + b + c + d;
}

float Add(float a, float b, float c, float d) {
    return a + b + c + d;
}

int main() {
    printf("Sum of 3 int and 1 float: %f\n", Add(1, 2, 3, 4.5f));
    printf("Sum of 2 int and 2 float: %f\n", Add(1, 2, 3.5f, 4.5f));
    printf("Sum of 1 int and 3 float: %f\n", Add(1, 2.5f, 3.5f, 4.5f));
    printf("Sum of 4 int: %d\n", Add(1, 2, 3, 4));
    printf("Sum of 4 float: %f\n", Add(1.1f, 2.2f, 3.3f, 4.4f));
    
    
    return 0;
}
