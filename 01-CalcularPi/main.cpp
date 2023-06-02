#include <iostream>
#include <cmath> /*biblioteca para potencia*/
using namespace std;

int main() {
    double pi = 0;

    for (int k = 0; ; k++) {
        double termino = 4 * pow(-1, k) / (2 * k + 1); /*calculo de serie de leibniz*/
        pi += termino;

        if (abs(pi - 3.141592) < 0.000001)  {
            break;
        } /*cuando pi llegue a 6 decimales, dejar de iterar*/
    }

    cout << pi << endl;

    return 0;
}
