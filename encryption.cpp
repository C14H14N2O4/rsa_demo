#include <iostream>
#include <fstream>
#include <sstream>
#include "rsa.hpp"

using namespace std;

// we'll have to figure out a way to generate large primes randomly
// To encrypt text: 
// convert ASCII str to an array of bytes -> convert byte array into large integer

// file handling in C++:
// Create a stream object. Connect it to a file on disk. Read the file's contents into the stream object. Close the file.

int main() {
    ifstream f("test.txt");
    string str;
    if (f) {
        ostringstream ss;
        ss << f.rdbuf();
        str = ss.str();
    }
    // char const *c = str.c_str();
    // cout << c << "\n";
    // for (int i = 0; (i < str.length() && str[i] != '\0'); i++) {
    //     cout<< str[i] + 1 << " ";
    // }
    


    // for (int i = *c; i < *c+str.length(); i++) {
    //     cout << *(c+i) << "\n";
    // }

    double num1;
    double num2;
    cout << "Please enter two prime numbers: \n";
    cin >> num1;
    cin >> num2;
    rsa(num1, num2, str);
    return 0;


}

// Many thanks to tutorials point:
// https://www.tutorialspoint.com/cplusplus-program-to-implement-the-rsa-algorithm