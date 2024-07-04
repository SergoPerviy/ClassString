#include <iostream>
#include "String.hpp"

int main() {
	setlocale(LC_ALL, "Russian");

	String str1 = "Hello World!";
	str1.print();

	String str2 = std::move(str1);
	str2.print();

	String str3 = String(3, '#');
	str3.print();

	return 0;
}