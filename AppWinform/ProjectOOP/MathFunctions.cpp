#include "MathFunctions.h"

float cal_cos(float x) {
    return cos(x);
}

float cal_sin(float x) {
    return sin(x);
}

float cal_tan(float x) {
    return tan(x);
}

float cal_acos(float x) {
    return acos(x);
}

float cal_asin(float x) {
    return asin(x);
}

float cal_atan(float x) {
    return atan(x);
}

float cal_cosh(float x) {
    return cosh(x);
}

float cal_sinh(float x) {
    return sinh(x);
}

float cal_tanh(float x) {
    return tanh(x);
}

float cal_acosh(float x) {
    return acosh(x);
}

float cal_asinh(float x) {
    return asinh(x);
}

float cal_atanh(float x) {
    return atanh(x);
}

float cal_exp(float x) {
    return exp(x);
}

float cal_abs(float x) {
    return abs(x);
}

float cal_log(float x) {
    return log(x);
}

float cal_log10(float x) {
    return log10(x);
}

float cal_sqrt(float x) {
    return sqrt(x);
}

float cal_pow(float x, float y) {
    return pow(x, y);
}

float cal_cbrt(float x) {
    return cbrt(x);
}

float cal_factorial(float n) {
    if (n >= 0) {
        std::vector<float> result(n + 1, 0);
        result[0] = 1;
        for (int i = 1; i <= n; ++i)
        {
            result[i] = i * result[i - 1];
        }
        return result[n];
    }
    return -1;
}