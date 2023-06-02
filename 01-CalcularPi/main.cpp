#include<iostream>
#include<cmath> /*biblioteca para pow*/
#include<iomanip>
using namespace std;

int main() {
    double pi = 0;

    for (int k = 0; ; k++) {
        double termino = 4 * pow(-1, k) / (2 * k + 1); /*calculo de serie de leibniz*/
        pi += termino;

        if (abs(pi - 3.1415926) < 0.000001)  {
            break;
        } /*cuando pi llegue a 6 decimales, dejar re iterar*/
    }

    cout << setprecision(7) << pi << endl;

    return 0;
}
