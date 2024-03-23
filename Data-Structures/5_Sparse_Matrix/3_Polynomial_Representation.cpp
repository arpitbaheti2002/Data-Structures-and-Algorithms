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
    }
};

int main() {
  Polynomial p;

  p.create();
  p.display();
  return 0;
}