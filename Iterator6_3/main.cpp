#include <iostream>
#include <list>
#include <set>
#include <unordered_set>

int main()
{
	{
		std::list<char> coll;

		for (char c = 'a'; c <= 'z'; ++c) {
			coll.push_back(c);
		}

		std::list<char>::const_iterator pos;		// 这里代表只读模式
		for (pos = coll.begin(); pos != coll.end(); ++pos) {
			std::cout << *pos << " ";
		}
		std::cout << std::endl;

		for (auto pos = coll.cbegin(); pos != coll.cend(); ++pos) {
			std::cout << *pos << " ";
		}
		std::cout << std::endl;
	}

	{
		std::set<int, std::greater<int>> coll;		// 降序
		coll.insert({ 3,1,5,4,1,6,2 });

		for (auto pos = coll.cbegin(); pos != coll.cend(); ++pos) {
			std::cout << *pos << " ";
		}
		std::cout << std::endl;
	}

	{
		std::unordered_set<int> coll;		// 降序
		coll.insert({ 1, 3,1,5,4,1,6,2,45,449,1,5,83 });

		for (auto pos = coll.cbegin(); pos != coll.cend(); ++pos) {
			std::cout << *pos << " ";
		}
		std::cout << std::endl;

		coll.insert(20);
		for (auto pos = coll.cbegin(); pos != coll.cend(); ++pos) {
			std::cout << *pos << " ";
		}
	}
}