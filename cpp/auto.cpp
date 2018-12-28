/**
 * @File Name: auto.cpp
 * @Author: Joshua Liu
 * @Email: liuchaozhenyu@gmail.com
 * @Create Date: 2018-12-29 00:12:20
 * @Last Modified: 2018-12-29 01:12:55
 * @Description:
 *  auto
 *      C++11 关键字
 *      和 C 无用的 `auto` 关键字意义完全不同
 *      变量类型是根据初始化时的返回值推断出的
 *      可减少代码重复，因为它允许我们不用到处显示声明变量类型
 *      主要应用：创建不用声明容器类型的迭代器
**/

#include "common.hpp"

int main() {
#if __cplusplus >= 201103L
    // 基本使用
    {
        // 编译器在 i 初始化时推断其类型
        auto i = 1;
        assert(typeid(i) == typeid(int));
    }

    // 不要在一个声明里声明不同类型的变量
    {
        // Error: 类型不一致
        {
            //auto
            //    i = 1,
            //    s = std::string("abc")
            //;
        }

        // OK: 单一类型
        {
            auto
                i = 1,
                j = 2
            ;
            assert(typeid(i) == typeid(int));
            assert(typeid(j) == typeid(int));
        }
    }

    // 引用
    {
        int i = 1;
        auto& ai = i;
        ai = 2;
        assert(i == 2);
    }

    // Error: 必须马上初始化，否则如何推断其类型
    {
        //auto i;
        //i = 1;
    }

    // 如果从引用初始化，会丢弃引用，而会保留引用类型
    {
        int i = 0;
        int& ir = i;
        auto ir2 = ir;
        ir2 = 1;
        assert(i == 0);
        assert(typeid(ir2) == typeid(int));
    }

    // 不能声明数组
    {
        //auto as[]{1, 0};
    }
#endif
}
