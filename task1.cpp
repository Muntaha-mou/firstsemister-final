#include<iostream>
#include<string.h>
using namespace std;
class samp
{
private:
    int i;
public:
    samp(int a)
    {
        i=a;
    }
    int get_i()
    {
        return i;
    }
};
int sqr_it(samp b,samp c)
{
    int sum=b.get_i()+c.get_i();
    return sum*sum;
}
int main()
{
    samp b(5),c(6);
    cout<<"square of sum="<<sqr_it(b,c)<<endl;
    return 0;
}
