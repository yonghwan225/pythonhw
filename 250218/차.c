#include <stdio.h>
#include <string.h>

// 자동차 종류를 나타내는 열거형 정의
enum CarType {
    SEDAN = 1,  // 세단
    SUV = 2,    // SUV
    TRUCK = 3,  // 트럭
    VAN = 4     // 밴
};

int main() {
    // 각 자동차 종류별 모델 배열 정의
    char* sedan[] = { "avante", "grander" };  // 세단 모델 배열
    char* suv[] = { "santafe", "tucson" };    // SUV 모델 배열
    char* truck[] = { "bongo", "porter" };    // 트럭 모델 배열
    char* van[] = { "starex", "caravan" };    // 밴 모델 배열

    char inputModel[30];  // 사용자로부터 입력받을 모델명 변수
    int found = 0;        // 모델이 맞는지 확인할 플래그 (초기값: 0, 모델을 찾지 못한 상태)
    enum CarType carType; // 자동차 종류를 저장할 변수

    // 자동차 종류에 해당하는 문자열 배열
    char* carTypeStrings[] = {"", "SEDAN", "SUV", "TRUCK", "VAN"};

    // 사용자로부터 모델명 입력 받기
    printf("자동차 모델명을 입력하세요: ");
    scanf("%s", inputModel);

    // 입력받은 모델명에 맞는 차량 종류 확인
    if (!found) {
        // 세단 모델 확인
        for (int i = 0; i < 2; i++) {
            if (strcmp(inputModel, sedan[i]) == 0) { // 모델명이 세단 배열에 있을 경우
                carType = SEDAN;  // 세단으로 설정
                found = 1;        // 모델을 찾았으므로 found를 1로 설정
                break;            // 더 이상 다른 모델을 찾을 필요 없음
            }
        }
    }
    
    if (!found) {
        // SUV 모델 확인
        for (int i = 0; i < 2; i++) {
            if (strcmp(inputModel, suv[i]) == 0) {  // 모델명이 SUV 배열에 있을 경우
                carType = SUV;  // SUV로 설정
                found = 1;      // 모델을 찾았으므로 found를 1로 설정
                break;          // 더 이상 다른 모델을 찾을 필요 없음
            }
        }
    }

    if (!found) {
        // 트럭 모델 확인
        for (int i = 0; i < 2; i++) {
            if (strcmp(inputModel, truck[i]) == 0) { // 모델명이 트럭 배열에 있을 경우
                carType = TRUCK;  // 트럭으로 설정
                found = 1;        // 모델을 찾았으므로 found를 1로 설정
                break;            // 더 이상 다른 모델을 찾을 필요 없음
            }
        }
    }

    if (!found) {
        // 밴 모델 확인
        for (int i = 0; i < 2; i++) {
            if (strcmp(inputModel, van[i]) == 0) { // 모델명이 밴 배열에 있을 경우
                carType = VAN;  // 밴으로 설정
                found = 1;      // 모델을 찾았으므로 found를 1로 설정
                break;          // 더 이상 다른 모델을 찾을 필요 없음
            }
        }
    }

    if (!found) {
        // 모델을 찾지 못한 경우
        printf("잘못된 모델명입니다.\n");
    } else {
        // 모델을 찾았다면 해당 차량 종류 출력
        printf("이 모델은 %s 입니다.\n", carTypeStrings[carType]);
    }

    return 0;
}
