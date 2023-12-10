#include "myTool.h"

#define PI 3.1415936

double circlePerimeter(double radius) {
	double perimeter = 2 * PI * radius;
	return perimeter;
}

double circleArea(double radius) {
	double area = PI * radius * radius;
	return area;
}

double circleArea(double radius, double arc) {
	double area = 0.5 * arc * radius * radius;
	return area;
}
