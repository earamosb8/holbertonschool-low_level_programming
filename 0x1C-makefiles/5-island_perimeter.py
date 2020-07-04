#!/usr/bin/python3

""" function to calculate island perimeter """


def island_perimeter(grid):
    """ returns the perimeter of the island """
    sum = 0
    for i in range(len(grid) - 1):
        for j in range(0, len(grid[i])):
            if i == 0:
                if grid[i][j] == 1 and j == 0:
                    sum = 4
                elif grid[i][j] == 1 and j > 0:
                    if sum == 0:
                        sum = 4
                    else:
                        sum = sum + 2
            else:
                if j == 0 and grid[i][j] == 1 and grid[i - 1][j] == 0:
                    if sum == 0:
                        sum = 4
                    else:
                        sum = sum + 2
                elif j == 0 and grid[i][j] == 1 and grid[i - 1][j] == 1:
                    sum = sum + 2
                elif j > 0:
                    if grid[i][j] == 1 and grid[i - 1][j] == 1:
                        sum = sum + 2
                    elif grid[i][j] == 1:
                        if grid[i - 1][j] == 1 and grid[i][j - 1] == 1:
                            sum = sum + 2
                        elif grid[i - 1][j] == 0 and grid[i][j - 1] == 0:
                            if sum == 0:
                                sum = 4
                            else:
                                sum = sum + 2
                        elif grid[i - 1][j] == 0 and grid[i][j - 1] == 1:
                            if sum == 0:
                                sum = 4
                            else:
                                sum = sum + 2
    return(sum)
