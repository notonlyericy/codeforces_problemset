#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n, a, b; std::cin >> n >> a >> b;
    std::string s; std::cin >> s;
    std::cout << (s[a - 1] == s[b - 1] ? "0\n" : "1\n");

    return 0;
}