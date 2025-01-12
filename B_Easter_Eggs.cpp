#include <bits/stdc++.h>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr); 

    std::string s = "ROYGBIV";
    int n; std::cin >> n;
    for (int i = 0; i < n - 3; i++) std::cout << s[i % 4];
    std::cout << "BIV\n";
    return 0;
}