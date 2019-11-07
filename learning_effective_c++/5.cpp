#include<string>

template<typename T>
class NameObject{
public:
    //NameObject(const char *name, const T &value) : nameValue(name), objectValue(value){};
    NameObject(const std::string &name, const T &value):nameValue(&name), objectValue(value){};

private:
    std::string& nameValue;
    T objectValue;
};

/**
class NameObjectConst{
public:
    NameObject(const char *name) 
}
**/
int main()
{
    NameObject<int> no1("smallest prime number", 2);
    NameObject<int> no2 = no1;
    NameObject<int> no3("biggest prime number", 3);
    no3 = no1;
}