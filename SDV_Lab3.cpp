#include <iostream>
#include "Helper.h"

int main()
{
	std::string newString = "Let's get ready to input some NUMBERS!";
	int minNum=5;
	int maxNum=5000000;
	Helper::GetValidatedInt(newString.c_str(), minNum, maxNum);
}

