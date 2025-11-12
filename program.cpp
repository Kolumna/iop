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

    if (x < 0)
    {
        std::cout << "nie ma być wypisywana żadna wartość liczbowa" << std::endl;
        return 0;
    }
    std::cout << x << std::endl;
    std::cout << fibonaci(x) << std::endl;

    return 0;
}