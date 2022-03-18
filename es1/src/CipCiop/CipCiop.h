
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

private:
    int x, y, min, max;

    vector<string> solve();
};

