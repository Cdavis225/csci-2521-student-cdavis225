#ifndef TRANSLATE_H
#define TRANSLATE_H

#include<iostream>
#include<string>
#include<unordered_map>

using namespace std;

//this class is meant to make sure the string only accepts 50 characters or less.
class Limit {
public:
	static const size_t MAX_CHAR = 50;

	Limit() = default;
	explicit Limit(const string& str) {
		set(str);
	}

	bool set(const string& str) noexcept;
	const string& get() const noexcept;
	size_t size() const noexcept;
	bool accept() const noexcept;

private:
	string value;
	bool valid = true;
};

//this class is meant to take the input and convert it to morse code
class Translator {
public:
	Translator() = default;

	string translate(const Limit& origin) const;

	string translate(const string& origin) const;

private:
	string morseCode(char letter) const;

	static const unordered_map<char, string> morseMap;
};
#endif