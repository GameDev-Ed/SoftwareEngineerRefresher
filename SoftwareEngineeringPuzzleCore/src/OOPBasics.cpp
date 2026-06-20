#include "OOPBasics.h"

namespace oop
{
    BankAccount::BankAccount(int startingBalance)
        : balance(startingBalance)
    {
        // Constructor is finished for you.
        // It sets the first value of the object.
    }

    void BankAccount::Deposit(int amount)
    {
        // TODO PUZZLE 8:
        // Software engineering idea: methods change an object's internal state.
        // Only deposit positive amounts. Ignore zero or negative amounts.
    }

    bool BankAccount::Withdraw(int amount)
    {
        // TODO PUZZLE 9:
        // Withdraw only if amount is positive and the account has enough money.
        // Return true when withdraw succeeds. Return false when it fails.
        return false;
    }

    int BankAccount::GetBalance() const
    {
        // TODO PUZZLE 10:
        // Software engineering idea: getters safely expose private data.
        return 0;
    }

    UserProfile::UserProfile(std::string name, int level)
        : name(std::move(name)), level(level)
    {
    }

    std::string UserProfile::GetDisplayName() const
    {
        // TODO PUZZLE 11:
        // Return text in this format: "Name - Level X"
        // Example: UserProfile("Matthew", 5) returns "Matthew - Level 5"
        return "";
    }

    int UserProfile::GetLevel() const
    {
        // TODO PUZZLE 12:
        // Return the current level.
        return 0;
    }

    void UserProfile::LevelUp()
    {
        // TODO PUZZLE 13:
        // Increase level by 1.
    }
}
