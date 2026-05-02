import pandas as pd

def invalid_tweets(tweets: pd.DataFrame) -> pd.DataFrame:
    length = tweets["content"].str.len()
    filtered = tweets[length > 15]
    result = filtered[["tweet_id"]]
    
    return result

    
    