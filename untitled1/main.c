#include <stdio.h>
#define PI 3.14159265

int main(void) {
    double radius;
    printf("Enter the radius of circle: ");
    // Why do I need to add a "&" in c, and what does it do
    scanf("%lf", &radius);
    double area_of_circle = PI * radius * radius;
    printf("The area of your circle is %lf", area_of_circle);
    return 0;
}