
#pragma once

#include <iostream>
#include <vector>

using namespace std;

class CipCiop {
public:
    /**
     * @brief Constructor
     */
    CipCiop(int x, int y, int min, int max);

    /**
     * @brief This function solves the problem and return a vector<string> containing the solution.
     * @return the solution to the problem
     */
    vector<string> solve();

private:
    int x, y, min, max;
};

