#!/usr/bin/python3
"""This module contains the function for the island perimeter"""


def island_perimeter(grid):
    """This function  returns the perimeter
        of the island described in grid

        Grid:
            is a list of list of integers:
            0 represents a water zone
            1 represents a land zone
            One cell is a square with side length 1
            Grid cells are connected horizontally/vertically (not diagonally).
            Grid is rectangular, width and height dont exceed 100
            Grid is completely surrounded by water,
                and there is one island (or nothing).
    """

    perimeter = 0
    rows = len(grid)
    columns = len(grid[0])

    for i in range(rows):   # iterate over the rows
        for j in range(columns):   # iterate over columns
            if grid[i][j] == 1:
                perimeter += 4
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2

    return perimeter
