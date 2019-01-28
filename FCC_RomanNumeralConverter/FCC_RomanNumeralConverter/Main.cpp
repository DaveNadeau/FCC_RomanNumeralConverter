#include<iostream>
#include<string>



struct romKeys {
	int number;
	std::string roman;
};

romKeys keyArray[13] = { {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"}, {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"},
{10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"} };

bool test(int userInput, int keyNum);

std::string romVal(int x);

int main() {
	int userNumber;
	std::cout << "please enter a number to be converted to roman numerals: ";
	std::cin >> userNumber;

	std::cout << "Roman Numeral: " << romVal(userNumber);

	std::getchar();

	return 0;
}

bool test(int userInput, int keyNum)
{
	if (userInput >= keyNum)
	{
		return true;
	}
	else
		return false;
}

std::string romVal(int x)
{
	std::string romResult = "";
	int i = 0;
	while (x != 0)
	{
		if (test(x, keyArray[i].number))
		{
			romResult += keyArray[i].roman;
			x -= keyArray[i].number;
		}
		else
		{
			i++;
		}
	}
	return romResult;
}