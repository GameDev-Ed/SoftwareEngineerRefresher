# Software Engineering Puzzle - C++ Visual Studio Solution

This is a standalone C++ learning project. It is intentionally separate from Astryx.

The goal is simple: the solution should build, but the tests should fail at first. Your job is to open the unfinished files, complete the TODO puzzles, run the tests again, and keep going until every test passes.

## How to open it

1. Open `SoftwareEngineeringPuzzle.sln` in Visual Studio 2022.
2. In Solution Explorer, right-click `PuzzleTests`.
3. Choose **Set as Startup Project**.
4. Press **Ctrl + F5** to run the tests.
   - If you press **F5**, the console now waits for Enter before closing.
   - If the window still closes immediately, open Visual Studio: **Tools > Options > Debugging**, then turn on **Automatically close the console when debugging stops** only if you want it to close. Keep it off while learning.

## Project structure

```text
SoftwareEngineeringPuzzle
├── SoftwareEngineeringPuzzle.sln
├── SoftwareEngineeringPuzzleCore
│   ├── include
│   │   ├── BasicFunctions.h
│   │   ├── DataStructures.h
│   │   ├── OOPBasics.h
│   │   ├── FileIO.h
│   │   └── Architecture.h
│   └── src
│       ├── BasicFunctions.cpp
│       ├── DataStructures.cpp
│       ├── OOPBasics.cpp
│       ├── FileIO.cpp
│       └── Architecture.cpp
└── PuzzleTests
    └── src
        ├── TestFramework.h
        └── main.cpp
```

## What each module teaches

### Module 1: BasicFunctions
Teaches functions, return values, if-statements, validation, and simple logic.

### Module 2: DataStructures
Teaches vectors, maps, loops, searching, counting, and edge cases.

### Module 3: OOPBasics
Teaches classes, constructors, private variables, getters, methods, and object state.

### Module 4: FileIO
Teaches how software stores and parses text data.

### Module 5: Architecture
Teaches how to make a small manager class with clean responsibilities.

## How the puzzle works

Most `.cpp` files have TODO comments like this:

```cpp
// TODO PUZZLE 1:
// Replace this placeholder with code that returns the sum of a and b.
return 0;
```

You replace the placeholder with the correct logic. Then run `PuzzleTests` again.

## Rule for yourself

Try not to edit `PuzzleTests/src/main.cpp` at first. Treat the tests like the assignment instructions. Your goal is to make the code pass the tests without changing the tests.

After you finish, then you can add your own tests and expand the project.
