/*

 * Author: Mukhammadkhon Asrorov 

 * Date: 23/01/2024

 * Name: HW -11

 */



#include <iostream>

#include <algorithm>





int gcd(int a, int b) {

    while (b) {

        a %= b;

        std::swap(a, b);

    }

    return a;

}



int modular_inverse(int a, int m) {

    int m0 = m;

    int y = 0, x = 1;

    while (a > 1) {

        int q = a / m;

        int t = m;

        m = a % m;

        a = t;

        t = x;

        x = y - q * x;

        y = t;

    }

    if (x < 0) x += m0;

    return x;

}



int main() {

    int p = 19;

    int q = 43;

    int n = p * q;

    int phi_n = (p - 1) * (q - 1);





    int e = 2;

    while (gcd(e, phi_n) != 1) {

        e++;

    }





    int d = modular_inverse(e, phi_n);



    std::cout << "Public exponent (e): " << e << std::endl;

    std::cout << "Private exponent (d): " << d << std::endl;

    return 0;

}



 
