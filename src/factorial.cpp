/*
 * factorial.cpp
 *
 *  Created on: Nov 16, 2015
 *      Author: avia
 */

int factorial(int n) {
        int result = 1;
        for (int i = 1; i <= n; i++) {
                result *= i;
         }
        return result;
}
