#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int balls[45];
    int pick[6];
    srand(time(NULL));

    // 1~45 ������ �� ��ȣ�� �迭�� ����
    for (int i = 0; i < 45; i++) {
        balls[i] = i + 1;
    }

    // �迭�� ����
    for (int i = 0; i < 100; i++) {
        int index1 = rand() % 45;
        int index2 = rand() % 45;
        int pick = balls[index1];
        balls[index1] = balls[index2];
        balls[index2] = pick;
    }

    // �迭���� �տ������� 6���� �����Ͽ� ���
    for (int i = 0; i < 6; i++) {
        pick[i] = balls[i];
        cout << pick[i] << " ";
    }
    cout << endl;

    return 0;
}