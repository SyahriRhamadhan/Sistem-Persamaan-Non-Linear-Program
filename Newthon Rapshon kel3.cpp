#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class method
{
    int iterasi;
    float a;

public:
    int hitung();
    float func(float x)
    {
        float z = -5 * x * x + 4 * x;
        return z;
    }
    float funcTurunan(float x)
    {
        float z = -10 * x + 4;
        return z;
    }
};
int method ::hitung()
{
    cout << "<===========KELOMPOK 3===========>" << endl;
    cout << "1. Syahri Rhamadhan - 2001020038" << endl;
    cout << "2. Samuel Miskan H  - 2001020037 " << endl;
    cout << "3. Risna Aurillia   - 2001020045 " << endl;
    cout << "4. Rama Setiawan    - 2001020030 " << endl;
    cout << "5. Martin Manulang  - 2001020047 " << endl;
    cout << "<=========Newton Raphson=========>" << endl
         << endl;
    cout << "Soal F(x)= 4x-5x^2, galat 0.0005, range (2,2.5)" << endl
         << endl;
    cout << "Masukkan nilai Xn :";
    cin >> a;
    cout << "Jumlah iterasi : ";
    cin >> iterasi;
    cout << "NO	"
         << "Xn	 	"
         << "F(X)		"
         << "F'(X)		"
         << "F(X)/F'(X)	"
         << "X	\n";
    cout << "--------------------------------------------------------------------------------------------------------------------\n";
    float root;
    for (int i = 1; i <= iterasi; i++)
    {
        root = (funcTurunan(a) * a - func(a)) / funcTurunan(a);
        std::cout << std::fixed;
        std::cout << std::setprecision(7);
        std::cout << i << "	" << a << "	" << func(a) << "	" << funcTurunan(a) << "	" << func(a) / funcTurunan(a) << "	" << root << endl;
        a = root;
    }
    printf("Root break at=%.6lf", root);
    return 0;
}
int main()
{
    method m;
    m.hitung();
    return 0;
}
