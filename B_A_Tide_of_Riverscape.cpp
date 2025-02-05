#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n, p; std::cin >> n >> p;
    std::string s; std::cin >> s;

    if (n == p) {
        std::cout << "No\n";
        return 0;
    }

    bool ok = false;
    int i;
    for (i = 0; i < n - p; i++) {
        if (s[i] != '.' && s[i] == s[i + p]) continue;
        ok = true;
        if (s[i] == '.' && s[i + p] != '.') {
            s[i] = '0' + std::abs(s[i + p] - '0' - 1);
            break;
        } else if (s[i] != '.' && s[i + p] == '.') {
            s[i + p] = '0' + std::abs(s[i] - '0' - 1);
            break;
        } else if (s[i] != s[i + p]) {
            break;
        } else {
            s[i] = '0';
            s[i + p] = '1';
            break;
        }
    }

    if (!ok) {
        std::cout << "No\n";
        return 0;
    }

    for (; i < n; i++) {
        if (s[i] == '.') s[i] = '0';
    }

    std::cout << s;
    return 0;
}