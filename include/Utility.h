/*
Holds constants and other useful constructs used throughout the program.
*/

#ifndef UTILITY_H
#define UTILITY_H

#include <vector>
#include <utility>
#include <memory>

// Cell::FILLED represents a filled in cell. Cell::EMPTY represents a cell that has not been modified yet. /
// Cell::NOTHING represents a cell that has been determined to be empty. Cell::TEST represents a cell that /
// is tentatively filled in for testing.
enum class Cell {
    FILLED = '0',
    EMPTY = '.',
    NOTHING = 'x',
    TEST = '?'
};

enum class FillDirection {
    ROW,
    COLUMN,
    CELL
};

using Point = std::pair<int, int>;

using BoardData = std::vector<std::vector<Cell>>;

template <typename T>
using Result = std::pair<T, bool>;

template <typename T>
using u_ptr = std::unique_ptr<T>;

#endif