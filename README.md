#include <stdlib.h>  
#include <stdio.h>  
  
int main(){  
    int a,b; //定義兩個變數，一個是a，另一個b 
    scanf("%d%d",&a,&b); //讀取兩個值，將它們存到a和b中 
    while((a%=b)&&(b%=a)); //a除以b的餘數，儲存在a中，同時計算b除以a的餘數，結果儲存在b中   
    printf("%d\n",a+b); //顯示a+b的值   
}  
