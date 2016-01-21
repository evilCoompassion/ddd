//
//  main.m
//  ddd
//
//  Created by apple on 15/11/26.
//  Copyright (c) 2015年 apple. All rights reserved.
//

#import <Foundation/Foundation.h>

#include "stdio.h"
#include "stdlib.h"
#include "time.h"
int main()
{
    int x;
    int a[10]={0};
    printf("please print a number");
    scanf("%d",&x);
    while (x) {
        a[(int)x%10]++;
        x=x/10;
    }
    return 0;
    }
