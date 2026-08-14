#include<stdio.h>
#include<math.h>

float squareAREA(float side);
float circleAREA(float radius);
float rectangleArea(float a, float);

int main() {
    float a = 5.0;
    float b = 10.0;

    printf("area is : %f", rectangleArea(a, b));
    return 0;
}

float squareArea(float side) {
    return side *side;
}

float circleArea(float rad) {
    return 3.14 * rad *rad;
}

float rectangleArea(float a, float b) {
    return a * b;
}    



 
 
       
