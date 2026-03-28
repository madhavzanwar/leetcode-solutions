import pandas as pd

def total_time(employees: pd.DataFrame) -> pd.DataFrame:
    employees['total_time'] = employees.out_time - employees.in_time
    employees = employees.rename(columns={'event_day': 'day'})
    employees = employees.drop(columns={'in_time', 'out_time'}) #drop is used to delete
    employees = employees.groupby(['day', 'emp_id'])['total_time'].sum().reset_index()
    #reset_index() = convert index back to columns 
    return employees 
    