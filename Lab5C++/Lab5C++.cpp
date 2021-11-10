
#include <iostream>
#include <string>

using namespace std;
int main()
{
    int a, b, c, d, i, k;
    for (i = 10; i < 100; i++)
    {
        a = i / 10;
        b = i % 10;
        for (k = 0; k < 100; k++)
        {
            c = k / 10;
            d = k % 10;
            bool check = true;
            check = a != b && a != c && a != d && b != c && b != d && c != d;
            int num = (i * 100 + k);
                if (check) cout << num << endl;
        }
    }
}