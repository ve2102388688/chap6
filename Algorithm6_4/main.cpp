#include <algorithm>
#include <iostream>
#include <list>
#include <vector>


int main()
{
	{
		std::vector<int> coll = { 2,5,4,1,6,3 };

		// 获取最小值，最大值
		auto minpos = std::min_element(coll.cbegin(), coll.cend());
		std::cout << "min: " << *minpos << std::endl;
		auto maxpos = std::max_element(coll.cbegin(), coll.cend());
		std::cout << "min: " << *maxpos << std::endl;

		// 排序
		std::sort(coll.begin(), coll.end());
		for (const auto& e : coll)
			std::cout << e << " ";
		std::cout << std::endl;

		// 找3 这里要非常量的，不然下面的反转会报错 
		auto pos3 = std::find(coll.begin(), coll.end(), 3);
		std::cout << "pos3: " << *pos3 << std::endl;

		// 从3到最后反序
		std::reverse(pos3, coll.end());
		for (const auto& e : coll)
			std::cout << e << " ";
		std::cout << std::endl;
	}

	{
		std::list<int> coll;

		for (size_t i = 20; i < 40; ++i) {
			coll.push_back(i);
		}

		// 寻找3,显然list是没有3的
		auto pos3 = std::find(coll.begin(), coll.end(), 3);
		std::reverse(pos3, coll.end());

		auto pos25 = std::find(coll.begin(), coll.end(), 25);
		auto pos35 = std::find(coll.begin(), coll.end(), 35);

		// 最后一个元素有无？手动找了一个
		std::cout << "max: " << *std::max_element(pos25, pos35) << std::endl;
		std::cout << "max: " << *std::max_element(pos25, ++pos35) << std::endl;

		// 谁先找到谁在前
		auto pos = std::find_if(coll.begin(), coll.end(), [](int i) { return  i == 25 || i == 35; });
	}

	{
		// 多重区间处理
		std::list<int> coll = { 1,2,5,4,1,6,3 };
		std::vector<int> coll2;

		// ERROR 目标文件
		std::copy(coll.cbegin(), coll.cend(), coll2.begin());
	}
}