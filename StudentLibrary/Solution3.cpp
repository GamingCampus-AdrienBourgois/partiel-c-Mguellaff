#include "Solution3.h"

// Don't fortget to enable the exercise in the SudentConfiguration.h file !
#include "StudentConfiguration.h"
#ifdef COMPILE_EXERCICE_3

void Solution3::SetWords(const std::vector<std::string>& _words)
{
	words = _words;
	if (words.empty()) {
		throw std::invalid_argument("Input vector is null or empty");
	}
}

void Solution3::SortWords() {}

std::vector<std::string> Solution3::GetSortedWords() const
{
	return words;
}

#endif
