#include <cmath>
#include <iostream>

typedef unsigned long long ull;
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    ull b, d, s; std::cin >> b >> d >> s;
    ull cnt = 0, v = std::max(b, std::max(d, s)) - 1;

    cnt += v > b ? v - b : 0;
    cnt += v > d ? v - d : 0;
    cnt += v > s ? v - s : 0;

    std::cout << cnt << "\n";

    return 0;
}