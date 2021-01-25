#include <iostream>

int main()
{
    int n = 0;
    int k = 0;
    int omega = 0;
    int r;

    std::cin >> n;
    std::cin >> k;
    r = n;
    for (int i = 0; i < k; ++i)
    {
        n = n*10;
        omega += n;
    }
    omega += r;
    std::cout << omega;
}