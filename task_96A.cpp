#include <iostream>
#include <algorithm>
#include <string>

int main(){
	std::string plrsPos;
	std::cin >> plrsPos;

	if(std::search_n(plrsPos.begin(), plrsPos.end(), 7, '0') != plrsPos.end() 
	|| std::search_n(plrsPos.begin(), plrsPos.end(), 7, '1') != plrsPos.end())
		std::cout << "YES" << std::endl;
	else
		std::cout << "NO" << std::endl;

	return 0;
}
