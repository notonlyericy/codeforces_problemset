#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n; std::cin >> n;
    int a, c1 = 0, c2 = 0;
    while (n--) {
        std::cin >> a;
        a == 1 ? c1++ : c2++;
    }

    if (c2 == 0) {
        while (c1--) std::cout << "1 ";
    } else if (c2 == 1) {
        std::cout << "2 ";
        while (c1--) std::cout << "1 ";
    } else {
        std::cout << "2 ";
        if (c1--) std::cout << "1 ";
        while (--c2) std::cout << "2 ";
        while (c1-- > 0) std::cout << "1 ";
    }

    return 0;
}