import pandas as pd

def swap_salary(salary: pd.DataFrame) -> pd.DataFrame:
    salary = salary.replace({'m':'f', 'f':'m'})
    return salary
    