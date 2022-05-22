#include <iostream>
#include <vector>
#include <string>
#include <tuple>
#include <unordered_map>
#include "solution.h"
#include "util.h"

using namespace std;
using namespace sol1160;

/*
Input: words = ["cat","bt","hat","tree"], chars = "atach"
Output: 6
Explanation:
The strings that can be formed are "cat" and "hat" so the answer is 3 + 3 = 6.
*/

tuple<vector<string>, string, int>
testFixture1()
{
  auto input = vector<string>{"cat", "bt", "hat", "tree"};
  return make_tuple(input, "atach", 6);
}

/*
Input: words = ["hello","world","leetcode"], chars = "welldonehoneyr"
Output: 10
Explanation:
The strings that can be formed are "hello" and "world" so the answer is 5 + 5 = 10.
*/

tuple<vector<string>, string, int>
testFixture2()
{
  auto input = vector<string>{"hello", "world", "leetcode"};
  return make_tuple(input, "welldonehoneyr", 10);
}

void test1()
{
  auto f = testFixture1();
  cout << "Expect to see: " << get<2>(f) << endl;
  Solution sol;
  cout << sol.find(get<0>(f), get<1>(f)) << endl;
}

void test2()
{
  auto f = testFixture2();
  cout << "Expect to see: " << get<2>(f) << endl;
  Solution sol;
  cout << sol.find(get<0>(f), get<1>(f)) << endl;
}

main()
{
  test1();
  test2();
  return 0;
}