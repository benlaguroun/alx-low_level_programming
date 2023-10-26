#!/usr/bin/python3
"""Introduces a function for determining the perimeter of an island."""


def island_perimeter(grid):
    """Calculate the island's perimeter.

    The provided grid uses 0 to represent water and 1 to represent land.

    Args:
        grid (list): A 2D list of integers that represents an island.
    Returns:
        The island's perimeter as defined by the provided grid.
    """
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edges += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edges += 1
    return size * 4 - edges * 2
