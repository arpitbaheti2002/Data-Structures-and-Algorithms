#include<bits/stdc++.h>
using namespace std;

// Pairs
void explainPair() {
  pair<int, int> p1 = {1, 3};
  cout<< p1.first <<" "<< p1.second<<endl;

  pair<int, pair<int, int>> p2 = {1, {3, 4}};
  cout<< p2.first <<" "<< p2.second.first <<" "<< p2.second.second <<endl; 
  
  pair<int, int> p3[] = {{1, 2}, {3, 4}, {5, 6}};
  cout<< p3[1].first <<" "<< p3[1].second <<endl; 
}

// Vector
void explainVector() {
  vector<int> v1;
  v1.push_back(1);
  v1.emplace_back(2);      // emplace_back is faster than push_back

  vector<pair<int, int>> vec;
  vec.push_back({1, 2});
  vec.emplace_back(3, 4);

  vector<int> v2(5, 100);

  vector<int> v3(5);

  vector<int> v4(v2);

  vector<int>::iterator it = v2.begin();

  it++;
  cout<<*(it)<<" ";
  it = it + 2;
  cout<<*(it)<<" "<<endl;

  vector<int>::iterator it1 = v2.begin();
  vector<int>::iterator it2 = v2.end();
  // vector<int>::iterator it3 = v2.rend();
  // vector<int>::iterator it4 = v2.rbegin();

  cout<<v2[0]<<" "<<v2[1]<<endl;
  cout<<v2.back()<<endl;

  for(vector<int>::iterator it = v2.begin(); it != v2.end(); it++)
  {
    cout<<*(it)<<" ";
  }
  cout<<endl;

  for(auto it = v2.begin(); it != v2.end(); it++)
  {
    cout<<*(it)<<" ";
  }
  cout<<endl;

  for(auto it : v2)
  {
    cout<<it<<" ";
  }
  cout<<endl;

  // erase
  vector<int> v5({10,20,12,23});
  v5.erase(v5.begin()+1);    //  {10,12,23}
  v5.erase(v5.begin()+1, v5.begin()+3);  // {10}

  // insert function
  vector<int> v6(2, 100);     // {100, 100}
  v6.insert(v6.begin(), 300);     // {300, 100, 100}
  v6.insert(v6.begin()+1, 2, 10);     // {300, 10, 10, 100, 100}

  v6.insert(v6.begin(), v1.begin(), v1.end());     // {1, 2, 300, 10, 10, 100, 100}

  cout<<v6.size()<<endl;

  v6.pop_back();

  v6.clear();

  cout<<v6.empty()<<endl;
}


void explainList()
{
  list<int> ls;

  ls.push_back(2);
  ls.emplace_back(4);

  ls.push_front(5);
  ls.emplace_front(6);

  for(auto it: ls)
  {
    cout<<it<<", ";
  }
  cout<<endl;

  // rest functions same as vector
  // begin, end, clear, insert, size, swap
}

void explainDeque() {
  deque<int> dq;

  dq.push_back(1);
  dq.emplace_back(2);
  dq.push_front(4);
  dq.emplace_front(3);

  dq.pop_back();
  dq.pop_front();

  dq.back();
  dq.front();

  // rest functions same as vector
  // begin, end, clear, insert, size, swap
}

void explainStack()
{
  stack<int> st;

  st.push(1);
  st.push(2);
  st.push(3);
  st.push(3);
  st.emplace(5);

  cout<<st.top()<<endl;   // 5
  st.pop();   // 3,3,2,1

  cout<<st.top()<<endl;
  cout<<st.size()<<endl;
  cout<<st.empty()<<endl;

  stack<int> st1, st2;
  st1.swap(st2);
}

void explainQueue()
{
  queue<int> q;

  q.push(1);
  q.push(2);
  q.emplace(4);     // {1,2,4}

  q.back() += 5;
  cout<<q.back()<<endl;   // 9

  cout<<q.front()<<endl;  // 1
  q.pop();
  cout<<q.front()<<endl;  // 2

  // size, swap, empty same as stack
}

void explainPQ()
{
  priority_queue<int> pq1;

  pq1.push(5);   //{5}
  pq1.push(2);   //{5, 2}
  pq1.push(8);   //{8, 5, 2}
  pq1.emplace(10);   //{10, 8, 5, 2}

  cout<<pq1.top()<<endl;   // 10
  
  pq1.pop();       //{8, 5, 2}
  cout<<pq1.top()<<endl;   // 8

  // size, swap, empty same as others

  // Minimum Heap
  priority_queue<int, vector<int>, greater<int>> pq2;
  pq2.push(5);      // {5}
  pq2.push(2);      // {2, 5}
  pq2.push(8);      // {2, 5, 8}
  pq2.emplace(10);  // {2, 5, 8, 10}

  cout<<pq2.top()<<endl;   // 2
}

void explainSet()
{
  set<int> st;
  st.insert(1);       // {1}
  st.emplace(2);      // {1,2}
  st.insert(2);       // {1,2}
  st.insert(4);       // {1,2,4}
  st.insert(3);       // {1,2,3,4}

  // Functionality of insert in vector can be used also,
  // that only increases efficiency

  // begin(), end(), rbegin(), rend(), size(), empty() and swap()
  // are same as those of above

  // {1, 2, 3, 4}
  auto it1 = st.find(3);
  
  // {1, 2, 3, 4}
  auto it2 = st.find(6);         // returns st.end()

  st.erase(4);      // erases 4 - takes logarithmic time

  int cnt = st.count(1);      // since set contains unique. It returns 1 if 1 exists

  st.insert(4);
  st.insert(5);
  st.insert(6);

  // {1,2,3,4,5,6}
  auto it3 = st.find(3);
  st.erase(it3);               // it takes constant time
  // {1,2,4,5,6}

  auto it4 = st.find(2);
  auto it5 = st.find(5);
  st.erase(it4, it5);
  // {1,5,6}
  
  auto it6 = st.lower_bound(5);
  auto it7 = st.upper_bound(6);
}

void explainMultiSet()
{
  // Everything is same as set
  // only stores duplicates elements also

  multiset<int> ms;

  ms.insert(1);   // {1}
  ms.insert(1);   // {1,1}
  ms.insert(1);   // {1,1,1}
  ms.insert(2);   // {1,1,1,2}
  ms.insert(2);   // {1,1,1,2,2}
  ms.insert(2);   // {1,1,1,2,2,2}
  ms.insert(2);   // {1,1,1,2,2,2,2}

  ms.erase(1);    // all 1's erased

  int cnt = ms.count(2);

  // erase a single 2
  ms.erase(ms.find(2));

  // erase two occurrences of 2
  ms.erase(ms.find(2), std::next(ms.find(2), 2));

  // Print the elements of multiset
  for (auto elem : ms) {
    cout << elem << " ";
  }
  cout << endl;
}

void explainUSet()
{
  unordered_set<int> st;
  // lower_bound and upper_bound function does not works,
  // rest all functions are same as above, it does not stores
  // in any particular order it has a better complexity than 
  // set in most cases, except some when collision happens
}

void explainMap()
{
  map<int, int> mpp1;
  map<int, pair<int, int>> mpp2;
  map<pair<int, int>, int> mpp3;

  mpp1[1] = 2;
  mpp1.emplace(3, 1);
  mpp1.insert({2, 4});

  mpp3[{2,3}] = 10;

  for(auto it: mpp1)
  {
    cout<<it.first<<" "<<it.second<<endl;
  }

  cout<<mpp1[1]<<endl;
  cout<<mpp1[5]<<endl;

  auto it1 = mpp1.find(3);

  auto it2 = mpp1.lower_bound(2);
  auto it3 = mpp1.upper_bound(3);

  // erase, swap, size, empty, are same as above
}

void explainMultiMap()
{
  // everything same as map, only it can store multiple keys
  // only mpp[key] cannot be used here
}

void explainUnorderedMap()
{
  // same as set and unordered_Set difference
}

bool comp(pair<int, int> p1, pair<int, int> p2)
{
  if(p1.second < p2.second) return true;
  if(p1.second > p2.second) return false;

  if(p1.first > p2.first) return true;
  return false;
}

void explainAlgo()
{
  vector<int> v({3,1,4,5,2});
  
  // sort complete array
  sort(v.begin(), v.end());

  // sort partially
  sort(v.begin()+2, v.begin()+4);

  // sort in descending
  sort(v.begin(), v.end(), greater<int>());

  pair<int, int> a[] = {{1,2}, {2,1}, {4,1}};
  // custom sort: (making comparator function)
  // sort it according to second element
  // if second element is same, then sort
  // it according to first element but in descending
  
  sort(a, a+3, comp);
  // {4,1}, {2,1}, {1, 2}

  int num = 7;
  int cnt1 = __builtin_popcount(num);      // returns the number of set bits in the number
  cout<<cnt1<<endl;

  long long numl = 165786578687;
  int cnt2 = __builtin_popcountll(numl);
  cout<<cnt2<<endl;

  string s="123";
  sort(s.begin(), s.end());

  do{
    cout<<s<<endl;
  } while(next_permutation(s.begin(), s.end()));

  int maxi = *max_element(v.begin(), v.end());
  cout<<maxi<<endl;
}

int main()
{
  // explainPair();
  // explainVector();
  // explainList();
  // explainDeque();
  // explainStack();
  // explainQueue();
  // explainPQ();
  // explainSet();
  // explainMultiSet();
  // explainUSet();
  // explainMap();
  // explainMultiMap();
  // explainUnorderedMap();
  // explainAlgo();

  return 0;
}