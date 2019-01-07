/**
 * @File Name: algorithm.cpp
 * @Author: Joshua Liu
 * @Email: liuchaozhenyu@gmail.com
 * @Create Date: 2018-12-29 20:12:46
 * @Last Modified: 2018-12-29 21:12:14
 * @Description:
**/
#include "common.hpp"

int main() {
    // # min
    // # max
    {
        assert(std::min(0.1, 0.2) == 0.1);
        assert(std::max(0.1, 0.2) == 0.2);
    }

    // # sort
    {
        std::vector<int> v{2, 0, 1};
        std::sort(v.begin(), v.end());
        std::vector<int> v1{0, 1, 2};
        assert((v == std::vector<int>{0, 1, 2}));
        assert((v == v1));
    }

    // # reverse
    {
        std::vector<int> v{2, 0, 1};
        std::reverse(v.begin(), v.end());
        assert((v == std::vector<int>{1, 0, 2}));
    }

    // # swap
    // 用于交换数据，如下：
    //      template <class T> void swap(T& a, T&b) {
    //          T c(a); a=b; b=c;
    //      }
    // 而 stdlib 有更高效的实现。
    // 一些 stdlib 类实现了 swap 方法
    // 尤其在 copy 和交换机制更加重要

    // # random_shuffle
    {
        std::vector<int> v{0, 1, 2};
        // random_shuffle C++ 17 已经移除
#if __cplusplus < 201703L
        std::random_shuffle(v.begin(), v.end());
#else
        std::random_device rd;
        std::mt19937 g(rd());
        std::shuffle(v.begin(), v.end(), g);
#endif
        std::copy(v.begin(), v.end(), std::ostream_iterator<int>(std::cout, " "));
        std::cout << std::endl;
    }

    // # sample
    {
        const std::vector<int> in = {1, 2, 3, 4, 5, 6, 7};
        std::vector<int> out;
        size_t nelems = 3;
        std::sample(in.begin(), in.end(), std::back_inserter(out), nelems, std::mt19937{std::random_device{}()});

        assert(out.size() == nelems);

        // 求集合交集
        std::vector<int> intersect;
        std::set_intersection(
                in.begin(), in.end(), out.begin(), out.end(),
                std::inserter(intersect, intersect.begin())
        );
        assert(intersect.size() == nelems);
    }
}
