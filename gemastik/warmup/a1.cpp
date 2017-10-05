#include <iostream>
#include <map>
using namespace std;

int main() {
    short t;
    cin >> t;

    while (t--)
    {
        short n;
        cin >> n;

        bool b = false;
        int sum = 0, y = 0;
        map <string, int> p;
        while (n--)
        {
            string s;
            cin >> s;

            int x;
            cin >> x;

            if (s != "selfie") y++;

            while (x--)
            {
                cin >> s;
                p[s] = 1;
            }
        }

        for (auto v : p) sum += v.second;

        sum += y;

        printf("%d\n", sum);
    }
    return 0;
}