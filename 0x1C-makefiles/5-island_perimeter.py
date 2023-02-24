#!/usr/bin/python3
"""Calculates perimeter of area defined by grid
    0 represents water
    1 represents land
"""


def island_perimeter(grid):
    """Function to calculate Perimeter of the island defined by grid
    Args:
        grid(list of int):
            0 represents water
            1 represents land
    Return:
        int: perimeter of the isand
    """

    perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                perimeter += 4
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2
    return perimeter
