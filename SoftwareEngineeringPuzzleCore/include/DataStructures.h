#pragma once
#include <string>
#include <unordered_map>
#include <vector>

// MODULE 2: Data structures
// Arrays, maps, and loops are the foundation of most systems.

namespace structures
{
    // Puzzle: return the largest number in the list.
    // If the list is empty, return 0.
    int FindLargest(const std::vector<int>& numbers);

    // Puzzle: count how many times target appears in words.
    int CountWord(const std::vector<std::string>& words, const std::string& target);

    // Puzzle: inventory lookup.
    // Return true if itemName exists and has quantity greater than 0.
    bool HasItem(const std::unordered_map<std::string, int>& inventory, const std::string& itemName);
}
