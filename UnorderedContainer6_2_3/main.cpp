#include <iostream>
#include <unordered_set>			// value排序
#include <unordered_map>			// key排序
#include <string>


int main()
{
	{
		// 无序可重复，重复的一定在一起
		std::unordered_multiset<std::string> cities{ "Braunschweig", "Hanover", "Frankfurt", "New York", "Chicago", "Toronto", "Frankfurt" };

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
		// 无序可重复，重复的一定在一起
		std::unordered_multimap<int, std::string> coll;
		coll = { {5, "tagged"}, {2, "a"}, {1, "this"}, {4, "of"}, {6, "strings"}, {1, "is"}, {3, "mutimap"} };

		for (const auto& e : coll) {
			std::cout << e.second << " ";
		}
		std::cout << std::endl;

		// 索引非整数
		std::unordered_map<std::string, float> coll2;
		coll2["VAT1"] = 0.16;
		coll2["VAT2"] = 0.07;
		coll2["pi"] = 3.1415;

		coll2.at("VAT1") += 0.03;

		std::cout << "VAT difference: " << coll2["VAT1"] - coll2["VAT2"] << std::endl;
	}

}