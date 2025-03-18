import pandas as pd
import matplotlib.pylab as plt
from statsmodels.formula.api import ols
from sklearn.linear_model import LinearRegression

price = [174000, 156500, 168000, 145000, 152000, 160000, 175000, 140000, 148500, 155000,
         162000, 180000, 190000, 135000, 142000, 150000, 157000, 165000, 172000, 185000,
         100000, 139500, 160500, 150000, 143000, 158000, 167500, 178000, 154000, 170000]

size = [152, 118, 118, 85, 95, 110, 130, 100, 105, 120,
        125, 140, 150, 90, 98, 112, 117, 122, 138, 145,
        59, 128, 128, 115, 97, 111, 126, 132, 108, 140]

age = [19, 19, 19, 19, 18, 17, 16, 15, 20, 22,
       21, 19, 18, 20, 23, 25, 26, 22, 21, 24,
       11, 11, 11, 11, 14, 13, 15, 16, 12, 10]

kindergarten = [22, 22, 22, 22, 20, 21, 19, 23, 24, 22,
                25, 26, 20, 19, 18, 27, 28, 22, 21, 23,
                4, 4, 4, 4, 6, 7, 5, 9, 10, 8]

elementarySchool = [10, 10, 10, 10, 12, 13, 11, 14, 15, 10,
                    9, 8, 13, 12, 14, 11, 15, 16, 13, 17,
                    12, 12, 12, 12, 9, 11, 13, 14, 10, 8]

busStop = [13, 13, 13, 13, 14, 15, 12, 16, 17, 18,
           19, 20, 12, 11, 10, 21, 22, 23, 24, 25,
           29, 29, 29, 29, 26, 27, 28, 30, 31, 32]

hospital = [19, 19, 19, 19, 18, 20, 21, 22, 17, 16,
            15, 19, 14, 13, 12, 23, 24, 25, 26, 27,
            14, 14, 14, 14, 13, 12, 15, 16, 18, 20]

mart = [19, 19, 19, 19, 18, 17, 16, 15, 14, 13,
        12, 19, 20, 21, 22, 23, 24, 25, 26, 27,
        14, 14, 14, 14, 13, 12, 15, 16, 18, 20]
data = {'price': price, 'size': size, 'age': age, 'kindergarten': 
kindergarten, 'elementarySchool': elementarySchool, 'busStop': busStop, 
'hospital': hospital, 'mart': mart}
df = pd.DataFrame(data)
fit = ols('price ~ size + age + kindergarten + elementarySchool + busStop + hospital + mart', data = df).fit( )
print(fit.summary( ))