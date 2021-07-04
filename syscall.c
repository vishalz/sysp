#include <unistd.h>
#include <sys/syscall.h>
int main(){
  char str[] = {"Welcome to Systems Porgramming \n"};
  int rv = syscall(1,1,str, sizeof str);
  return rv;
}

