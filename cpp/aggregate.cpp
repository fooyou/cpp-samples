/**
 * @File Name: aggregate.cpp
 * @Author: Joshua Liu
 * @Email: liuchaozhenyu@gmail.com
 * @Create Date: 2018-12-29 10:12:56
 * @Last Modified: 2018-12-29 11:12:11
 * @Description:
 *      聚合的初始化
**/
#include "common.hpp"

int main() {
    {
        struct C {
            int i;
            int j;
        };

        struct D {
            int i;
            int j;
            C c;
        };

#if __cplusplus >= 201703L
        static_assert(std::is_aggregate<C>());
        static_assert(std::is_aggregate<D>());
#endif

        // 和 C struct 很像
        {
            C c{1, 2};
            assert(c.i == 1);
            assert(c.j == 2);
        }

        // 又和 C struct 很像
        {
            C c{1};
            assert(c.i == 1);
            assert(c.j == 0);
        }

        // 有sub-struct 时也和C很像
        {
            D d{1, 2, {3, 4}};
            assert(d.i == 1);
            assert(d.j == 2);
            assert(d.c.i == 3);
            assert(d.c.j == 4);
        }

        // 有 private 成员时，就不再是 aggregate 类型了
        {
            struct E {
                private:
                    int i;
                    int j;
            };
#if __cplusplus >= 201703L
            static_assert(!std::is_aggregate<E>());
#endif
            // Error: 无响应构造函数
            //E e{1, 2};

            // 是 POD 并不意味着是 aggregate
            static_assert(std::is_pod<E>());
        }
    }
}
