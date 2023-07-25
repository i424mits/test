#include <stdio.h>
#include <stdlib.h>//exit関数を使うために必要となるため
#include <math.h>//sqrt関数を使うために必要となるため。

double myRoot(double x) //double型に変更することにより小数点以下も出力させることができるようになるため
{
  double y;//double型に変更することにより小数点以下も出力させることができるようになるため
  if(!( x >= 0 )){//0未満の数は平方根で表せないから
    exit(1);
  }
  y = sqrt(x);
  return y;
}

int main(void)
{
  int i = 0;//int i の初期値が0であることを示すため
  double *x = (double *)malloc(sizeof(double) * 101);//配列は0~100までであるから101個にする必要があるため

  while( i <= 100 ){
    x[i] = myRoot((double)i);
    i++;
  }

  //以下は確認用(このままで良い)
  printf("x[0]=%f\n", x[0]);
  printf("x[1]=%f\n", x[1]);
  printf("x[2]=%f\n", x[2]);
  printf("x[3]=%f\n", x[3]);
  printf("x[4]=%f\n", x[4]);
  printf("x[99]=%f\n", x[99]);
  printf("x[100]=%f\n", x[100]);

  free(x);
  return 0;
}
