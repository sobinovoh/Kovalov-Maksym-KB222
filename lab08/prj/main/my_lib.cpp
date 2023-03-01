#include <cmath>
float equation(float x, float y, float z){
    float s=0;
    s = 1.0/2.0 * ((pow(y,2) + 2 * z) / sqrt(7*M_PI + x)) - sqrt(pow(exp(1), abs(x)) + sqrt(abs(y - z) / sin(z*y)));
    return  s;
}
