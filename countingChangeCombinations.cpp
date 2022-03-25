#include <vector>
using namespace std;

unsigned long long countChange(const unsigned int money, const std::vector<unsigned int>& coins) {
  vector<unsigned long long> arr;
  for (unsigned int i = 0; i <= money; i++)
  {
    arr.push_back(0);
  }
  arr[0] = 1;

  for (int i = 0; i < coins.size(); i++)
  {
    for (int j = coins[i]; j < arr.size(); j++)
    {
      arr[j] += arr[j - coins[i]];
    }
  }

  return arr[money];
}