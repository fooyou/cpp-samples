/**
 * @File Name: bool.cpp
 * @Author: Joshua Liu
 * @Email: liuchaozhenyu@gmail.com
 * @Create Date: 2018-12-28 23:12:34
 * @Last Modified: 2018-12-29 00:12:20
 * @Description:
**/
#include "common.hpp"

int main() {
    bool b;
    b = true;
    b = 1;

    if (true) {
        assert(true);
    }
    if (false) {
        assert(false);
    }

    {
        std::stringstream oss;
        oss << true;
        assert(oss.str() == "1");
    }

    {
        std::stringstream oss;
        oss << false;
        assert(oss.str() == "0");
    }
    return 0;
}
