#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string s; std::cin >> s;
    bool isSmallest = false;
    int i;
    for (i = 0; i < s.size() && s[i] == 'a'; i++);
    if (i == s.size()) s[i - 1] = 'z';
    for (; i < s.size() && s[i] != 'a'; i++) s[i] = s[i] - 1;

    std::cout << s << "\n"; 

    return 0;
}