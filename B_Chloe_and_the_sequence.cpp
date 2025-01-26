#include <cmath>
#include <iostream>
#include <unordered_map>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::unordered_map<int, int> m = {{1, 1}, {2, 2}, {3, 1}};
    long long n, k, t; std::cin >> n >> k;

    while (n && m.find(k) == m.end()) {
        t = (long long)pow(2, n);
        if (k == t / 2) {
            m[k] = n;
            break;
        }
        k = std::min(k, t - k);
        n--;
    }

    std::cout << m[k] << std::endl;
    return 0;
}