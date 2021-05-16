#include <stdio.h>
#include <stdlib.h>
/*
 * 插入排序算法，可以想象有桌面上有一副扑克牌，每次从桌面上拿一张，
 * 然后放到手里边去，每次拿牌的时候，都会与手里的牌对比一下，如果手里的牌比拿起来的牌大，
 * 手里的牌会左移，直到找到合适的位置，直接把这个牌放进去
 */
void InsertSort(int arr[], int arrLen)
{
    int i = 0; /* 手里的牌 */
    int k; /* 存储一下从桌上拿到的牌 */
    /* 每次拿一张牌 */
    for (int j = 1; j < arrLen; j++) {
        i = j - 1;
        k = arr[j];
        /* 对比牌，比k大，就右移，给k腾位置 */
        while ((i >= 0) && (arr[i] > k)) {
            arr[i + 1] = arr[i];
            i--;
        }
        /* 找到k的位置，直接赋值 */
        arr[i + 1] = k;
    }
}
