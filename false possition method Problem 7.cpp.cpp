#include <bits/stdc++.h>

using namespace std;

double f(double x) {
    return x * x * x - x + 2;
}

void falsePosition(double x1, double x2, double tol, int maxIter) {
    if (f(x1) * f(x2) >= 0) {
        cout << "Invalid interval" << endl;
        return;
    }

    double x0 = x1, xprev;
    int iter = 0;

    do {
        xprev = x0;
        x0 = x1 - (f(x1) * (x2 - x1)) / (f(x2) - f(x1));

        if (f(x0) * f(x1) < 0) {
            x2 = x0;
        } else {
            x1 = x0;
        }

        iter++;

        if (iter > 1 && abs(x0 - xprev) < tol) {
            cout << x0 << " Iteration " << iter << endl;
            return;
        }

    } while (iter < maxIter);

    cout << x0 << " Iteration " << iter << endl;
}

int main() {
    double x1 = -2, x2 = 0;
    double tol = 0.001;
    int maxIter = 100;

    falsePosition(x1, x2, tol, maxIter);

    return 0;
}
