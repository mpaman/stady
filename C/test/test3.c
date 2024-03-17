
#include <stdio.h>
int solveinput(int n, int arr[]) {
    int a;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        a+=arr[i];
    }
  return a=sum(arr);
  
}

int main() {
  int n;
  scanf("%d",&n);
  int num1[n];
  int sum;
  sum = solveinput(n,num1);

  printf("%d",sum);
  
  return 0;
}
