#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void hanoi(int n, char source, char destination, char auxiliary) {
    if (n == 1) {
        printf("Move disk 1 from %c to %c\n", source, destination);
        return;
    }
    // 將前 n-1 個盤子從來源柱移到輔助柱
    hanoi(n - 1, source, auxiliary, destination);
    // 將第 n 個盤子從來源柱移到目標柱
    printf("Move disk %d from %c to %c\n", n, source, destination);
    // 將前 n-1 個盤子從輔助柱移到目標柱
    hanoi(n - 1, auxiliary, destination, source);
}

int main(void) {
    int num_disks;

    printf("請輸入河內塔的盤子數量: ");
    if (scanf("%d", &num_disks) == 1 && num_disks > 0) {
        printf("\n--- 移動步驟如下 ---\n");
        hanoi(num_disks, 'A', 'C', 'B');
    }
    else {
        printf("輸入無效，盤子數量必須為大於 0 的整數！\n");
    }

    return 0;
}