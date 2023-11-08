#pragma once
#include <iostream>
#include<deque>
using namespace std;
namespace cbb123
{
    template<class T, class Con = deque<T>>
    class Stack
    {
    public:
        Stack() = default;

        void push(const T& x)
        {
            _c.push_back(x);
        }

        void pop()
        {
            _c.pop_back();
        }

        T& top()
        {
            return _c[_c.size() - 1];
        }

        const T& top()const
        {
            return _c[_c.size() - 1];
        }

        size_t size()const
        {
            return _c.size();
        }

        bool empty()const
        {
            return _c.empty();
        }

    private:

        Con _c;

    };
}