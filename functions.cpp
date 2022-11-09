#include <iostream>
#include <math.h>
#include <typeinfo>
#include <vector>
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

void rsa(double prime1, double prime2, string msg) {
    string original = msg;
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
    double tempE;
    double tempD;
    vector<double> vect;
    for (int i = 0; (i < msg.length() && msg[i] != '\0'); i++) {
        // cout << msg[i] << "\n";
        // cout << typeid(msg[i]).name() << endl;
        tempE = (double)msg[i];
        tempE = pow(tempE, e);
        tempE = fmod(tempE, n);
        vect.push_back(tempE);
        // msg[i] = (char)tempE;

    }
    // for (int i =0; i<vect.size(); i++) {
    //     cout << vect[i] << " ";
    // }
    string out;
    for (int i = 0; i < vect.size(); i++) {
        cout << "current double " << vect[i] << endl;
        // tempD = pow(vect[i], d);
        // cout << "pow double " << tempD << endl;
        tempD = fmod(tempD, n);
        cout << "fmod" << tempD << endl;
        out[i] = (char)tempD;
    }

    double message = 9;
    double c = pow(message, e);
    double m = pow(c,d);
    c=fmod(c,n);
    m=fmod(m,n);
    cout<<"Original Message = "<<original << "\n";
    cout<<" "<<"prime1 = " << prime1 << "\n";
    cout<<" "<<"prime2 = " << prime2 << "\n";
    cout<<""<<"n = pq = "<<n << "\n";
    cout<<""<<"phi = "<<phi << "\n";
    cout<<""<<"e = "<<e << "\n";
    cout<<""<<"d = "<<d << "\n";
    cout<<""<<"Encrypted message = "<<msg << "\n";
    cout<<""<<"Decrypted message = "<< out << "\n";

}