// Templates.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <memory>

template<typename T>
T max(T num, T num2) {
	return (num > num) ? num : num2;
}

template<typename T>
void swap(T &a, T &b) {
	T temp = a;
	a = b;
	b = temp;
}
int main()
{
	int a = 1;
	int b = 2;
	std::cout << max<int>(22,32) << "\n";
	std::cout << a << "\n";
	std::cout << b << "\n";
	swap(a,b);
	std::cout << a << "\n";
	std::cout << b << "\n";
}
