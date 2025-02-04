#include <iostream>
#include <vector>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int i, n; std::cin >> n;
    std::vector<char> s(n + 2, '0');

    for (i = 1; i <= n; i++) std::cin >> s[i];

    i = 0;
    while (i < n) {
        if (s[i] != '0') break;
        if (i + 1 <= n && s[i + 1] == '1') i += 2;
        else if (i + 2 <= n && s[i + 2] == '1') i += 3;
        else break;
    }

    std::cout << (i > n || (i == n && s[i] == '0') ? "Yes\n" : "No\n");

    return 0;
}