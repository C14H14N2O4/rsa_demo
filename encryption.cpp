#include <iostream>
#include <fstream>
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
    double num1;
    double num2;
    cout << "Please enter two prime numbers: \n";
    cin >> num1;
    cin >> num2;
    rsa(num1, num2);
    return 1;


}

// Many thanks to tutorials point:
// https://www.tutorialspoint.com/cplusplus-program-to-implement-the-rsa-algorithm