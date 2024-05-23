#include "calculator.h"
#include <math.h>  // Pour la fonction pow()

double _add(double a, double b) {
    return a + b;
}

double _sub(double a, double b) {
    return a - b;
}

double _mul(double a, double b) {
    return a * b;
}

double _div(double a, double b) {
    return a / b;
}

double _carre(double a) {
    return pow(a, 2);  // Calcul du carré de a
}
