#include <cassert>
#include <iostream>

int aliquot_sum(const int x)
{
	int sum{};
	assert(x >= 0);

	if (x <= 1)
	{
		return 0;
	}

	for (int i = 1; i <= (x / 2); ++i)
	{
		if (x % i == 0)
		{
			sum += i;
		}
	}
	return sum;
}

void test()
{
	assert(aliquot_sum(10) == 8);

	assert(aliquot_sum(15) == 9);

	assert(aliquot_sum(1) == 0);

	assert(aliquot_sum(97) == 1);

	std::cout << "Success" << '\n';
}

int main()
{
	test();
	return 0;
}
