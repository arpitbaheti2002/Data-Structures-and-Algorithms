#include<bits/stdc++.h>
using namespace std;

class Element {
  public:
    int i;
    int j;
    int x;
};

class Sparse {
  public:
    int m;
    int n;
    int num;
    vector<Element> eMat;

    void create() {
      cout<<"Enter the number of rows: ";
      cin>>m;
      cout<<"Enter the number of columns: ";
      cin>>n;
      cout<<"Enter the number of non-zero elements: ";
      cin>>num;

      for(int i=0; i<num; i++) {
        Element e;

        cout<<endl;
        cout<<"For element "<<i+1<<": "<<endl;
        cout<<"Enter row, column, value: "<<endl;
        cin>>e.i>>e.j>>e.x;

        eMat.push_back(e);
      }
    }

    void display() {
      int idx=0;

      cout<<endl;
      for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
          if(i==eMat[idx].i && j==eMat[idx].j){
            cout<<eMat[idx].x<<" ";
            idx++;
          }
          else {
            cout<<"0 ";
          }
        }
        cout<<endl;
      }
    }
};

int main() {
  Sparse s;
  s.create();
  s.display();
  

  return 0;
}