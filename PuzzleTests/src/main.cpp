#include "TestFramework.h"

#include "Architecture.h"
#include "BasicFunctions.h"
#include "DataStructures.h"
#include "FileIO.h"
#include "OOPBasics.h"

#include <string>
#include <unordered_map>
#include <vector>

int main()
{
    TestStats stats;

    // MODULE 1: Function basics
    ExpectEqual(stats, "Add should add positive numbers", 7, basics::Add(3, 4));
    ExpectEqual(stats, "Add should handle negative numbers", -2, basics::Add(3, -5));
    ExpectEqual(stats, "IsAdult should accept age 18", true, basics::IsAdult(18));
    ExpectEqual(stats, "IsAdult should reject age 17", false, basics::IsAdult(17));
    ExpectEqual(stats, "GetLetterGrade should return A", 'A', basics::GetLetterGrade(95));
    ExpectEqual(stats, "GetLetterGrade should return C", 'C', basics::GetLetterGrade(75));
    ExpectEqual(stats, "GetLetterGrade should return F", 'F', basics::GetLetterGrade(44));
    ExpectEqual(stats, "Username with 3 characters should be valid", true, basics::IsValidUsername("abc"));
    ExpectEqual(stats, "Username with 2 characters should be invalid", false, basics::IsValidUsername("ab"));

    // MODULE 2: Data structures
    ExpectEqual(stats, "FindLargest should find biggest value", 99, structures::FindLargest({ 1, 8, 99, 4 }));
    ExpectEqual(stats, "FindLargest should handle empty list", 0, structures::FindLargest({}));
    ExpectEqual(stats, "CountWord should count exact matches", 3, structures::CountWord({ "red", "blue", "red", "green", "red" }, "red"));

    std::unordered_map<std::string, int> inventory;
    inventory["Potion"] = 3;
    inventory["Broken Sword"] = 0;
    ExpectEqual(stats, "HasItem should return true for available item", true, structures::HasItem(inventory, "Potion"));
    ExpectEqual(stats, "HasItem should return false for zero quantity item", false, structures::HasItem(inventory, "Broken Sword"));
    ExpectEqual(stats, "HasItem should return false for missing item", false, structures::HasItem(inventory, "Shield"));

    // MODULE 3: Object-oriented programming
    oop::BankAccount account(100);
    account.Deposit(50);
    ExpectEqual(stats, "Deposit should increase balance", 150, account.GetBalance());
    ExpectEqual(stats, "Withdraw should succeed when funds exist", true, account.Withdraw(70));
    ExpectEqual(stats, "Withdraw should update balance", 80, account.GetBalance());
    ExpectEqual(stats, "Withdraw should fail when funds are not enough", false, account.Withdraw(500));
    ExpectEqual(stats, "Failed withdraw should not change balance", 80, account.GetBalance());

    oop::UserProfile profile("Matthew", 5);
    ExpectEqual(stats, "GetDisplayName should format name and level", std::string("Matthew - Level 5"), profile.GetDisplayName());
    profile.LevelUp();
    ExpectEqual(stats, "LevelUp should increase level", 6, profile.GetLevel());

    // MODULE 4: File I/O style parsing
    ExpectEqual(stats, "BuildSaveText should join lines", std::string("health=100\nname=Matthew\nlevel=5"), fileio::BuildSaveText({ "health=100", "name=Matthew", "level=5" }));
    std::vector<std::string> split = fileio::SplitLines("one\ntwo\nthree");
    ExpectEqual(stats, "SplitLines should create 3 lines", static_cast<size_t>(3), split.size());
    if (split.size() == 3)
    {
        ExpectEqual(stats, "SplitLines line 1", std::string("one"), split[0]);
        ExpectEqual(stats, "SplitLines line 2", std::string("two"), split[1]);
        ExpectEqual(stats, "SplitLines line 3", std::string("three"), split[2]);
    }

    // MODULE 5: Architecture
    architecture::TaskManager manager;
    manager.AddTask("Learn functions");
    manager.AddTask("Learn classes");
    manager.AddTask("");
    ExpectEqual(stats, "TaskManager should ignore empty titles", 2, manager.CountRemaining());
    ExpectEqual(stats, "CompleteTask should find task", true, manager.CompleteTask("Learn functions"));
    ExpectEqual(stats, "Completed count should update", 1, manager.CountCompleted());
    ExpectEqual(stats, "Remaining count should update", 1, manager.CountRemaining());
    ExpectEqual(stats, "CompleteTask should fail for missing task", false, manager.CompleteTask("Missing task"));

    return FinishTests(stats);
}
