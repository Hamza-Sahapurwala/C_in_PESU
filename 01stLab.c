
//  * Q1. Write a program which takes 2 integer inputs representing base and height of a triangle and calculate its area and print it.
// A1. 
#include <stdio.h>

#include <math.h>

#include <limits.h>

int main(){

int h,b;

printf("Enter breath and height:\n");

scanf("%d%d",&h,&b);

printf("The area of the triangle is %.2f", (float) 0.5 * h * b);

}

// * Q2.Take an integer (X) and a long long integer (Y) as input and perform the following operations:
// * Add X to the minimum value of INT allowed in 'C'
// * Add Y to the minimum value of LONG LONG INT allowed in 'C'

// A2. 

int main(){

int x;

long y;

printf("Enter 2 no.:\n");

scanf("%d%ld",&x,&y);

printf("The no. are changed,\nx = %d\ny = %ld\n", x + INT_MIN, y + LONG_MIN);

}

// * Q3. Create a program to calculate compound interest (CI) based on principal amount (P), interest rate (R), and time period (T) in years. Use the formula:
// * CI = P × (1 + R/100)^T - P. Print the result with two decimal places.
// A3. 

int main(){

double p,r,t;

printf("Enter Principle, rate of interest and Time:\n");

scanf("%lf%lf%lf",&p,&r,&t);

double answer = (p * pow((1 + ((r * 0.01)/100)), t)) - p;

printf("The Compound Interest is = %.2lf",answer);

}

// * Q4. Write a program that accepts three integer values and increments each by
// * 2, then prints the results with a dollar sign ($) between them.
// A4. 

int main(){

int p,r,t;

printf("Enter 3 no.:\n");

scanf("%d%d%d",&p,&r,&t);

printf("After increment = \n%d\n%d\n%d",p+2,r+2,t+2);

}

// * Q5. Develop a program that takes the side length of a square as input and
// * calculates both its area and perimeter. Use the math.h header file and
// * display both results.
// A5. 

int main(){

double a;

printf("Enter length of one side of a square:\n");

scanf("%lf",&a);

printf("The perimeter of the square is = %lf\nThe area of the square is = %lf\n",4 * a, pow(a,2));

}

// * Q6. Create a program that calculates the total bill at a restaurant. Take the food
// * cost and tip percentage as input, then calculate and display the final bill
// * (with two decimal places precision) including the tip.
// A6. 

int main(){

double f,t;

printf("Enter Food cost and Tip Percentage:\n");

scanf("%lf%lf",&f,&t);

double tip = f * (t / 100);

printf("The Total bill is = %.2lf\nThe tip is = %.2lf\n",f + tip, tip);

}

// * Q7. Write a program that takes a three-digit number as input and prints its
// * hundreds, tens, and ones digit, separated by a tab space.
// A7. 

int main(){

int a;

printf("Enter a 3 digit no.:\n");

scanf("%d",&a);

printf("The No. at 100th Place is: %d\nThe No. at 10th Place is = %d\nThe No. at 1st Place is = %d\n",a/100,(a%100)/10,a%10);

}

// * Q8. Create a program that accepts three integers, subtracts 5 from each, and
// * prints them with an at symbol (@) between the numbers.
// * A8. 

int main(){

int a,b,c;

printf("Enter a 3 no.:\n");

scanf("%d%d%d",&a,&b,&c);

printf("%d@%d@%d\n",a-5,b-5,c-5);

}

// * Q9. Write a program to calculate the kinetic energy of an object using the
// * formula: KE = (1/2) × mass × velocity2. Take mass and velocity as input and
// * print the energy.
// A9. 

int main(){

double m,v;

printf("Enter mass and velocity:\n");

scanf("%lf%lf",&m,&v);

printf("The Kinetic Energy is = %.2lf",0.5 * v * m);

}

// * Q10. Write a C program that takes an integer as input and extracts its last digit.
// A10. 

int main(){

int a;

printf("Enter a no.:\n");

scanf("%d",&a);

printf("The last digit is = %d",a % 10);

}

// * Q11. Write a C program that takes an integer value (seconds) as input and
// * converts it into hours, minutes, and seconds format.
// A11. 

int main(){

int a;

printf("Enter no. of seconds:\n");

scanf("%d",&a);

printf("Hours = %d,Minutes = %d, Seconds = %d",a / 3600, (a % 3600) / 60,a % 60);

}

// * Q12. Write a C program that converts a given length from feet to meters.
// * The program should take the length in feet as input and display the
// * equivalent length in meters, formatted to 4 decimal places.
// A12. 

int main(){

double a;

printf("Enter no. of feet:\n");

scanf("%lf",&a);

printf("%.4lf Feet = %.4lf Meters\n", a, a * 0.3048);

}

// * Q13. Write a program to print the ASCII value of a character entered by the user.
// A13. 

int main(){

char a;

printf("Enter a character:\n");

scanf("%c",&a);

printf("The ASCII value is %d\n", a);

}
