#include <stdio.h>
#include <stdlib.h>

int question1(int num);
int question5(int num);
int question6(int num);

int main() {
  printf("Answer to problem 1 is %d \n",question1(1000));
  printf("Answer to problem 5 is %d \n", question5(20));
  printf("Answer to problem 6 is %d \n",question6(100));
}

int question1(int num){
  int ans = 0;
  int x = 0;
  for (x=0; x < num; x++){
    if (x % 3 == 0 || x % 5 == 0){
      ans += x;
    }
  }
  return ans;
}

int question5(int num){
  int ans = 1;
  int found = 0;
  int x = 1;
  while (!found){
    x = 1;
    for (x = 1; x <= num; x++){
      if (ans % x != 0){
        x = num + 2;
        ans++;
      }
    }
    if (x == num + 1){
      found = 1;
    }
  }
  return ans;
}

int question6(int num){
  int sum = 0;
  int squaresum;
  int x = 0;
  for (x=0; x <= num; x++){
    sum += x;
    squaresum += x * x;
  }
  return squaresum - sum * sum;
}
