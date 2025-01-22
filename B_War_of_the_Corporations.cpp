#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::string g, p; std::cin >> g >> p;
    size_t i, lp, len = p.size();

    lp = g.find(p, 0);
    if (lp == std::string::npos) {
        std::cout << "0\n";
        return 0;
    }

    int ans = 1;
    while ((i = g.find(p, lp + len)) != std::string::npos) {
        ans++;
        lp = i;
    }
    std::cout << ans << "\n";
    return 0;
}