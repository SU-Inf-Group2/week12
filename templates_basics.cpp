#include <iostream>

using std::cout;
using std::endl;

/*
template <class T> 
void swap(T& l, T& r) // T must have copy_constructor, operator= defined
{ 
	T temp = l;
	l = r;
	r = temp;
}
*/

template <class U, class T>
T max(T a,U b) // T must have a copy_constructor, operator<
{
	if(sizeof(U) <= 4)
		cout << "type is small" << endl;
	else
		cout << "type is big" << endl;
	return a < b ? b : a;
}


int main()
{
	int a = 0, b = 2, c;
	long l = 2, m = 3, n;
	double d = 2.3, f = 3.4, p;

	//swap<int>(a, b);
	//swap<long>(l, m);
	//swap<double>(d, f);

	//cout << a << " " << b << endl;
	//cout << l << " " << m << endl;
	//cout << d << " " << f << endl;

	c = max<int>(a, l);
	cout << c << endl;

	n = max(l, m);
	cout << n << endl;

	p = max(d, f);
	cout << p << endl;

	return 0;
}