/**
 * @File Name: abs.c
 * @Author: Joshua Liu
 * @Email: liuchaozhenyu@gmail.com
 * @Create Date: 2018-12-29 21:12:18
 * @Last Modified: 2018-12-29 21:12:40
 * @Description:
**/
#include "common.h"

int main() {
    assert(abs(-1) == 1);

    {
#ifdef UNDEFINED_BEHAVIOUR
        printf("abs(INT_MIN) = 0x%x\n", abs(INT_MIN));
        printf("INT_MIN      = 0x%x\n", INT_MIN);
#endif
    }
    return EXIT_SUCCESS;
}
