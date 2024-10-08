#include <cmath>
#include <iostream>
#include <vector>
#include <span>
#include <functional>

using namespace std;

template<typename Iter, typename StartValue, typename Operation>
auto accumulateData(Iter begin, Iter end, StartValue startValue, Operation op)
{
	auto accumulated{ startValue };
	for (Iter iter{ begin }; iter != end; ++iter) {
		accumulated = op(accumulated, *iter);
	}
	return accumulated;
}

// double geometricMean(span<const int> values)
double geometricMean(const vector<int> values)
{
	auto mult{ accumulateData(cbegin(values), cend(values), 1, multiplies<int>{}) };
	return pow(mult, 1.0 / values.size());
}

// Using C++14 transparent operator functor
// double geometricMeanTransparent(span<const int> values)
double geometricMeanTransparent(const vector<int> values)
{
	auto mult{ accumulateData(cbegin(values), cend(values), 1, multiplies<>{}) };
	return pow(mult, 1.0 / values.size());
}

int main()
{
	plus<int> myPlus;
	int res{ myPlus(4, 5) };
	cout << res << endl;

	vector<int> myVector;

	while (true) {
		cout << "Enter a test score to add (0 to stop): ";
		int score;
		cin >> score;
		if (score == 0) {
			break;
		}
		myVector.push_back(score);
	}

	cout << "The geometric mean is " << geometricMean(myVector) << endl;
	cout << "The geometric mean is (transparent function object) "
		<< geometricMeanTransparent(myVector) << endl;

	{
		vector<int> values{ 1, 2, 3 };
		double result{ accumulateData(cbegin(values), cend(values), 1.1, multiplies<>{}) };
		cout << result << endl;
	}

	{
		vector<int> values{ 1, 2, 3 };
		double result{
			accumulateData(cbegin(values), cend(values), 1.1, multiplies<int>{}) };
		cout << result << endl;
	}
}
