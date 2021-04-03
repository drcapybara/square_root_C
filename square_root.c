#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * @file square_root.c
 * @author Dustin Ray
 * @brief Finds square root of a value through repeated guesses.
 * @version 0.1
 * @date 2021-04-02
 * 
 */

/**
 * @brief Algorithm to find the approximation of the square root of a number through repeated
 * guesses starting with an arbitrary value.
 * 
 * @param theValue the value to find the root for.
 * @param thePrecision stops algorithm when guess^2 is this much away from value.
 * @param theG the guess to start approximation at.
 * @return double which is approximation of root of value.
 */
long double squareRoot(double theValue, double thePrecision, long double theG) {
    long double newG = (theG + (theValue / theG)) / (double) 2;
    if (fabs(theValue - (newG * newG)) > thePrecision) {
        newG = squareRoot(theValue, thePrecision, newG);
    }
    return newG;
}

/**
 * @brief Main method of program.
 * 
 */
int main () {

    long double precision = 0.00000000000000001;
    long double root0 = squareRoot(40, (double) precision, 6);
    long double root1 = squareRoot(50, (double) precision, 6);

    char string0[22] = "Square root of 40 is: ";
    char string1[22] = "Square root of 50 is: ";

    printf("%s%.20Lf\n", string0, root0);
    printf("%s%.20Lf\n", string1, root1);

    return 0;

}