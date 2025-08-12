#include <string.h>

int main() {
    char str1[] = "Hello, World!";
    char str2[] = "Hello, World!";
    
    // 使用 strcmp 比较两个字符串
    int result = strcmp(str1, str2);
    
    if (result == 0) {
        // 字符串相等
    } else if (result < 0) {
        // str1 小于 str2
    } else {
        // str1 大于 str2
    }
    
    return 0;
}