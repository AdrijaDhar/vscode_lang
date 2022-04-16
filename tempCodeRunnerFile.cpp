#include <bits/stdc++.h>
using namespace std;

void solve(int t)
{
  int n;
  cin >> n;
  int *arr = new int[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  sort(arr, arr + n);

  cout << "Case #" << t << ": ";
  bool dice = false;
  for (int i = 1; i <= n; i++)
  {
    if (i > arr[i-1])
    {
      cout << i-1 << endl;
      dice = true;
      break;
    } 
  }
  if (!dice)
  {
    cout << n << endl;
  }
  

 
}

int main()
{
  

  int t;
  cin >> t;
  for (int i = 0; i < t; i++)
  {
    solve(i + 1);
  }
  return 0;
}