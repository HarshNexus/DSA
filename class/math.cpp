#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double f(double x) {
    return pow(x, 3) - x - 5;
}

double df(double x) {
    return 3 * pow(x, 2) - 1;
}

double newton_raphson_table(double x0, double tol = 1e-6, int max_iter = 100) {

    cout << left << setw(5)  << "Iter"
         << setw(15) << "x_n"
         << setw(15) << "f(x_n)"
         << setw(15) << "f'(x_n)"
         << setw(15) << "x_n+1" << endl;

    cout << string(65, '-') << endl;

    double x = x0;

    for (int i = 1; i <= max_iter; i++) {

        double fx = f(x);
        double dfx = df(x);

        if (dfx == 0) {
            cout << "Derivative is zero. No solution found." << endl;
            return -1;
        }

        double x_new = x - fx / dfx;

        cout << left << setw(5)  << i
             << setw(15) << fixed << setprecision(8) << x
             << setw(15) << fx
             << setw(15) << dfx
             << setw(15) << x_new << endl;

        if (fabs(x_new - x) < tol) {
            cout << "\nConverged to root: "
                 << fixed << setprecision(8)
                 << x_new << " in " << i << " iterations" << endl;
            return x_new;
        }

        x = x_new;
    }

    cout << "Exceeded maximum iterations. No solution found." << endl;
    return -1;
}

int main() {
    double x0 = 2.0;
    newton_raphson_table(x0);
    return 0;
}












// #include <iostream>
// #include <iomanip>
// #include <cmath>
// using namespace std;
// double f(double x) {
//     return x*x*x - x - 5;
// }

// double df(double x) {
//     return 3*x*x - 1;
// }

// double newtonRaphson(double x0, double tol = 1e-6, int max_iter = 100) {
//     cout << left << setw(5) << "Iter"
//          << setw(15) << "x_n"
//          << setw(15) << "f(x_n)"
//          << setw(15) << "df(x_n)"
//          << setw(15) << "x_(n+1)" << endl;

//     cout << string(65, '-') << endl;

//     double x = x0;

//     for (int i = 1; i <= max_iter; i++) {
//         double fx = f(x);
//         double dfx = df(x);

//         if (dfx == 0) {
//             cout << "Derivative is zero. No solution found." << endl;
//             return -1;
//         }

//         double x_new = x - fx / dfx;

//         cout << left << setw(5) << i
//              << setw(15) << fixed << setprecision(8) << x
//              << setw(15) << fx
//              << setw(15) << dfx
//              << setw(15) << x_new << endl;

//         if (abs(x_new - x) < tol) {
//             cout << "\nConverged to root: " << fixed << setprecision(8)
//                  << x_new << " in " << i << " iterations" << endl;
//             return x_new;
//         }

//         x = x_new;
//     }

//     cout << "Exceeded maximum iterations. No solution found." << endl;
//     return -1;
// }

// int main() {
//     double x0 = 2.0;
//     newtonRaphson(x0);
//     return 0;
// }



