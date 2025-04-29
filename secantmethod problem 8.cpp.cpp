#include <iostream>
#include <cmath>
using namespace std;

// Function to define the equation x^3 - x - 1
float equation(float x)
{
    return x * x * x - x - 1;
}

// Secant Method to find the root
void secantMethod(float x1, float x2, float tolerance)
{
    float x0, xm;
    int iterations = 0;

    do
    {
        // Apply the Secant Method formula
        x0 = x2 - ((equation(x2) * (x2 - x1)) / (equation(x2) - equation(x1)));
        cout << "Iteration " << iterations + 1 << ": x = " << x0 << endl;

        // Update x1 and x2
        x1 = x2;
        x2 = x0;

        iterations++;

        // Compute xm for the tolerance check
        xm = x2 - ((equation(x2) * (x2 - x1)) / (equation(x2) - equation(x1)));
    }
    while (fabs(xm - x0) >= tolerance);  // Check if the difference is within the tolerance

    // Print the root and the number of iterations
    cout << "Root of the given equation: " << x0 << endl;
    cout << "Number of iterations: " << iterations << endl;
}

int main()
{
    float x1, x2, tolerance = 0.00015; // Initialize the values

    cout << "Enter initial values for x1 and x2: ";
    cin >> x1 >> x2;

    // Call the secant method
    secantMethod(x1, x2, tolerance);

    return 0;
}
