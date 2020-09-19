#include <iostream>
#include <forward_list>


int main()
{
	std::forward_list<int> coll = { 2, 3, 4, 5, 6 };

	// forward_list的resize效率特别差
	coll.resize(9);
	coll.resize(10, 50);

	for (const auto& e : coll) {
		std::cout << e << " ";
	}







}