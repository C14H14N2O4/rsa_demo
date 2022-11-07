#include <iostream>
#include <fstream>
#include <sstream>
#include "rsa.hpp"

using namespace std;


//use euclids algorithm
int gcd(int a, int b);

// we'll have to figure out a way to generate large primes randomly
// To encrypt text: 
// convert ASCII str to an array of bytes -> convert byte array into large integer

// file handling in C++:
// Create a stream object. Connect it to a file on disk. Read the file's contents into the stream object. Close the file.


void rsa(double prime1, double prime2);

int main() {
    ifstream f("sample.txt");
    string str;
    if (f) {
        ostringstream ss;
        ss << f.rdbuf();
        str = ss.str();
    }
    cout<<str << "\n";
    // fstream text;
    // text.open("sample.txt", ios::in);
    // if (!text) {
    //     cout << "error in file read\n";
    // } else {
    //     cout << "file read successfully\n";
    //     string ch;
    //     while (1) {
    //         text >> ch;
    //         if (text.eof()) {
    //             break;
    //         }
    //         cout << ch;
    //     }
    // }
    // text.close();
    double num1;
    double num2;
    cout << "Please enter two prime numbers: \n";
    cin >> num1;
    cin >> num2;
    rsa(num1, num2);
    return 0;


}

// Many thanks to tutorials point:
// https://www.tutorialspoint.com/cplusplus-program-to-implement-the-rsa-algorithm