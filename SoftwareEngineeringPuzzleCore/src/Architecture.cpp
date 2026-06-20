#include "Architecture.h"

namespace architecture
{
    void TaskManager::AddTask(const std::string& title)
    {
        // TODO PUZZLE 16:
        // Software engineering idea: a manager class controls a specific system.
        // Add a new task with completed set to false.
        // Ignore empty task titles.
    }

    bool TaskManager::CompleteTask(const std::string& title)
    {
        // TODO PUZZLE 17:
        // Search for a task with this title.
        // If found, mark it completed and return true.
        // If not found, return false.
        return false;
    }

    int TaskManager::CountCompleted() const
    {
        // TODO PUZZLE 18:
        // Count how many tasks are completed.
        return 0;
    }

    int TaskManager::CountRemaining() const
    {
        // TODO PUZZLE 19:
        // Count how many tasks are not completed.
        return 0;
    }
}
