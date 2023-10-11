#include<iostream>
using namespace std;

template<class T>
class Arithmetic
{
    T a;
    T b;
  public:
    Arithmetic(T a, T b);
    T add();
    T sub();
};

template<class T>
Arithmetic<T> :: Arithmetic(T a, T b)
{
    this->a = a;
    this->b = b;
}

template<class T>
T Arithmetic<T> :: add()
{
    T c;
    c = a+b;
    return c;
}

template<class T>
T Arithmetic<T> :: sub()
{
    T c;
    c = a-b;
    return c;
}

int main()
{
  Arithmetic<int> t1(5, 7);
  cout<<t1.add()<<endl;
  cout<<t1.sub()<<endl;
  cout<<endl;

  Arithmetic<float> t2(5.2, 3.1);
  cout<<t2.add()<<endl;
  cout<<t2.sub()<<endl;
  cout<<endl;
  return 0;
}