#pragma once
#include <string>

// MODULE 1: Functions and basic problem solving
// Your goal: open BasicFunctions.cpp and complete each TODO.

namespace basics
{
    // Puzzle: return a + b.
    int Add(int a, int b);

    // Puzzle: return true only when age is 18 or higher.
    bool IsAdult(int age);

    // Puzzle: convert a score from 0-100 into a letter grade.
    // 90+ = A, 80+ = B, 70+ = C, 60+ = D, lower = F.
    char GetLetterGrade(int score);

    // Puzzle: return a clean username.
    // Rule: username must not be empty and must be at least 3 characters.
    bool IsValidUsername(const std::string& username);
}
