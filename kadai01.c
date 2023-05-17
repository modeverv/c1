#include <stdio.h>

#define LINE_NUM 10

int get_offset(int);

void print_space(int);

void print_o(int);

void print_nl();

int main(void) {
    for (int i = 0; i < LINE_NUM; i++) {
        // スペースを書いて
        print_space(i);
        // oを書いて
        print_o(i);
        // 改行して終わり
        print_nl();
    }
    return 0;
}

/**
 * 各行のオフセットをえる
 * @param line_num 行数
 * @return オブセット値
 */
int get_offset(int line_num) {
    // オフセットは行数 - 現在行 - 1
    return LINE_NUM - line_num - 1;
}

/**
 * スペースを書く
 * @param line_num 行数
 */
void print_space(int line_num) {
    int i;
    int count = get_offset(line_num);
    // オブセット分スペースを書く
    for (i = 0; i < count; i++) {
        printf(" ");
    }
}

/**
 * oを書く
 * @param line_num 行数
 */
void print_o(int line_num) {
    // oを書く回数は 1,3,5,7,9,11... 2n+1
    int limit = 2 * line_num + 1;
    for (int i = 0; i < limit; i++) {
        printf("o");
    }
}

/**
 * 改行を書く
 */
void print_nl() {
    printf("\n");
}


/*
 期末課題 B-2 二等辺三角形

 各行では 作成する行数 - 現在行数 - 1個のスペースを書く(ループは0から回す)
 各行では 現在行数をnとして2n+1個のoを書く
 各行では上記が終わると改行する
 mainで上記を行数分繰り返す
 */