#include <iostream>
#include <math.h>
using namespace std;

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

void rsa(double prime1, double prime2) {
    double n = prime1*prime2;
    double phi = (prime1-1)*(prime2-1);
    double e = 2;
    while(e<phi) {
        if(gcd(e, phi) ==1) {
            break;
        } else {
            e++;
        }
    }
    double d1 = 1/e;
    double d = fmod(d1, phi);
    double message = 9;
    double c = pow(message, e);
    double m = pow(c,d);
    c=fmod(c,n);
    m=fmod(m,n);
    cout<<"Original Message = "<<message << "\n";
    cout<<" "<<"prime1 = " << prime1 << "\n";
    cout<<" "<<"prime2 = " << prime2 << "\n";
    cout<<""<<"n = pq = "<<n << "\n";
    cout<<""<<"phi = "<<phi << "\n";
    cout<<""<<"e = "<<e << "\n";
    cout<<""<<"d = "<<d << "\n";
    cout<<""<<"Encrypted message = "<<c << "\n";
    cout<<""<<"Decrypted message = "<<m << "\n";

}