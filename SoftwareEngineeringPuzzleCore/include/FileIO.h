#pragma once
#include <string>
#include <vector>

// MODULE 4: File I/O and data handling
// Many real systems save and load data.

namespace fileio
{
    // Puzzle: join lines into one save string, separated by \n.
    // Example: {"one", "two"} -> "one\ntwo"
    std::string BuildSaveText(const std::vector<std::string>& lines);

    // Puzzle: split text into lines whenever you see \n.
    std::vector<std::string> SplitLines(const std::string& text);
}
