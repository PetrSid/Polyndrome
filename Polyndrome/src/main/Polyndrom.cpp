#include "../ph/Polyndrom.h"

bool polindrom(std::string& st)
{
	int length = st.length();
	std::string polindrom;
	polindrom.resize(length);

	for (size_t i = 0; i < length; i++)
	{
		if (isalpha(st[i])) { // if hav a symbol good else not good
			polindrom[i] = st[i];
		}
		if (isupper(polindrom[i])) { // change from up to lower
			polindrom[i] = tolower(polindrom[i]);
		}
	}

	for (size_t i = 0; i < length; i++) {
		if (polindrom[i] == '\0') {
			for (size_t j = i; j < length; j++) {
				if (polindrom[j] != '\0') {
					polindrom[i] = polindrom[j];
					polindrom[j] = '\0';
					break;
				}
			}
		}
	}

	size_t symbols = 0;
	for (size_t i = 0; i < length; i++) {
		if (polindrom[i] != '\0') {
			symbols += 1;
		}
	}
	polindrom.resize(symbols);
	// copy(polindrom.rbegin(), polindrom.rend(), temp.begin());

	std::string temp = polindrom;
	size_t index = 0;
	std::string::reverse_iterator rev_iter;
	for (rev_iter = polindrom.rbegin(); rev_iter != polindrom.rend(); ++rev_iter)
	{
		temp[index] = *rev_iter;
		index++;
	}

	return (temp == polindrom) ? true : false;
}