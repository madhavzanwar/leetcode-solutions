import pandas as pd

def capital_gainloss(stocks: pd.DataFrame) -> pd.DataFrame:
    stocks["amount"] = stocks["price"].where(
        stocks["operation"] == "Sell",
        -stocks["price"]
    )

    return (
        stocks.groupby("stock_name", as_index=False)["amount"]
        .sum()
        .rename(columns={"amount": "capital_gain_loss"})
    )