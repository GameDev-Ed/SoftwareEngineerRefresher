#include "BasicFunctions.h"

namespace basics
{
	int Add(int a, int b)
	{
		// TODO PUZZLE 1:
		// Software engineering idea: functions should do one clear job.
		int result = a + b;
		return result;
	}

	bool IsAdult(int age)
	{
		// TODO PUZZLE 2:
		// Software engineering idea: conditions let your program make decisions.
		// Return true when age is 18 or above. Otherwise return false.
		if (age >= 18)
		{
			return true;
		}
		else
			return false;
	}

	char GetLetterGrade(int score)
	{
		// TODO PUZZLE 3:
		// Software engineering idea: order matters when checking ranges.
		// Example: 95 should return 'A', not 'B'.

		if (score >= 90)
		{
			return 'A';
		}
		else if (score >= 80)
		{
			return 'B';
		}
		else if (score >= 70)
		{
			return 'C';

		}
		else if (score >= 60)
		{
			return 'D';
		}
		else
			return 'F';
		/*
		The reason case 10 and case 9 both return 'A' is because:

			100 / 10 = 10
			95 / 10 = 9
			90 / 10 = 9
		switch (score / 10)
	{
	case 10:
	case 9:
		return 'A';

	case 8:
		return 'B';

	case 7:
		return 'C';

	case 6:
		return 'D';

	default:
		return 'F';
	}
		*/





	}

	bool IsValidUsername(const std::string& username)
	{
		// TODO PUZZLE 4:
		// Software engineering idea: validation protects systems from bad input.
		// Return true only when username has at least 3 characters.
		if (username.size() >= 3)
		{
			return true;
		}
		else
			return false;
	}
}
