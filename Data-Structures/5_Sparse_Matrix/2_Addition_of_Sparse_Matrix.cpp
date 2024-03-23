#include <iostream>
#include <vector>
using namespace std;

class Element {
public:
    int i;
    int j;
    int x;
};

class Sparse {
public:
    int m = 0;
    int n = 0;
    int num = 0;
    vector<Element> eMat;

    void create() {
        cout << "Enter the number of rows: ";
        cin >> m;
        cout << "Enter the number of columns: ";
        cin >> n;
        cout << "Enter the number of non-zero elements: ";
        cin >> num;

        for (int i = 0; i < num; i++) {
            Element e;

            cout << endl;
            cout << "For element " << i + 1 << ": " << endl;
            cout << "Enter row, column, value: " << endl;
            cin >> e.i >> e.j >> e.x;

            eMat.push_back(e);
        }
    }

    void display() {
        int idx = 0;

        cout << endl;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (idx < num && i == eMat[idx].i && j == eMat[idx].j) {
                    cout << eMat[idx].x << " ";
                    idx++;
                } else {
                    cout << "0 ";
                }
            }
            cout << endl;
        }
    }
};

Sparse add(const Sparse& a, const Sparse& b) {
    Sparse res;
    int i = 0, j = 0;

    if ((a.m != b.m) || (a.n != b.n)) {
        cout << "Addition not possible." << endl;
        return res;
    }

    while (i < a.num && j < b.num) {
        if (a.eMat[i].i < b.eMat[j].i) {
            res.eMat.push_back(a.eMat[i]);
            i++;
        } else if (a.eMat[i].i > b.eMat[j].i) {
            res.eMat.push_back(b.eMat[j]);
            j++;
        } else {
            if (a.eMat[i].j < b.eMat[j].j) {
                res.eMat.push_back(a.eMat[i]);
                i++;
            } else if (a.eMat[i].j > b.eMat[j].j) {
                res.eMat.push_back(b.eMat[j]);
                j++;
            } else {
                Element e;
                e.i = a.eMat[i].i;
                e.j = a.eMat[i].j;
                e.x = a.eMat[i].x + b.eMat[j].x;
                res.eMat.push_back(e);
                i++;
                j++;
            }
        }
    }

    while (i < a.num) {
        res.eMat.push_back(a.eMat[i]);
        i++;
    }

    while (j < b.num) {
        res.eMat.push_back(b.eMat[j]);
        j++;
    }

    res.m = a.m;
    res.n = a.n;
    res.num = res.eMat.size();
    return res;
}

int main() {
    Sparse s1, s2;
    cout << "Sparse Matrix 1:" << endl;
    s1.create();
    cout << "Matrix 1:" << endl;
    s1.display();

    cout << "Sparse Matrix 2:" << endl;
    s2.create();
    cout << "Matrix 2:" << endl;
    s2.display();

    Sparse res = add(s1, s2);
    cout << "Resultant Matrix after addition:" << endl;
    res.display();

    return 0;
}
