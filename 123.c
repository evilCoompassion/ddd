//
//  123.c
//  ddd
//
//  Created by apple on 15/11/26.
//  Copyright (c) 2015年 apple. All rights reserved.
//

#include "123.h"
#include "time.h"
#include <math.h>
#include <stdlib.h>
int arr[50]={0};
int fib(int num)
{
    //static int arr[50];
    if (num<=2) {
        return 1;
    }
    if (!arr[num-2]) {
        arr[num-2]=fib(num-2);
    }
    if (!arr[num-1]) {
        arr[num-1]=fib(num-1);
    }
    return arr[num-2]+arr[num-1];
}

int main()
{
    
    int x=40;
    fib(x);
    printf("%d",fib(x));
    
  
    return 0;
}
