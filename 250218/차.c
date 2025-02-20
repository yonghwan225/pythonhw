#include <stdio.h>
#include <string.h>

// �ڵ��� ������ ��Ÿ���� ������ ����
enum CarType {
    SEDAN = 1,  // ����
    SUV = 2,    // SUV
    TRUCK = 3,  // Ʈ��
    VAN = 4     // ��
};

int main() {
    // �� �ڵ��� ������ �� �迭 ����
    char* sedan[] = { "avante", "grander" };  // ���� �� �迭
    char* suv[] = { "santafe", "tucson" };    // SUV �� �迭
    char* truck[] = { "bongo", "porter" };    // Ʈ�� �� �迭
    char* van[] = { "starex", "caravan" };    // �� �� �迭

    char inputModel[30];  // ����ڷκ��� �Է¹��� �𵨸� ����
    int found = 0;        // ���� �´��� Ȯ���� �÷��� (�ʱⰪ: 0, ���� ã�� ���� ����)
    enum CarType carType; // �ڵ��� ������ ������ ����

    // �ڵ��� ������ �ش��ϴ� ���ڿ� �迭
    char* carTypeStrings[] = {"", "SEDAN", "SUV", "TRUCK", "VAN"};

    // ����ڷκ��� �𵨸� �Է� �ޱ�
    printf("�ڵ��� �𵨸��� �Է��ϼ���: ");
    scanf("%s", inputModel);

    // �Է¹��� �𵨸� �´� ���� ���� Ȯ��
    if (!found) {
        // ���� �� Ȯ��
        for (int i = 0; i < 2; i++) {
            if (strcmp(inputModel, sedan[i]) == 0) { // �𵨸��� ���� �迭�� ���� ���
                carType = SEDAN;  // �������� ����
                found = 1;        // ���� ã�����Ƿ� found�� 1�� ����
                break;            // �� �̻� �ٸ� ���� ã�� �ʿ� ����
            }
        }
    }
    
    if (!found) {
        // SUV �� Ȯ��
        for (int i = 0; i < 2; i++) {
            if (strcmp(inputModel, suv[i]) == 0) {  // �𵨸��� SUV �迭�� ���� ���
                carType = SUV;  // SUV�� ����
                found = 1;      // ���� ã�����Ƿ� found�� 1�� ����
                break;          // �� �̻� �ٸ� ���� ã�� �ʿ� ����
            }
        }
    }

    if (!found) {
        // Ʈ�� �� Ȯ��
        for (int i = 0; i < 2; i++) {
            if (strcmp(inputModel, truck[i]) == 0) { // �𵨸��� Ʈ�� �迭�� ���� ���
                carType = TRUCK;  // Ʈ������ ����
                found = 1;        // ���� ã�����Ƿ� found�� 1�� ����
                break;            // �� �̻� �ٸ� ���� ã�� �ʿ� ����
            }
        }
    }

    if (!found) {
        // �� �� Ȯ��
        for (int i = 0; i < 2; i++) {
            if (strcmp(inputModel, van[i]) == 0) { // �𵨸��� �� �迭�� ���� ���
                carType = VAN;  // ������ ����
                found = 1;      // ���� ã�����Ƿ� found�� 1�� ����
                break;          // �� �̻� �ٸ� ���� ã�� �ʿ� ����
            }
        }
    }

    if (!found) {
        // ���� ã�� ���� ���
        printf("�߸��� �𵨸��Դϴ�.\n");
    } else {
        // ���� ã�Ҵٸ� �ش� ���� ���� ���
        printf("�� ���� %s �Դϴ�.\n", carTypeStrings[carType]);
    }

    return 0;
}
