#include <iostream>

int factorial(int n, int r = 1)
{
    if (n == 0)
    {
        return r;
    }
    else
    {
        std::cout << n << " * " << r << " = " << (n * r) << std::endl;
        // Function calls itself, subtracting 1 from n until n is 0
        return factorial(n - 1, n * r);
    }
}

int main()
{
    std::cout << factorial(5) << std::endl;
}
