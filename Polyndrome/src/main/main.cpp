#include "../ph/Polyndrom.h"

int main()
{
	std::cout.setf(std::ios_base::boolalpha);

	std::string str;

	printf("Please write the word: ");
	getline(std::cin, str);

	if (polindrom(str)) {
		printf("Success\n");
	}
	else {
		printf("The word is not a Polyndrom\n");
	}
	system("Pause");
	return 0;
}