#include <algorithm>
#include <iostream>

int gcd(int a, int b) 
{
    return b == 0 ? a : gcd(b, a % b);
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int i, n, k; std::cin >> n >> k;

    // for (i = 1; i <= 100000; i++) {
    //     if (gcd(i, i + 1) > 1) std::cout << i << std::endl;
    // }

    if (n == k) std::cout << "-1\n";
    else {
        for (i = 1; i <= n - k; i++) std::cout << i % (n - k) + 1 << " ";
        for (; i <= n; i++) std::cout << i << " ";
    }

    return 0;
}