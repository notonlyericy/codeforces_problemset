#include <bits/stdc++.h>

int reverse(int a)
{
    int n = 0;
    while (a) {
        n = n * 10 + a % 10;
        a /= 10;
    }
    return n;
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int a1, a2; std::cin >> a1 >> a2;
    std::cout << a1 + reverse(a2);

    return 0;
}