#pragma once
#include <string>
#include <vector>

// MODULE 5: Architecture and clean system design
// This is about making code organized, reusable, and testable.

namespace architecture
{
    struct Task
    {
        std::string title;
        bool completed;
    };

    class TaskManager
    {
    public:
        void AddTask(const std::string& title);
        bool CompleteTask(const std::string& title);
        int CountCompleted() const;
        int CountRemaining() const;

    private:
        std::vector<Task> tasks;
    };
}
