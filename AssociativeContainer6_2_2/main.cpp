#include <iostream>
#include <set>			// value≈≈–Ú
#include <map>			// key≈≈–Ú
#include <string>


int main()
{
	{
		std::multiset<std::string> cities{ "Braunschweig", "Hanover", "Frankfurt", "New York", "Chicago", "Toronto", "Frankfurt" };

		for (const auto& e : cities) {
			std::cout << e << " ";
		}
		std::cout << std::endl;

		cities.insert({ "London", "Munich", "Hanover", "Braunschweig" });

		for (const auto& e : cities) {
			std::cout << e << " ";
		}
		std::cout << std::endl;	
	}

	{
		std::multimap<int, std::string> coll;
		coll = { {5, "tagged"}, {2, "a"}, {1, "this"}, {4, "of"}, {6, "strings"}, {1, "is"}, {3, "mutimap"} };

		for (const auto& e : coll) {
			std::cout << e.second << " ";
		}
		std::cout << std::endl;
	}
}