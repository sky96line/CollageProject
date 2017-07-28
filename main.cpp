#include <iostream>

using namespace std;

double mySqrt(double x, double epsilon) 
{
    double left = 0, right = x, mid;
    while (right - left > epsilon) 
    {
        mid = (left + right) / 2;
        if (mid * mid > x) 
        {
            right = mid;
        } else {
            left = mid;
        }
    }
    return left;
}


int main()
{
    cout<<mySqrt(26,0.0001);
    return 0;
}