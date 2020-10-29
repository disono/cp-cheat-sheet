#include <iostream>
#include <sstream>

using namespace std;

/**
 * One way to stream a string is to use an input string stream object
 * std::istringstream from the header. Once a std::istringstream object
 * has been created, then the string can be streamed and stored using
 * the extraction operator(>>). The extraction operator will read
 * until whitespace is reached or until the stream fails.
 * 
 * Streaming ints from a string with istringstream 
 * In C++ strings can be streamed into temporary variables, similarly 
 * to how files can be streamed into strings. Streaming a string 
 * allows us to work with each character individually.
 * 
 * One way to stream a string is to use an input string stream 
 * object istringstream from the <sstream> header.
 * 
 * Once an istringstream object has been created, parts of the string 
 * can be streamed and stored using the "extraction operator": >>. 
 * The extraction operator will read until whitespace is
 * reached or until the stream fails.
 */

int main() {
    cout << "1) String and numeric" << endl;
    string a("112 2 9 a 3");
    istringstream aStream(a);

    // Variable to store number n
    int n;

    // Stream a number till white space
    // is encountered
    while (aStream >> n) {
        // Print the number
        cout << n << endl;
    }

    /**
     * In that example, notice that the 3 was not printed! The expression:
     * my_stream >> n >> c 
     * tried to stream an int followed by a char. Since there was no char after the 3, 
     * the stream failed and the while loop exited.
     */
    cout << "2) String and numeric" << endl;
    string b("1,2,3");
    istringstream my_stream(b);
    char c;
    int num;
    while (my_stream >> num >> c)
    {
        cout << "That stream was successful: " << num << " " << c << endl;
    }
    cout << endl;

    cout << "3) Print all" << endl;
    // Input string
    string numbers("1 2 3");
    // Object class of istringstream
    istringstream allStream(numbers);

    // Variable to store number n
    int numVar;
    // Testing to see if the stream was
    // successful and printing results.

    while (allStream >> numVar) {
        cout << "That stream was successful: " << numVar << endl;
    }
    cout << "That stream was NOT successful!" << endl;

    return 0;
}
