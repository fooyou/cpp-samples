/**
 * @File Name: array.cpp
 * @Author: Joshua Liu
 * @Email: liuchaozhenyu@gmail.com
 * @Create Date: 2018-12-29 10:12:31
 * @Last Modified: 2018-12-29 10:12:36
 * @Description:
 *  std::array
 *      尽量使用 std::array，不要使用原始 array
**/

#include "common.hpp"

int main() {
    std::array<int, 3> a{0, 1, 2};

    assert(a.size() == 3);

    // Note: 无隐式边界检查
    std::cout << a[0] << a[4] << a[10] << std::endl;

    // 但也有好处，它知道数组长度
    // 比如：operator== comparison
    assert((std::array<int, 3>{1, 2, 3} == std::array<int, 3>{1, 2, 3}));
    // assert((std::array<int, 3>{1, 2, 3} == a));

    // 不能在初始化的时候推断长度
    // std::array<int> a{1, 2, 3};

    // 也没有构造的好处
    //std::array<int, 3>(24);
    static_assert(std::is_pod<std::array<int, 1>>());
}
