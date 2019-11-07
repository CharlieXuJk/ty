struct Day{
    explicit Day(int d) : val(d){}
    int val;
};

struct Month{
    explicit Month(int m): val(m){}
    int val;
};

struct Year{
    explicit Year(int y) : val(y){}
    int val;
};

class Date
{
public:
    Date(const Month& m, const Day& d,const Year& y);
};


int main(){
    Date d1(30, 3, 1995);
    Date d2(2, 30, 1995);
    Date d3(Month(3), Day(30), Year(1995));
}