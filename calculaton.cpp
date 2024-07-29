#include "calculaton.h"

#include <stdexcept>

double Calculaton::add(double a, double b) {
    return a + b;
}

double Calculaton::subtract(double a, double b) {
    return a - b;
}

double Calculaton::multiply(double a, double b) {
    return a * b;
}

double Calculaton::divide(double a, double b) {
    if (b == 0) {
        throw std::invalid_argument("Division by zero is not allowed.");
    }
    return a / b;
}
