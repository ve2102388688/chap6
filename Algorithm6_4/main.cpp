#include <algorithm>
#include <iostream>
#include <list>
#include <vector>


int main()
{
	{
		std::vector<int> coll = { 2,5,4,1,6,3 };

		// ��ȡ��Сֵ�����ֵ
		auto minpos = std::min_element(coll.cbegin(), coll.cend());
		std::cout << "min: " << *minpos << std::endl;
		auto maxpos = std::max_element(coll.cbegin(), coll.cend());
		std::cout << "min: " << *maxpos << std::endl;

		// ����
		std::sort(coll.begin(), coll.end());
		for (const auto& e : coll)
			std::cout << e << " ";
		std::cout << std::endl;

		// ��3 ����Ҫ�ǳ����ģ���Ȼ����ķ�ת�ᱨ�� 
		auto pos3 = std::find(coll.begin(), coll.end(), 3);
		std::cout << "pos3: " << *pos3 << std::endl;

		// ��3�������
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

		// Ѱ��3,��Ȼlist��û��3��
		auto pos3 = std::find(coll.begin(), coll.end(), 3);
		std::reverse(pos3, coll.end());

		auto pos25 = std::find(coll.begin(), coll.end(), 25);
		auto pos35 = std::find(coll.begin(), coll.end(), 35);

		// ���һ��Ԫ�����ޣ��ֶ�����һ��
		std::cout << "max: " << *std::max_element(pos25, pos35) << std::endl;
		std::cout << "max: " << *std::max_element(pos25, ++pos35) << std::endl;

		// ˭���ҵ�˭��ǰ
		auto pos = std::find_if(coll.begin(), coll.end(), [](int i) { return  i == 25 || i == 35; });
	}

	{
		// �������䴦��
		std::list<int> coll = { 1,2,5,4,1,6,3 };
		std::vector<int> coll2;

		// ERROR Ŀ���ļ�
		std::copy(coll.cbegin(), coll.cend(), coll2.begin());
	}
}