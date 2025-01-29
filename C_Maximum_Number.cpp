#include <iostream>

int main()
{

    int n; std::cin >> n;
    if (n % 2 == 1) std::cout << 7, n -= 3;
    while (n) {
        std::cout << 1;
        n -= 2;
    }

    return 0;
}
