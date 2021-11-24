#!/usr/bin/python3
"""Module that calculate the perimeter of island """


def island_perimeter(grid):
    """Returns land zone parimeter"""
    Parim = 0
    side = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                Parim += 4
                for k in range(4):
                    if k == 0:
                        if grid[i-1][j] == 1:
                            side += 1
                    elif k == 1:
                        if grid[i][j+1] == 1:
                            side += 1
                    elif k == 2:
                        if grid[i+1][j] == 1:
                            side += 1
                    elif k == 3:
                        if grid[i][j-1] == 1:
                            side += 1
                Parim = Parim - side
                side = 0
    return Parim
