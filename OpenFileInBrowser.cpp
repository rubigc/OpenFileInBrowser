#include <windows.h>
#include <shellapi.h>

int main(int argc, char **argv){
  if(argc!=2)
    return(1);

  ShellExecute(0, 0, argv[1], 0, 0 , SW_SHOW);
  return(0);
}