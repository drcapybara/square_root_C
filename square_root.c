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
 * @return float which is approximation of root of value.
 */
double squareRoot(const int theValue, const int thePrecision, const double theG) {

    double gSquared = theG * theG;
    double xDivG = theValue / theG;
    double newG = (theG + theValue / theG) / 2;

    if (abs(theValue - (newG * newG)) > thePrecision) {
        squareRoot(theValue, thePrecision, newG);
    } 
    return newG;
}

/**
 * @brief Main method of program.
 * 
 */
void main () {

    double root0 = squareRoot(40, 0.1, 6.0f);
    double root1 = squareRoot(50, 0.1, 6.0f);

    printf("%f\n", root0);
    printf("%f\n", root1);

    

}