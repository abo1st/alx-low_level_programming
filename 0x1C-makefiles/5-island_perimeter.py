#!/usr/bin/python3
"""This defines an island perimeter measuring function."""


def island_perimeter(grid):
    """This returns the perimiter of an island.

    The grid represents water by 0 and land by 1.

    Args:
        grid (list): A list of list of integers representing an island.
    Returns:
        The perimeter of the island defined in grid.
    """
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for iz in range(height):
        for jz in range(width):
            if grid[iz][jz] == 1:
                size += 1
                if (jz > 0 and grid[iz][jz - 1] == 1):
                    edges += 1
                if (iz > 0 and grid[iz - 1][jz] == 1):
                    edges += 1
    return size * 4 - edges * 2
