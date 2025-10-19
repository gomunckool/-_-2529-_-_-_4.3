#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double a, b, c;
    double xp, xk, dx;
    double F;

    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;
    cout << "Xпоч = "; cin >> xp;
    cout << "Xкін = "; cin >> xk;
    cout << "dX = "; cin >> dx;

    cout << fixed << setprecision(5);
    cout << "-----------------------------------" << endl;
    cout << "|" << setw(10) << "x" << " | " << setw(15) << "F" << " |" << endl;
    cout << "-----------------------------------" << endl;

    for (double x = xp; x <= xk; x += dx)
    {
        if (c < 0 && x != 0)
            F = -a * x - c;
        else if (c > 0 && x == 0)
            F = (x - a) / (-c);
        else
            F = (b * x) / (c - a);

        cout << "|" << setw(10) << x << " | " << setw(15) << F << " |" << endl;
    }

    cout << "-----------------------------------" << endl;
    return 0;
}