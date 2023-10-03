#include <math.h>
#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    double R;
    const double pi = 3.14;
    cout << "¬ведите радиус круга: ";
    cin >> R;
    double l = 2 * pi * R;
    double S = pi * R * R;
    cout << "L = " << l << "; S = " << S << endl;


    return 0;
}
