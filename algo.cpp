#include<iostream>
#include<vector>
using namespace std;


void print(vector <int> const &a) {
   cout << "The vector elements are : ";

   for(int i=0; i < a.size(); i++)
   cout << a.at(i) << ' ';
}

int main() {
   vector<int> a = {2,4,3,5,6};
   print(a);
   return 0;
}