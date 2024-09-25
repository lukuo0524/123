#include <stdio.h>  
#include <stdlib.h> // 引入stdlib.h以使用rand()和srand()  
#include <time.h>   // 引入time.h以使用time()  
  
int main() {  
    // 初始化随机数种子  
    srand((unsigned)time(NULL));  
  
    // 定义一个整型数组  
    int numbers[10];  
  
    // 使用随机数填充数组  
    for(int i = 0; i < 10; i++) {  
        // 生成一个0到99之间的随机数  
        numbers[i] = rand() % 100;  
    }  
  
    // 打印数组  
    printf("无序数组:\n");  
    for(int i = 0; i < 10; i++) {  
        printf("%d ", numbers[i]);  
    }  
    printf("\n");  
  
    return 0;  
}