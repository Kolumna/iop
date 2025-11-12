#include <iostream>

int fibonaci(int n)
{
    if (n <= 1)
        return n;
    return fibonaci(n - 1) + fibonaci(n - 2);
}

int main()
{
    int x;
    std::cin >> x;
    std::cout << x << std::endl;
    std::cout << fibonaci(x) << std::endl;
    return 0;
}