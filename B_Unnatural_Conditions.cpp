#include <iostream>
#include <sstream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n, m; std::cin >> n >> m;
    int i, t = 282;
    std::stringstream a, b;
    for (i = 0; i < t; i++) a << "4";
    for (i = 0; i < t; i++) b << "5";
    a << "1", b << "9";

    std::cout << a.str() << "\n" << b.str(); 

    return 0;
}
