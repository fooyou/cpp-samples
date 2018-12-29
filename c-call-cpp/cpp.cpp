/**
 * @File Name: cpp.cpp
 * @Author: Joshua Liu
 * @Email: liuchaozhenyu@gmail.com
 * @Create Date: 2018-12-29 14:12:55
 * @Last Modified: 2018-12-29 14:12:25
 * @Description:
**/
#include "cpp.h"

int f(int i) {
    return i + 1;
}

int f(float i) {
    return i + 2;
}

int f_int(int i) {
    return f(i);
}

int f_float(float i) {
    return f(i);
}
