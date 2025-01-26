#include <iostream>
#include <vector>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int i, n, sum = 0; std::cin >> n;
    std::vector<int> a(n, 0);
    for (i = 0; i < n; i++) {
        std::cin >> a[i];
        sum += a[i];
    }
    if (sum) {
        std::cout << "YES\n1\n1 " << n << "\n";
        return 0;
    }

    for (i = 0; i < n && a[i] == 0; i++);
    if (i == n) {
        std::cout << "NO\n";
        return 0;
    }

    printf("YES\n2\n1 %d\n%d %d\n", i + 1, i + 2, n);
    return 0;
}