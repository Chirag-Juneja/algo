"""
DataFrame employees
+-------------+--------+
| Column Name | Type   |
+-------------+--------+
| name        | object |
| salary      | int    |
+-------------+--------+
A company intends to give its employees a pay rise.

Write a solution to modify the salary column by multiplying each salary by 2.

The result format is in the following example.



Example 1:

Input:
DataFrame employees
+---------+--------+
| name    | salary |
+---------+--------+
| Jack    | 19666  |
| Piper   | 74754  |
| Mia     | 62509  |
| Ulysses | 54866  |
+---------+--------+
Output:
+---------+--------+
| name    | salary |
+---------+--------+
| Jack    | 39332  |
| Piper   | 149508 |
| Mia     | 125018 |
| Ulysses | 109732 |
+---------+--------+
Explanation:
Every salary has been doubled.
"""

import pandas as pd
import copy


def modifySalaryColumn(employees: pd.DataFrame) -> pd.DataFrame:
    employees["salary"] = employees["salary"] * 2
    return employees


def test_modifySalaryColumn():
    df = pd.DataFrame(
        [
            {"name": "John", "salary": 1993093},
            {"name": "Doe", "salary": 1233093},
        ]
    )
    _df = modifySalaryColumn(copy.deepcopy(df))
    assert (_df["salary"] == df["salary"] * 2).all()


if __name__ == "__main__":
    test_modifySalaryColumn()
