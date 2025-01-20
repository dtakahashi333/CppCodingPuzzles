#ifndef __NON_DIVISIBLE_SUBSET_HPP__
#define __NON_DIVISIBLE_SUBSET_HPP__

#include <iostream>
#include <vector>
#include <stack> // std::stack

using namespace std;

/*
 * Complete the 'nonDivisibleSubset' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER k
 *  2. INTEGER_ARRAY s
 */

int nonDivisibleSubset(int k, vector<int> s);
int nonDivisibleSubsetByBruteForce(int k, vector<int> s);

#endif // __NON_DIVISIBLE_SUBSET_HPP__