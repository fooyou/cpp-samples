/**
 * @File Name: c.h
 * @Author: Joshua Liu
 * @Email: liuchaozhenyu@gmail.com
 * @Create Date: 2018-12-29 11:12:31
 * @Last Modified: 2018-12-29 14:12:54
 * @Description:
**/
#ifndef __C_H__
#define __C_H__

/*
 * 该 ifdef 允许该头文件同时被 C 或 Cpp 使用
 */
#ifdef __cplusplus
extern "C" {
#endif
    int f();
#ifdef __cplusplus
}
#endif

#endif /* __C_H__ */
