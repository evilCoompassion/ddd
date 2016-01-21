//
//  switch.c
//  ddd
//
//  Created by apple on 15/11/26.
//  Copyright (c) 2015年 apple. All rights reserved.
//
#include "stdio.h"
int main()
{
    int seasons=0;
    printf("pelease number");
    scanf("%d",&seasons);
    switch (seasons) {
        case 0:printf("spring");break;
        case 1:printf("summer");break;
        case 2:printf("autom");break;
        case 4:printf("octu");break;
        default:
            break;
    }
    return 0;
}