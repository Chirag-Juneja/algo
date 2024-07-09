"""
Determine if a 9 x 9 Sudoku board is valid. Only the filled cells need to be validated according to the following rules:

Each row must contain the digits 1-9 without repetition.
Each column must contain the digits 1-9 without repetition.
Each of the nine 3 x 3 sub-boxes of the grid must contain the digits 1-9 without repetition.
Note:

A Sudoku board (partially filled) could be valid but is not necessarily solvable.
Only the filled cells need to be validated according to the mentioned rules.

"""

from typing import *
from collections import defaultdict


class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        hs_row = [set() for _ in range(9)]
        hs_col = [set() for _ in range(9)]
        hs_box = [set() for _ in range(9)]
        for idx, col in enumerate(board):
            for idy, element in enumerate(col):
                if element != ".":
                    if (
                        element in hs_row[idy]
                        or element in hs_col[idx]
                        or element in hs_box[idy // 3 + (idx // 3) * 3]
                    ):
                        return False
                    else:
                        hs_row[idy].add(element)
                        hs_col[idx].add(element)
                        hs_box[idy // 3 + (idx // 3) * 3].add(element)
        return True


def test_isValidSudoku():
    board = [
        ["5", "3", ".", ".", "7", ".", ".", ".", "."],
        ["6", ".", ".", "1", "9", "5", ".", ".", "."],
        [".", "9", "8", ".", ".", ".", ".", "6", "."],
        ["8", ".", ".", ".", "6", ".", ".", ".", "3"],
        ["4", ".", ".", "8", ".", "3", ".", ".", "1"],
        ["7", ".", ".", ".", "2", ".", ".", ".", "6"],
        [".", "6", ".", ".", ".", ".", "2", "8", "."],
        [".", ".", ".", "4", "1", "9", ".", ".", "5"],
        [".", ".", ".", ".", "8", ".", ".", "7", "9"],
    ]
    result = Solution().isValidSudoku(board)
    assert result == True


def test_isValidSudoku_invalid():
    board = [
        ["8", "3", ".", ".", "7", ".", ".", ".", "."],
        ["6", ".", ".", "1", "9", "5", ".", ".", "."],
        [".", "9", "8", ".", ".", ".", ".", "6", "."],
        ["8", ".", ".", ".", "6", ".", ".", ".", "3"],
        ["4", ".", ".", "8", ".", "3", ".", ".", "1"],
        ["7", ".", ".", ".", "2", ".", ".", ".", "6"],
        [".", "6", ".", ".", ".", ".", "2", "8", "."],
        [".", ".", ".", "4", "1", "9", ".", ".", "5"],
        [".", ".", ".", ".", "8", ".", ".", "7", "9"],
    ]
    result = Solution().isValidSudoku(board)
    assert result == False


if __name__ == "__main__":
    test_isValidSudoku()
    test_isValidSudoku_invalid()
