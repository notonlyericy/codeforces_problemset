#include <cmath>
#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int a1, b1; std::cin >> a1 >> b1;
    int a2, b2; std::cin >> a2 >> b2;
    int a3, b3; std::cin >> a3 >> b3;
    
    if (std::max((a2 + a3), std::max(b2, b3)) <= std::max(a1, b1) &&
        std::min((a2 + a3), std::max(b2, b3)) <= std::min(a1, b1)) std::cout << "YES\n";
    else if (std::max((a2 + b3), std::max(b2, a3)) <= std::max(a1, b1) &&
             std::min((a2 + b3), std::max(b2, b3)) <= std::min(a1, b1)) std::cout << "YES\n";
    else if (std::max((b2 + a3), std::max(a2, b3)) <= std::max(a1, b1) &&
             std::min((b2 + a3), std::max(a2, b3)) <= std::min(a1, b1)) std::cout << "YES\n";
    else if (std::max((b2 + b3), std::max(a2, a3)) <= std::max(a2, a3) &&
             std::min((b2 + b3), std::max(a2, a3)) <= std::min(a2, a3)) std::cout << "YES\n";
    else std::cout << "NO\n";

    return 0;
}


