#include <iostream>
#include <iomanip>

using namespace std;

/**
 * Echo all command line arguments, one per line in the form:
 *
 *   idx: arg
 *
 * where idx is the index (0, 1, ...) and arg is the argument.
 *
 * @param argc number of arguments
 * @param argv 2D array of C-style (null terminated) strings
 * @param outs output destination (e.g., cerr or cout)
 */
void echo_arguments(const int argc, char** argv, ostream& outs=std::cout)
{
    outs << "Printing arguments:" << "\n";
    // There is always at least one argument, i.e., the program name
    outs << right << setw(3) << 0 << ": " << argv[0] << "\n";
    outs << "\n";

    for (int i = 1; i < argc; i++) {
        outs << right << setw(3) << i << ": " << argv[i] << "\n";
    }
}

/**
 * Validates input. This function does NOT check if input is numerical. In case of alphanumeric args, atoi() will return zero
 * and the program will execute normally.
 * @param argc number of arguments
 * @param argv 2D array of C-style (null terminated) strings
 * @throws invalid_argument if based on the problem criteria, the given args are not correct
 */
void validate_args(const int argc, char** argv) {
    if(argc != 5) {
        throw invalid_argument("\033[1;31m At least 4 numbers are needed as arguments! (x, y, min, max) \033[0m");
    }

    if(atoi(argv[3]) > atoi(argv[4])) {
        throw invalid_argument("\033[1;31m min can't be greater than max! Fix program args \033[0m");
    }
}

int main(int argc, char** argv)
{
    echo_arguments(argc, argv);

    try {
        validate_args(argc, argv);
    } catch(std::invalid_argument const& exception) {
        cout << exception.what() << endl;
    }

    return 0;
}