#include <stdio.h>
#include <stdlib.h>

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
    // printf("%lf\n", newG);

    if (fabs(theValue - (newG * newG)) > thePrecision) {
        newG = squareRoot(theValue, thePrecision, newG);
    }
        return newG;
}

/**
 * @brief Main method of program.
 * 
 */
void main () {

    long double root0 = squareRoot(40, (double) 0.00001, 6);
    long double root1 = squareRoot(50, (double) 0.0000000000001, 6);

    printf("%.15Lf\n", root0);
    printf("%.15Lf\n", root1);

    

}