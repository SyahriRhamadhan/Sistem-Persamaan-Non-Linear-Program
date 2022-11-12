#include <iostream>
#include <cmath>
using namespace std;

double f(double x){
    return -5*x*x + 4*x;
}

void bisection(double a , double b){
    double c ;
    double fp ;
    double fa;
    double tol = 0.0005 ;
    int iterasi ;
    cout<<"<===========KELOMPOK 3===========>"<<endl;
    cout<<"1. Syahri Rhamadhan - 2001020038"<<endl;
    cout<<"2. Samuel Miskan H  - 2001020037 "<<endl;
    cout<<"3. Risna Aurillia   - 2001020045 "<<endl;
    cout<<"4. Rama Setiawan    - 2001020030 "<<endl;
    cout<<"5. Martin Manulang  - 2001020047 "<<endl;
    cout<<"<============Bisection===========>"<<endl<<endl;
    cout<<"Soal F(x)= 4x-5x^2, galat 0.0005, range (2,2.5)"<<endl<<endl;
    cout << "Input berapa banyak iterasi: ";
    cin >> iterasi ;
    cout << "NO	"
		 << "a	 	"
         << "b		"
         << "X		"
         << "F(x)	\n";
    cout << "--------------------------------------------------------------------------------------------------------------------\n";
    for(int i = 1 ; i<=iterasi; i++){
        cout <<i<<"|	"<< a <<"		"<< b ;
        c = (a + b) / 2 ;
        cout <<"		"<<c ;
        fp = f(c);
        cout << "		" << fp << "\n" ;
        if (fp == 0 || ((b - a) / 2 )< tol){
            cout << "Root break at: " << c << "\n" ;
            break;
        }
        fa = f(a);
        if(fa*fp > 0){
            a = c ;
            fa = fp;
        }else{
            b = c ;
        }

    }
}

int main(){
    bisection(2 , 2.5);
}

