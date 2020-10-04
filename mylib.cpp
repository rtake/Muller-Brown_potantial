# include <bits/stdc++.h>

using namespace std;

double **Malloc_Matrix_double(int nrow,int ncol,double val);
double *Malloc_Vector_double(int n,double val);
char **Malloc_Matrix_char(int nrow, int ncol);


double **Malloc_Matrix_double(int nrow,int ncol,double val) {
  double **mat;
  mat = (double**)malloc(sizeof(double*)*nrow);
  mat[0] = (double*)malloc(sizeof(double)*nrow*ncol);

  for(int i=1;i<nrow;i++) { mat[i] = mat[0] + i*ncol; }

  /*
  for(int i=;i<nrow;i++) {
    mat[i] = (double*)malloc(sizeof(double)*ncol);
    for(int j=0;j<ncol;j++) { mat[i][j] = val; }
  }
  */
  return mat;
}

double *Malloc_Vector_double(int n,double val) {
  double *vec = (double*)malloc(sizeof(double)*n);
  for(int i=0;i<n;i++) { vec[i] = val; }
  return vec;
}


char **Malloc_Matrix_char(int nrow, int ncol) {
  char **mat;
  mat = (char**)malloc(sizeof(char*)*nrow);
  mat[0] = (char*)malloc(sizeof(char)*ncol);
  
  for(int i=1;i<nrow;i++) { mat[i] = mat[0] + i*ncol; }

  return mat;
}