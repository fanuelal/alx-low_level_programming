#!/usr/bin/python3
""" module that calculate the perimeter of island """


def island_perimeter(grid):
    """land zone parimeter calculater function"""
    Parim = 0
    side = 0
    for i in range(0, len(grid)):
        for j in range(0, len(grid[i])):
            if grid[i][j] == 1:
                Parim += 4
                for k in range(0, 4):
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
