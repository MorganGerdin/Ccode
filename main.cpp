#include <stdio.h>
#include <math.h>
#include <iostream>
using namespace std;


int main() {
    float number1, number2;


    cout <<"enter first decimal: ";
    cin >> number1;


    cout <<"enter second decimal: ";
    cin >> number2;




    printf ("The quotient is %d\n", number1/number2);
    printf ("The sum is %.4lf\n", number1+number2);
    printf ("The difference is %.4lf\n", number1-number2);
    printf ("The product is %.4lf\n", number1*number2);
    printf ("The average of the numbers is %lf\n",(number1 + number2)/2.0);
    printf ("The exponentiation is %.4lf\n", pow(number1,number2));




    return 0;
}
