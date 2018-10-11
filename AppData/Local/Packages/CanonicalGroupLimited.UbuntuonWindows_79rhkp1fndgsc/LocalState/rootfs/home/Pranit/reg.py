import pandas as pd
import Quandl

df = Quandl.get("SSE/GGQ1")

print(df.head)


