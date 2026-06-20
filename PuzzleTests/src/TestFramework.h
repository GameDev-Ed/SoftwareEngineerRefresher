#pragma once
#include <iostream>
#include <limits>
#include <string>

// Tiny test framework so you do not need any extra libraries.
// Each test prints PASS or FAIL in the console.

struct TestStats
{
    int passed = 0;
    int failed = 0;
};

template <typename Expected, typename Actual>
void ExpectEqual(TestStats& stats, const std::string& testName, const Expected& expected, const Actual& actual)
{
    if (expected == actual)
    {
        ++stats.passed;
        std::cout << "[PASS] " << testName << "\n";
    }
    else
    {
        ++stats.failed;
        std::cout << "[FAIL] " << testName << " | Expected: " << expected << " | Actual: " << actual << "\n";
    }
}

inline int FinishTests(const TestStats& stats)
{
    std::cout << "\n==============================\n";
    std::cout << "Passed: " << stats.passed << "\n";
    std::cout << "Failed: " << stats.failed << "\n";
    std::cout << "==============================\n";

    int exitCode = 0;

    if (stats.failed == 0)
    {
        std::cout << "All puzzles solved. Nice work.\n";
    }
    else
    {
        std::cout << "Some puzzles are still incomplete. Open the TODO comments and fix them.\n";
        exitCode = 1;
    }

    // Keeps the console window open when running with F5 or by double-clicking the exe.
    // Press Ctrl + F5 in Visual Studio to run without debugging, or press Enter here to close.
    std::cout << "\nPress Enter to close the test window...";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();

    return exitCode;
}
