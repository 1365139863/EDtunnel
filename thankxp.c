#include <stdio.h>

int main() {
    int height, i, j, k;
    
    printf("请输入金字塔的高度: ");
    scanf("%d", &height);
    
    for(i = 1; i <= height; i++) {
        // 打印空格
        for(j = 1; j <= height - i; j++) {
            printf(" ");
        }
        
        // 打印星号
        for(k = 1; k <= 2 * i - 1; k++) {
            printf("*");
        }
        
        // 换行
        printf("\n");
    }
    
    return 0;
}