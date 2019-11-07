#include<iostream>

class Uncopyable{
protected:
    Uncopyable(){}
    ~Uncopyable(){}
private:
    Uncopyable(const Uncopyable &);
    Uncopyable& operator = (const Uncopyable&);
};

class HomeForSale:private Uncopyable{
private:
    HomeForSale(const HomeForSale &);
    HomeForSale &operator=(const HomeForSale &);
};

int main(){
    HomeForSale a;
    std::cout << a<< std::endl;
}