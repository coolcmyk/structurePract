/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int findAttractive(int mat[][100], int targ, int n, int m){
    int win = 0;
    for(int i = 0; i < n ; i++){
        for(int j = 0; j < m ; j++){
            int att = mat[i-1][j]*mat[i][j-1]*mat[i+1][j]*mat[i][j+1];
            if(att == targ){
                win = att;
            }
        }
    }
    return win;
}

void fillmat(int mat[][100], int n, int m){
    for(int i = 0; i < n ; i++){
        for(int j = 0; j < m ; j++){
            if(i > 0 && mat[i-1][j] == 0){
                mat[i-1][j] = 1;
            }
            if(j > 0 && mat[i][j - 1] == 0){
                mat[i][j - 1] = 1;
            }
            if(i < n - 1 && mat[i+1][j] == 0){
                mat[i+1][j] = 1;
            }
            if(j < m - 1 && mat[i][j+1] == 0){
                mat[i][j+1] = 1;
        }
    }
}
int main()
{
    int n,m,targ;
    scanf("%d %d %d", &n,&m,&targ);
    int mat[n][m];
    for(int i = 0; i < n ; i++){
        for(int j = 0; j < m ; j++){
            scanf("%d", &mat[i][j]);
        }
    }
    fillmat(mat, n, m);
    findAttractive(mat, targ, n, m);

    return 0;
}
