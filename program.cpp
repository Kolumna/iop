#include <iostream>

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

    return 0;
}