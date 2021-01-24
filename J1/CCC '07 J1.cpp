#include <iostream>
#include <algorithm>
#include <vector>
int main()
{
    int weight1;
    int weight2;
    int weight3;
    
    

    std::cin >> weight1;
    std::cin >> weight2;
    std::cin >> weight3;

    std::vector<int> values = {weight1, weight2, weight3};
    std::sort(values.begin(), values.end());
       
    std::cout << values[1];
}
