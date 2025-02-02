#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int k; std::cin >> k;
    long long ans = 0;

    if (k > 36) {
        std::cout << -1;
        return 0;
    }

    while (k >= 2) {
        ans = ans * 10 + 8;
        k -= 2;
    }

    if (k == 1) ans = ans * 10 + 4;
    std::cout << ans;

    return 0;
}