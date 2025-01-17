#include <bits/stdc++.h>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n; std::cin >> n;
    int i = 0;
    while (i < n) {
        std::cout << ++i << " ";
        if (i < n) std::cout << n-- << " ";
    }
    std::cout << "\n";

    return 0;
}