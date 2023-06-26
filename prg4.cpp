#include <iostream>
using namespace std;

class NUM {
private:
    int n;

public:
  
    void getNum(int x)
    {
        n = x;
    }
   
    void dispNum(void)
    {
        cout << "value of n is: " << n;
    }
    
    void operator++(void)
    {
        n = ++n;
    }
  
    void operator--(void)
    {
        n = --n;
    }
};

int main()
{
    NUM obj;
    obj.getNum(10);

    ++obj;

    obj.dispNum();
    cout << endl;

    --obj;

    obj.dispNum();
    cout << endl;

    return 0;
}
