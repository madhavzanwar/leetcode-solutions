import pandas as pd

def dropDuplicateEmails(customers: pd.DataFrame) -> pd.DataFrame:
    df = customers.drop_duplicates(subset="email")
    #drop_duplicates() method in pandas removes duplicate rows from a DataFrame or Series, returning a cleaned     copy by default.
    return df
    