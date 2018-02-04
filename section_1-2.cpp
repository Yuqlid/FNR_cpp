#include <stdio.h>
#include <cmath>
#include <vector>

class Test
{
public:
  Test() {
    printf("Hello, World! C++\n");

    double a = pow(2,2);
    double b = exp(1);

    printf("a = %f, b = %f\r\n",a,b);

    std::vector<double> M = {0,0};
    M[0] = 1.0;
    M[1] = 2.0;
    M.push_back(3);

    printf("M = {%f,%f,%f}\r\n",M[0],M[1],M[2]);

  }
};

int main (int argc, char *args[])
{
  Test test;
  return 0;
} 