**unordered_map知识点**（49）

1.引用头文件(C++11)：#include <unordered_map>

2.定义：unordered_map<int,int>、unordered_map<string, double> ...

3.插入：例如将("ABC" -> 5.45) 插入unordered_map<string, double> hash中，hash["ABC"]=5.45

4.查询：hash["ABC"]会返回5.45

5.判断key是否存在：hash.count("ABC") != 0 或 hash.find("ABC") != hash.end()

6.遍历
for (auto &item : hash)
{
    cout << item.first << ' ' << item.second << endl;
}
或

for (unordered_map<string, double>::iterator it = hash.begin(); it != hash.end(); it ++ )
{
    cout << it->first << ' ' << it->second << endl;
}
