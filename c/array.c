/**
 * @File Name: array.c
 * @Author: Joshua Liu
 * @Email: liuchaozhenyu@gmail.com
 * @Create Date: 2018-12-29 21:12:45
 * @Last Modified: 2018-12-30 09:12:43
 * @Description:
 *  array
 *
 *      C 数组简单的说是在内存中紧紧排列多个数值
 *
 *      因为在内存中紧挨着，要得到第 n 个值很简单快捷（随机访问）
 *      除非是像，比如 linked list, 想搜索到数值需要跟踪多个 links
**/
#include "common.h"

void print_array(int **mat, int m, int n) {
    int i, j;
    for (i = 0; i < m; ++i) {
        for (j = 0; j < n; ++j) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    /* basic example. */
    {
        int is[3];
        is[0] = 0;
        is[1] = 1;
        is[2] = 2;
        assert(is[0] == 0);
        assert(is[1] == 1);
        assert(is[2] == 2);
    }

    /*
     * # 创建数组
     *
     * # 初始化数组
     */
    {
        /* 数字初始化 */
        int is[2];
        assert(sizeof(is) == 2 * sizeof(int));
        /* 未初始化的变量值在内存中是不定的 */
        /* assert(is[0] == 0); */
        /* assert(is[1] == 0); */
    }

    /* static 关键字初始化的默认值是 0 */
    {
        static int is[2];
        assert(is[0] == 0);
        assert(is[1] == 0);
    }

    /* 不指定长度的元素初始化 */
    {
        int is[] = {0, 1, 2};
        assert(sizeof(is) == 3 * sizeof(int));
    }

    /* 指定长度的元素初始化，元素个数少于长度 */
    /* TODO: 剩下的元素的初始值是否是 0？ */
    {
        int is[4] = {1, 2}; 
        assert(is[0] == 1);
        assert(is[1] == 2);
        assert(is[2] == 0);
        assert(is[3] == 0);
    }

    /* 但是空值初始化是非法的，但在 C++ 中是可以的 */
    {
        /* int is[2] = {}; */
    }

    /* 所以可以在声明的时候初始化数组 */
    {
        int is[2] = {0};
        assert(is[0] == 0);
        assert(is[1] == 1);
    }

    /* 初始化的元素数量多于声明长度时 */
    /* WARN: array too small */
    {
        int is[2] = {0, 1, 2, 3};
    }

    return EXIT_SUCCESS;
}
