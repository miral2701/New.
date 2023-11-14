#include <iostream>
#include <iterator>
#include <algorithm>
#include <list>
#include<vector>
using namespace std;

bool Neg(int el)
{
	if (el < 0)
	{
		return true;
	}
	return false;
}
static int index = 0;

class Func
{
	int a;
	int b;
public:
	Func(int a1,int b1) :a(a1),b(b1) {}

	bool operator()(int el)
	{

		if (index >=a && index<=b)
		{
			index++;

			return true;
		}
		index++;



		return false;
		
	}
};

int main()
{
	vector<int> lst{ 2,4,1,-3,6,1,-4,-6,1,10,1 };//
	ostream_iterator<int> out(cout, " ");
	copy(lst.begin(), lst.end(), out);

	
	auto it = remove_if(lst.begin(), lst.end(), Func(1,5));
	lst.erase(it, lst.end());
	cout << endl;
	copy(lst.begin(), lst.end(), out);

}
/*
1. Создать вектор символов
2. Инициализировать,показать через потоковый итератор ostream_iterator
3. Создать функтор, который позволит удалить символы, в введенном диапазоне !
Для этого , функтор должен иметь поля.


*/