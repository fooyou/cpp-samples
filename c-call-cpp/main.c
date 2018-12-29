/**
 * @File Name: main.c
 * @Author: Joshua Liu
 * @Email: liuchaozhenyu@gmail.com
 * @Create Date: 2018-12-29 14:12:43
 * @Last Modified: 2018-12-29 14:12:52
 * @Description:
**/
#include <assert.h>
#include "cpp.h"

int main() {
    assert(f_int(1) == 2);
    assert(f_float(1.0) == 3);
    return 0;
}
