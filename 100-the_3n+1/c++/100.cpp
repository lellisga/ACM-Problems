#include <iostream>

using namespace std;

int counter(int n);
int cicle(int n);

int counter(int n){
  int count = 1;
  while (n > 1){
    n = cicle(n);
    count++;
  }
  return count;
}

int cicle(int n){
  if(n ==1)
    return 1;
  if(n%2 == 0)
    return n/2;
  else
    return 3*n+1;
}

int main(int arg,const char* args[]){
  int i,j,temp,cicle;
  i = atoi(args[1]);
  j = atoi(args[2]);
  temp = cicle = 0;
  for(;i<=j;i++){
    cicle = counter(i);
    temp = cicle > temp? cicle : temp;
  }
  
  cout<<args[1]<<" "<<args[2]<< " " <<temp<<endl;

  return 0;
}
