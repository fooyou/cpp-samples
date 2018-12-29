/**
 * @File Name: cpp.h
 * @Author: Joshua Liu
 * @Email: liuchaozhenyu@gmail.com
 * @Create Date: 2018-12-29 14:12:56
 * @Last Modified: 2018-12-29 14:12:01
 * @Description:
**/
#ifndef __CPP_H__
#define __CPP_H__

#ifdef __cplusplus
// C 看不到这些额外类型，若看到的话 C 编译器会困惑
int f(int i);
int f(float i);
extern "C" {
#endif
int f_int(int i);
int f_float(float i);
#ifdef __cplusplus
}
#endif

#endif // __CPP_H__
