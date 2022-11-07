#include <iostream>
#include <math.h>

using namespace std;


//use euclids algorithm
int gcd(int a, int b) {
    if (a == 0) {
        return b;
    } else if (b == 0) {
        return a;
    } else {
        int r = a%b;
        return gcd(b, r);
    }
}



int main() {
    int num1;
    int num2;
    cout << "Please enter two numbers: \n";
    cin >> num1;
    cin >> num2;
    cout << gcd(num1, num2) << "\n";
    return 1;


}
