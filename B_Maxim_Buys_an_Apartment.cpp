#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n, k; std::cin >> n >> k;
    std::cout << 1 << " ";
    if (k <= n / 3) std::cout << k * 2;
    else {
        std::cout << n / 3 * 2 + n % 3 - k + n / 3;
    }

    return 0;
}