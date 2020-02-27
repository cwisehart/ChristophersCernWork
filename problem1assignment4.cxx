#include <iostream>
using namespace std;

#define MAX 4000000
int fibo(int n);

int main()
{
  int sum = 0;

  for (int i = 1;; i++)
    {
      int fn = fibo(i);
      if (fn % 2 == 0 && fn < MAX)
	sum += fn;
      if (fn>=MAX)
	break;
    }
  cout << "Answer: " << sum << endl;
  return 0;
}
int fibo(int n){
  if (n == 1)
    return 1;
  else if (n == 2)
    return 2;
  else{
    int f0 = 1;
    int f1 = 2;
    int fn;
    for (int i=2;i<n; i++)
      {
	fn = f0+f1;
	f0 = f1;
	f1 = fn;
      }
    return fn;
}
}
