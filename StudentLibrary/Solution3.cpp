#include "Solution3.h"

// Don't fortget to enable the exercise in the SudentConfiguration.h file !
#include "StudentConfiguration.h"
#include <iostream>
#include <algorithm>

#ifdef COMPILE_EXERCICE_3

void Solution3::SetWords(const std::vector<std::string>& _words)
{
	words = _words;
	if (words.empty()) {
		throw std::invalid_argument("Input vector is null or empty");
	}
}

void Solution3::SortWords() {
	std::sort(words.begin(), words.end(), [](const std::string& a, const std::string& b) {
		return std::lexicographical_compare(a.begin(), a.end(), b.begin(), b.end(),
		[](char c1, char c2) {
				return std::tolower(c1) < std::tolower(c2);
			});
		});
}

std::vector<std::string> Solution3::GetSortedWords() const
{
	return words;
}

#endif
