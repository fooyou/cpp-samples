/**
 * @File Name: common.h
 * @Author: Joshua Liu
 * @Email: liuchaozhenyu@gmail.com
 * @Create Date: 2018-12-29 21:12:25
 * @Last Modified: 2018-12-29 21:12:30
 * @Description:
**/
#ifndef __COMMON_H__
#define __COMMON_H__

#include <assert.h>
#include <ctype.h>
#include <errno.h>
#include <fenv.h>
#include <float.h>
#include <inttypes.h> /* PRT x PRT, */
#include <iso646.h>
#include <limits.h> /* *_MAX, *_MIN for integer types */
#include <locale.h>
#include <setjmp.h> /* setjmp, longjmp */
#include <signal.h>
#include <stdbool.h>
#include <stdarg.h> /* ..., va_list, va_start, va_arg, va_end */
#include <stddef.h> /* offsetof, ptrdiff_t, size_t, type_t */
#include <stdlib.h> /* EXIT_SUCCESS, EXIT_FAILURE, malloc, rand, srand */
#include <stdio.h> /* printf, puts */
#include <string.h> /* sprintf, strlen, strcpy, memset, memcmp */
#include <math.h>
#include <time.h>
#include <wchar.h>

#if __STDC_VERSION__ >= 199901L
  /* GCC 5.2 尚不支持 */
# ifndef __STDC_NO_COMPLEX__
#   include <complex.h>
# endif
# if __STDC_VERSION__ >= 201112L
#   include <stdnoreturn.h>
#   ifndef __STDC_NO_THREADS__
#     include <threads.h>
#   endif
# endif
#endif


#endif /* __COMMON_H__ */
