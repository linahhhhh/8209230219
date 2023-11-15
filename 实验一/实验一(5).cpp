#include <stdio.h>

float fahrenheit_to_celsius(float fahrenheit) {
    return 5 * (fahrenheit - 32) / 9;
}

int main() {
    float fahrenheit, celsius;
    printf("请输入华氏温度：\n");
    scanf("%f", &fahrenheit);
    celsius = fahrenheit_to_celsius(fahrenheit);
    printf("输出的摄氏温度为：%.2f\n", celsius);
    return 0;
}