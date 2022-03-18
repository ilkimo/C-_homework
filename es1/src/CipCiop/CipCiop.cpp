
#include "CipCiop.h"

CipCiop::CipCiop(int x, int y, int min, int max) {
    this->x = x;
    this->y = y;
    this->min = min;
    this->max = max;

    vector<string> solution = solve();

    for(string str : solution) {
        cout << str << endl;
    }
}

vector<string> CipCiop::solve() {
    vector<string> vector;

    for(int i = min; i <= max; i++) {
        bool stringModified = false;
        string str = "";

        if(i % x == 0) {
            str += "Cip";

            stringModified = true;
        }

        if(i % y == 0) {
            str += "Ciop";

            stringModified = true;
        }

        if(!stringModified) {
            str = to_string(i);
        }

        vector.push_back(str);
    }

    return vector;
}