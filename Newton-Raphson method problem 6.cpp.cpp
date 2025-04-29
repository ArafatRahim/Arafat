#include <iostream>
#include <cmath>

using namespace std;

double f(double x) {
    return x * x * x - 6 * x + 4;
}

double df(double x) {
    return 3 * x * x - 6;
}

void newtonRaphson(double x0, double tol, int maxIter) {
    double x1;
    int iter = 0;
    double error;

    do {
        x1 = x0 - f(x0) / df(x0);
        error = f(abs(x1 - x0));

        iter++;

        if (error < tol) {
            cout << x1 << " Iteration " << iter << endl;
            return;
        }

        x0 = x1;

    } while (iter < maxIter);

    cout << x1 << " Iteration " << iter << endl;
}

int main() {
    double x0 = 1.0;
    double tol = 0.001;
    int maxIter = 100;

    newtonRaphson(x0, tol, maxIter);

    return 0;
}

