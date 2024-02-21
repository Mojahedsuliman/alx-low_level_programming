#!/usr/bin/python3
"""function def island_perimeter(grid): that returns the perimeter of the island described in grid"""

def island_perimeter(grid):
    """:return: The perimeter of the island."""
    height = (len(grid))
    width = (len(grid[0]))
    perimeter =(0)

    for row in range(height):
        for col in range(width):
            if grid[row][col] == 1:
                if row == 0 or grid[row - 1][col] == 0:
                    perimeter += 1

                    if row == height - 1 or grid[row + 1][col] == 0:
                        perimeter += 1

                        if col == 0 or grid[row][col - 1] == 0:
                            perimeter += 1
                            if col == width - 1 or grid[row][col + 1] == 0:
                                perimeter += 1
                                return (perimeter)
