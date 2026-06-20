#pragma once
#include <string>

// MODULE 3: Object-oriented programming
// OOP helps you group data and behavior together.

namespace oop
{
    class BankAccount
    {
    public:
        explicit BankAccount(int startingBalance);

        void Deposit(int amount);
        bool Withdraw(int amount);
        int GetBalance() const;

    private:
        int balance;
    };

    class UserProfile
    {
    public:
        UserProfile(std::string name, int level);

        std::string GetDisplayName() const;
        int GetLevel() const;
        void LevelUp();

    private:
        std::string name;
        int level;
    };
}
