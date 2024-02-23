#!/usr/bin/python3
"""Island perimeter to measure a function."""


def island_perimeter(grid):
    """Returning the perimiter of an island.
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

    for y in range(height):
        for j in range(width):
            if grid[y][j] == 1:
                size += 1
                if (j > 0 and grid[y][j - 1] == 1):
                    edges += 1
                if (y > 0 and grid[y - 1][j] == 1):
                    edges += 1
    return size * 4 - edges * 2
