**unordered_map知识点**（49）

引用头文件(C++11)：#include <unordered_map>
定义：unordered_map<int,int>、unordered_map<string, double> ...
插入：例如将("ABC" -> 5.45) 插入unordered_map<string, double> hash中，hash["ABC"]=5.45
查询：hash["ABC"]会返回5.45
判断key是否存在：hash.count("ABC") != 0 或 hash.find("ABC") != hash.end()
遍历
for (auto &item : hash)
{
    cout << item.first << ' ' << item.second << endl;
}
或

for (unordered_map<string, double>::iterator it = hash.begin(); it != hash.end(); it ++ )
{
    cout << it->first << ' ' << it->second << endl;
}
