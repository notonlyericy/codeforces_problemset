#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int a1, b1, a2, b2, a3, b3; std::cin >> a1 >> b1 >> a2 >> b2 >> a3 >> b3;
    std::cout << "3\n";
    std::cout << a1 + a2 - a3 << " " << b1 + b2 - b3 << "\n";
    std::cout << a1 + a3 - a2 << " " << b1 + b3 - b2 << "\n";
    std::cout << a2 + a3 - a1 << " " << b2 + b3 - b1 << "\n";
    return 0;
}