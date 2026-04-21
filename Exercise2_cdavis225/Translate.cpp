#include "Translate.h"

const unordered_map<char, string> Translator :: morseMap =
{
	{'A', ".-"},    {'B', "-..."},  {'C', "-.-."}, {'D', "-.."},   {'E', "."},
	{'F', "..-."},  {'G', "--."},   {'H', "...."}, {'I', ".."},    {'J', ".---"},
	{'K', "-.-"},   {'L', ".-.."},  {'M', "--"},   {'N', "-."},    {'O', "---"},
	{'P', ".--."},  {'Q', "--.-"},  {'R', ".-."},  {'S', "..."},   {'T', "-"},
	{'U', "..-"},   {'V', "...-"},  {'W', ".--"},  {'X', "-..-"},  {'Y', "-.--"},
	{'Z', "--.."}, {'.', ".-.-.-"},{',', "--..--"},{'?', "..--.."},{'!', "-.-.--"},{'/', "-..-."},
	{'(', "-.--."}, {')', "-.--.-"},{'&', ".-..."},{':', "---..."},{';', "-.-.-."},
	{'=', "-...-"}, {'+', ".-.-."}, {'-', "-....-"},{'_', "..--.-"},{'"', ".-..-."},
	{'$', "...-..-"},{'@', ".--.-."}
};

bool Limit::set(const string& str) noexcept
{
	if (str.size() > MAX_CHAR) {
		value.clear();
		valid = false;
		return false;
	}
	value = str;
	valid = true;
	return true;
}

const string& Limit::get() const noexcept
{
	return value;
}

size_t Limit::size() const noexcept
{
	return value.size();
}

bool Limit::accept() const noexcept
{
	return valid;
}

string Translator::morseCode(char letter) const
{
	//Translates spaces into / as a way for them to not cause the program to view them as invalid inputs
	if (letter == ' ') {
		return "/";
	}

	//Checks each character and turns it to uppercase, used a different example than the one you gave us in the case insensitivity file.
	if (letter >= 'a' && letter <= 'z')
	{
		letter = static_cast<char>(letter - ('a' - 'A'));
	}
	auto length = morseMap.find(letter);

	if (length != morseMap.end())
	{
		return length->second;
	}

	return string();
}

string Translator::translate(const Limit& origin) const
{
	if (!origin.accept()) {
		return string();
	}

	const string& str = origin.get();
	string out;
	bool first = true;

	for (size_t i = 0; i < str.size(); i++) {
		string morse = morseCode(str[i]);
		
		if (morse.empty()) {
			continue;
		}

		if (!first) {
			out += ' ';
		}
		out += morse;
		first = false;
	}
	return out;
}

string Translator :: translate(const string & origin) const
	{
	Limit temp;
	if (!temp.set(origin)) {
		return string();
		}
	return translate(temp);
	}