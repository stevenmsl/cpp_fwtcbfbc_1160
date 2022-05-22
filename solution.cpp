#include "solution.h"
#include "util.h"
#include <unordered_set>
#include <numeric>
#include <iterator>
#include <unordered_map>
#include <deque>
#include <string>
#include <sstream>
#include <algorithm>
#include <stack>
using namespace sol1160;
using namespace std;

/*takeaways
  - use a hash table to count the occurrences of each char
*/

int Solution::find(vector<string> &words, string chars)
{
  auto counts = unordered_map<char, int>();
  for (auto c : chars)
    counts[c]++;

  auto totalLen = 0;

  for (auto w : words)
  {
    auto canBe = true;
    auto cc = unordered_map<char, int>();
    for (auto c : w)
      if (!counts.count(c) || ++cc[c] > counts[c])
      {
        canBe = false;
        break;
      }
    if (canBe)
      totalLen += (int)w.size();
  }

  return totalLen;
}