#include<bits/stdc++.h>
using namespace std;

class Polynomial {
  public:
    int deg;
    map<int, int> mp;

    void create() {
      cout<<"Enter the degree of the polynomial: ";
      cin>> deg;

      int n=deg;
      while(n>=0) {
        int temp;

        cout<<"Enter coefficient of x^"<<n<<" = ";
        cin>>temp;

        if(temp != 0) {
          mp[n] = temp;
        }

        n--;
      }
    }

    void display() {
      int n=deg;
      while(n>=0) {
        cout<<mp[n]<<" x^"<<n;

        if(n!=0) 
          cout<<" + ";

        n--;
      }
      cout<<endl;
    }
};

Polynomial add(Polynomial &p1, Polynomial &p2) {
  Polynomial res;
  res.deg = max(p1.deg, p2.deg);

  int n=res.deg; 
  while (n>=0)
  {
    int temp = p1.mp[n] + p2.mp[n];

    if(temp != 0) {
      res.mp[n] = temp;
    }

    n--;
  }
  
  return res;
}

int main() {
  Polynomial p1;
  p1.create();
  p1.display();

  Polynomial p2;
  p2.create();
  p2.display();

  Polynomial p3 = add(p1, p2);
  p3.display();

  return 0;
}