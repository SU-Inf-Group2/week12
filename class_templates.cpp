#include <iostream>
#include "class.h"

int main()
{
	UnsignedNumber<double> d(1.2);
	UnsignedNumber<long> l(23);

	d.print();
	l.print();

	return 0;
}