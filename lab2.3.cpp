#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include "LongLong.h"

int main() {
    LongLong A, B, s;
    cout << "Enter the first numbers:" << endl; cin >> A;
    cout << "Enter the second numbers:" << endl; cin >> B;
    cout << endl;
    cout << "Result:" << endl;
    cout << "first numbers:" << endl;
    cout << A << endl;
    cout << "second numbers:" << endl;
    cout << B << endl;
    cout << "Addition = " << A + B << endl;
    cout << "Multiplying = " << A * B << endl;
    cout << "A++ :" << endl;
    cout << A++ << endl;
    cout << "A-- :" << endl;
    cout << A-- << endl;
    cout << "++A :" << endl;
    cout << ++A << endl;
    cout << "--A " << endl;
    cout << --A << endl;
    cout << "Comparing: " << endl;
    if (A.Gt(A, B)) {
        cout << A << " > " << B << ": true" << endl;
    }
    else {
        cout << A << " > " << B << ": false" << endl;
    }
 
    if (A.Lt(A, B)) {
        cout << A << " < " << B << ": true" << endl;
    }
    else {
        cout << A << " < " << B << ": false" << endl;
    }

    if (A.Ltq(A, B)) {
        cout << A << " <= " << B << ": true" << endl;
    }
    else {
        cout << A << " <= " << B << ": false" << endl;
    }
    return 0;
}