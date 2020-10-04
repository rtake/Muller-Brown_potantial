# include <bits/stdc++.h>

# include "muller_brown.hpp"
# include "mylib.hpp"

using namespace std;

int main(int argc, char *argv[]) {
  FILE *fp;
  int ndat;
  double *x;
  char line[256], **lines;

  lines = Malloc_Matrix_char(1000,1000);
  
  fp = fopen(argv[1], "r");
  ndat=0;
  while( fgets(line,256,fp) ) { sscanf(line, "%s", lines[ndat++]); }
  
  x = Malloc_Vector_double(2,0);
  for(int i=0;i<ndat;i++) { 
    sscanf(lines[i], "%lf,%lf\n", &x[0], &x[1]);
    fprintf(stdout, "%lf,%lf,%lf\n", muller_brown_potential(x), x[0], x[1]);
  }

  free(x);
  // free(lines);
}