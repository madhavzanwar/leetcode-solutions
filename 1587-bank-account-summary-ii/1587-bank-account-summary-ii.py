import pandas as pd

def account_summary(users: pd.DataFrame, transactions: pd.DataFrame) -> pd.DataFrame:
    balance = transactions.groupby('account', as_index=False)['amount'].sum()
    balance = balance[balance['amount'] > 10000]

    result = users.merge(balance, on='account')
    
    return result[['name', 'amount']].rename(columns={'amount': 'balance'})