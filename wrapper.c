#include <unistd.h>
int main(){
  char str[] = {"Welcome to Systems Porgramming \n"};
  int rv = write(1, str, sizeof str);
  return rv;
}

