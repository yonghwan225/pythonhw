import pandas as pd

# CSV 파일 로드
df = pd.read_csv('./안동2월.csv', encoding = 'cp949')

# 정확한 컬럼명으로 변경
df2 = df.ffill()

# 정확한 컬럼명 변경
df2.rename(columns = {'최저기온(℃)':'min_temp'}, inplace = True)
df2.rename(columns = {'평균기온(℃)':'avg_temp'}, inplace = True)
df2.rename(columns = {'최고기온(℃)':'max_temp'}, inplace = True)

# 변경된 컬럼명 확인
print(df2.columns)

import matplotlib.pyplot as plt
plt.rc('font', family = 'NanumGothic')
plt.rcParams['axes.unicode_minus'] = False
plt.title('안동 1996년 2월 기온 변화')
plt.plot(range(1, len(df) + 1), df2['max_temp'], label = '최고기온', c = 'r')
plt.plot(range(1, len(df) + 1), df2['avg_temp'], label = '평균기온', c = 'y')
plt.plot(range(1, len(df) + 1), df2['min_temp'], label = '최저기온', c = 'b')
plt.xlabel('일')
plt.ylabel('기온')
plt.legend()
plt.show()
plt.savefig('안동기온.png')
