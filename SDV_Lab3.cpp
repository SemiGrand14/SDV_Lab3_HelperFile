#include <iostream>
#include "Helper.h"

int main()
{
	std::string newString = "Let's get ready to input some NUMBERS!";
	int minNum=0;
	int maxNum=0;
	Helper::GetValidatedInt(newString.c_str(), minNum, maxNum);
}

