#include <iostream>
#include <algorithm>
#include <string>

int main()
{
    std::string playersPositions;

    std::cin >> playersPositions;

    if (std::search_n(playersPositions.begin(), playersPositions.end(), 7, '0') != playersPositions.end() ||
        std::search_n(playersPositions.begin(), playersPositions.end(), 7, '1') != playersPositions.end())
	{
		std::cout << "YES" << std::endl;
	}
	else
	{
		std::cout << "NO" << std::endl;
	}
}
