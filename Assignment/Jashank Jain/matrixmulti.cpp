#include<iostream>
#define N 4

using namespace std;

int main(){
    
  
 int a[N][N]={ {1,2,3},{2,3,4},{7,5,8}};
  
    int b[3][3]={ {7,5,1},{1,1,1},{5,1,3}};
    int res[3][3]={{0,0,0},{0,0,0},{0,0,0}};
    int i,j,k;

  for(i=0;i<3;i++){
      for(j=0;j<3;j++){

          cout<<a[i][j]<<" ";

      }
      cout<<endl;
  }
  cout<<endl;

  for(i=0;i<3;i++){
      for(j=0;j<3;j++){

          cout<<b[i][j]<<" ";

      }
      cout<<endl;
  }

  for(i=0;i<3;i++){
      for(j=0;j<3;j++){
          for(k =0;k<3;k++){

              res[i][j] += a[i][k] *b[k][j];
          }
      }
  }
  cout<<"matrix multiplication of this two matrix is\n";

  for(i=0;i<3;i++){
      for(j=0;j<3;j++){
          cout<<res[i][j]<<" ";

      }
      cout<<endl;
  }
  return 0;
}

  