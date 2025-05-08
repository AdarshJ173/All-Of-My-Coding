import pandas as pd

mydata = ['a', 'b', 'c', 'd', 'e']

myvar = pd.Series(mydata)
print(myvar)

mydataset = {
    'cars': ['Ford', 'Toyota', 'BMW'],
    'passing': [1, 2, 3]
}
print(mydataset)

myvar = pd.DataFrame(mydataset)
print(myvar)