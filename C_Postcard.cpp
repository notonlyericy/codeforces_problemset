    #include <cctype>
    #include <iostream>

    int main()
    {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);

        std::string s; std::cin >> s;
        int k; std::cin >> k;

        int i, rl, ls, lc, l = s.size();
        rl = ls = lc = 0;
        for (i = 0; i < l; i++) {
            if (s[i] == '?') lc++;
            else if (s[i] == '*') ls++;
            else rl++;
        }

        int minl = rl - lc - ls;
        if ((minl > k) || (rl < k && ls == 0)) {
            std::cout << "Impossible";
            return 0;
        }

        s += 'z';
        int left = k - minl;
        for (i = 1; i <= l; i++) {
            if (isalpha(s[i])) printf("%c", s[i - 1]);
            else {
                if (left > 0) {
                    if (s[i] == '?') { printf("%c", s[i - 1]); left--; }
                    else 
                        while (left--) printf("%c", s[i - 1]);
                }
                i++;
            }
        }


        return 0;
    }