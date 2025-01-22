#include <iostream>
#include <unordered_map>
#include <vector>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n; std::cin >> n;
    std::vector<std::string> msg(n, "");
    std::unordered_map<std::string, bool> m;

    for (int i = 0; i < n; i++) std::cin >> msg[i];
    while (n--) {
        if (!m[msg[n]]) std::cout << msg[n] << "\n";
        m[msg[n]] = true;
    }

    return 0;
}