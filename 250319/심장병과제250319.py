#과제
import pandas as pd
col_Names = ['age', 'sex', 'cp', 'trestbps', 'chol', 'fbs', 'restecg', 'thalach', 'exang', 'oldpeak', 'slope', 'ca', 'thal', 'label']
df_heart = pd.read_csv('http://archive.ics.uci.edu/ml/machine-learning-databases/heart-disease/processed.cleveland.data', names=col_Names)
df_heart


=================================================================


import numpy as np
df_heart.replace('?', np.nan, inplace=True)
df_heart=df_heart.dropna()
df_heart


=================================================================


#학습 자료 테스트자료 나누기
from sklearn.model_selection import train_test_split
df_heart = df_heart.astype({'label':'int'})
train, test = train_test_split(df_heart, test_size=0.3, random_state=0, stratify=df_heart['label'])
train_X = train[train.columns[:13]]
train_Y = train[train.columns[13:]]
test_X = test[test.columns[:13]]
test_Y = test[test.columns[13:]]

=================================================================

#과제 KNN분석
from sklearn.neighbors import KNeighborsClassifier
from sklearn import metrics
model = KNeighborsClassifier()
model.fit(train_X, train_Y)
pred_knn = model.predict(test_X)
print('KNN 알고리즘 분류 정확도:', metrics.accuracy_score(pred_knn, test_Y))

=================================================================
#과제 SVM
from sklearn import svm
from sklearn.metrics import accuracy_score
from sklearn.metrics import classification_report
from sklearn.metrics import f1_score
model = svm.SVC(kernel='linear', C=0.1, gamma=0.1)
model.fit(train_X, train_Y)
pred_SVM = model.predict(test_X)
print('SVM 알고리즘 분류 정확도:', accuracy_score(pred_SVM, test_Y))
print(classification_report(pred_SVM, test_Y))

=================================================================

#  심장 질환 데이터의 레이블 분포를 히스토그램으로 확인

import matplotlib.pyplot as plt
plt.hist(df_heart.label, bins=4)

=================================================================
# 심장질환 데이터의 특성 간 상관관계 및 레이블과의 관계를 히트맵으로 확인

import seaborn as sns
ax = sns.heatmap(df_heart.corr( ), annot=True, annot_kws={"size":6})
plt.show( )


=================================================================

#과제 랜덤포레스트
from sklearn.ensemble import RandomForestClassifier
model = RandomForestClassifier(
    n_estimators=300,        # 트리 개수 늘리기
    max_depth=15,            # 깊이 증가
    min_samples_split=4,     # 분할 최소 샘플 감소
    min_samples_leaf=2,      # 리프 최소 샘플 감소
    max_features="sqrt",     # 특성 선택 최적화
    class_weight="balanced", # 불균형 데이터 보정
    #bootstrap=True,
    #random_state=42
)
model.fit(train_X, train_Y)
pred_RF = model.predict(test_X)
print('Random Forest 알고리즘 분류 정확도:', accuracy_score(pred_RF,test_Y))
print(classification_report(pred_RF,test_Y))