#!/usr/bin/python3

"""
Module for Island Perimeter
"""


def island_perimeter(grid):

    """
    5-island_perimeter.py

    This module defines a function `island_perimeter(grid)`
    that calculates the perimeter
    of the island represented in a 2D grid.

    The grid is a list of lists of integers where:
    - 0 represents a water zone.
    - 1 represents a land zone.

    The function assumes the following:
    - One cell is a square with side length 1.
    - Grid cells are connected horizontally/vertically (not diagonally).
    - Grid is rectangular, width and height don't exceed 100.
    - Grid is completely surrounded by water & there's one island (or nothing).
    - The island doesn't have "lakes" (water inside that isn't connected to the
    water around the island).

    The function calculates the perimeter of the island by
    iterating through the grid and counting the number of
    edges of each land cell that borders water.
    """

    perimeter = 0

    rows, cols = len(grid), len(grid[0])
    perimeter = 0

    for row in range(rows):
        for col in range(cols):
            if grid[row][col] == 1:
                # Check for water neighbors (up, down, left, right)
                perimeter += 4
                if row > 0 and grid[row - 1][col] == 1:
                    perimeter -= 2  # Top neighbor is land, remove double count
                if col > 0 and grid[row][col - 1] == 1:
                    perimeter -= 2  # Left neighbor is land, remove double count

    return perimeter
