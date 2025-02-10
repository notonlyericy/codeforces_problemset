#include <algorithm>
#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string s1, s2, s3, s4; std::cin >> s1 >> s2 >> s3 >> s4;
    std::swap(s2[0], s2[1]);
    std::swap(s4[0], s4[1]);

    s1 += s2, s3 += s4;
    s1 += s1;
    s1.erase(std::remove(s1.begin(), s1.end(), 'X'), s1.end());
    s3.erase(std::remove(s3.begin(), s3.end(), 'X'), s3.end());

    std::cout << (s1.find(s3) != std::string::npos ? "YES\n" : "NO\n");

    return 0;
}