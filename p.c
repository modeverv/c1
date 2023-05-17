#include <stdio.h>
#include <math.h>

int func1(int a, int b)
{
    int c, i;
    for (c = 0, i = 0; i < b; ++i)
    {
        c += a;
    }
    return c;
}

int func2(int w, int m)
{
    return w >= (m ? 85 : 90);
}

void func3(void)
{
    printf("A");
}
void func4(void)
{
    printf("B");
}

void func_a(void)
{
    printf("a ");
}

void func_b(void)
{
    func_a();
    printf("b ");
}

int is_prime2(int a)
{
    int b, f, i;
    for (b = (int)sqrt((double)a), f = 1, i = 2  ; i <= b; ++i)
    {
        if (a % i == 0)
        {
            f = 0;
            break;
        }
    }
    return f;
}

int func22(int a, int b)
{
    int c;
    if (a < b)
    {
        c = a;
        a = b;
        b = c;
    }
    c = a * 2;
    return c;
}

#define N_MAX 40

int main(void)
{
//    printf("%d\n", func2(88,1));
//    func4();
//    printf("C");
//    func3();

//    printf("is_prime? %d \n", is_prime2(4));


//    func_b();
//    printf("m ");
//    func_a();

    int n, i;
    printf("正の整数を入力してください > ");
    scanf("%d", &n);
    /* ここにif文を記述 */
    for (i = 0; i <= n; ++i)
    {
        // 3で割り切れない、かつ7でも割り切れない 21
        if (i % 3 && i % 7)
        {
            printf("%d ", i);
        }
    }
    printf("\n");


    return 0;
}

/**
 * (ア) と (ウ)
 * height < 175
 * !x || !y
 *  !(x <= 3 && y > 5)
* (gender == 'M' && age == 5) || (gender == 'F' && (age == 3 || age == 7))
 * ooooooooooo
   oooooooooo
   oooooooooo
*/