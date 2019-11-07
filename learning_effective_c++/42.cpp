#include<iostream>
template <class T>
class student;

template <typename T>
class pupil;

template<typename C>
void print2nd(const C& container)
{
    if (container.size() >=2){
        C::const_iterator iter(container.begin());
        ++iter;
        int value = *iter;
        std::cout << value;
    }
}