
#include <bits/stdc++.h>
using namespace std;
float func(float x);
int main()
{
    float X, d = 0.0005, k, j;
    float x = 2;
    float b = 2.5;
    int iterasi;
    cout << "<===========KELOMPOK 3===========>" << endl;
    cout << "1. Syahri Rhamadhan - 2001020038" << endl;
    cout << "2. Samuel Miskan H  - 2001020037 " << endl;
    cout << "3. Risna Aurillia   - 2001020045 " << endl;
    cout << "4. Rama Setiawan    - 2001020030 " << endl;
    cout << "5. Martin Manulang  - 2001020047 " << endl;
    cout << "<===========Regulasi Falsi===========>" << endl
         << endl;
    cout << "Input berapa banyak iterasi: ";
    cin >> iterasi;
    cout << "Soal F(x)= 4x-5x^2, galat 0.0005, range (2,2.5)" << endl
         << endl;
    cout << "NO	"
         << "a	 	"
         << "b		"
         << "X		"
         << "F(x)		"
         << "F(a)		"
         << "f(b) \n";
    cout << "--------------------------------------------------------------------------------------------------------------------\n";
    for (int i = 1; i <= iterasi; i++)
    {
        i <= iterasi;
        X = ((x * func(b)) - (b * func(x))) / (func(b) - func(x));
        std::cout << std::fixed;
        std::cout << std::setprecision(7);
        std::cout << i << "|	" << x << "	" << b << "	" << X << "	" << func(X) << "	" << func(x) << "	" << func(b) << endl;
        if (func(X) > 0)
        {
            b = X;
        }
        else
        {
            x = X;
        }
        k = ((x * func(b)) - (b * func(x))) / (func(b) - func(x));
        if (abs(X - k) < d)
        {
            break;
        }
    }
    printf("Root break at=%.6lf", X);
}
float func(float x)
{
    return (-5 * x * x + 4 * x);
}
