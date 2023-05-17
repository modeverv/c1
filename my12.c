#include <stdio.h>

int main(void){

    int aa = 3, bb = 5;
    aa = bb / 2;
    printf("a = %d | b = %d\n", aa, bb);

    int x = 4;
    printf("%d\n", 9 % x);
    double a =4.4;
    int b =2;
    printf("%.2f\n", (double)a/b);


    // 名字の頭文字を入力してもらう。
    char initial;
    printf("initial of your name >");
    scanf("%c", &initial);
    // 年齢を整数で入力してもらう。
    int age;
    printf("your age > ");
    scanf("%d", &age);
    // 身長を小数で入力してもらう。
    double height;
    printf("your height > ");
    scanf("%lf", &height);
    // 入力されたデータをもとに、“○さんの年齢は○○歳、身長は○○○.○cmです。”と表示する。身長は小数第1位まで表示する。
    printf("%cさんの年齢は%d歳、身長は%.1fcmです。\n", initial, age, height);

    return 0;
}