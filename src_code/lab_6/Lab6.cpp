#include <iostream>
#include <cmath>
#include <iomanip>

double y(double x) {
    return 0.5 * log((1 + x) / (1 - x));
}

double term(double x, int k) {
    return pow(x, 2 * k + 1) / (2 * k + 1);
}

double sum1(double x, int n) {
    double z = 0.0;
    for (int k = 0; k <= n; k++) {
        z += term(x, k);
    }
    return z;
}

double sum2(double x, double eps) {
    double z = 0.0;
    double ak = 1.0;
    int k = 0;
    
    while (fabs(ak) > eps) {
        ak = term(x, k);
        z += ak;
        k++;
    }
    
    return z;
}

int main(void) {
    double x1 = 0.0, x2 = 0.999;
    int n;
    double delta;

    std::cout << "Enter the number of terms n: ";
    std::cin >> n;
    std::cout << "Enter the precision delta: ";
    std::cin >> delta;

    std::cout << std::fixed << std::setprecision(6);
    std::cout << "x\t\tSn\t\tSe\t\ty\n";
    std::cout << "-------------------------------------------------------\n";
    
    for (int j = 0; j <= 10; j++) {
        double x = x1 + j * (x2 - x1) / 10.0;

        double sn = sum1(x, n);        
        double se = sum2(x, delta);     
        double y_val = y(x);           
        
        std::cout << std::fixed << std::setprecision(1);
        std::cout << x << "\t" << std::setprecision(6) << sn << "\t" << se << "\t" << (y_val) << "\n";
    }

    return 0;
}

