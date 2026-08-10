#include <stdio.h>
#include<locale.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int a = 0;
    system("chcp 65001>nul"); // 设置控制台为UTF-8编码
    setlocale(LC_ALL, "zh_CN.UTF-8");
    a = rand()%100+1;
    int b = 0;
    int c = 0;
    do
    {
      printf("请输入一个整数:");
      if(scanf("%d",&b)!=1)
      {
            printf("输入错误,请输入一个整数\n");
            while(getchar()!='\n'); // 清除输入缓冲区中的换行符
            continue;
      }
      
      if(b >= 1 && b <= 100)
      {
        
        if(b > a)
        {
          if(b - a <= 3)
          {
            printf("大了,快接近了\t");
            c++;
          }
          else
          {
            printf("猜大了\t");
            c++;
          }
        }
        else if(b < a)
        {
          if(a - b <= 3)
          {
            printf("小了,快接近了\t");
           c++;
          }
          else
          {
            printf("猜小了\t");
            c++;
          }
        }
        else
        {
            printf("恭喜你，猜对了！\n");
            printf("答案是：%d\n", a);
            break;
        }
        if(c>=5)
      {
        printf("你已经猜了5次了,游戏结束!\n");
        printf("答案是：%d\n", a);
        break;
      }
      else
      {
        printf("你已经猜了%d次了,还剩%d次机会\n", c , 5- c);
      }
      }
        
        else
        {
            printf("输入错误,请输入1-100之间的整数\n");
            while(getchar()!='\n'); // 清除输入缓冲区中的换行符
            continue;
        }
    }
      
    while(1);
    return 0;
}