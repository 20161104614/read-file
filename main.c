//
//  main.c
//  Word
//
//  Created by 20161104595 on 17/6/13.
//  Copyright © 2017年 20161104595. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    FILE *fr;
    FILE *fw;
    fr=fopen("/Users/a20161104595/Desktop/Word/input.txt","r+");
    fw=fopen("/Users/a20161104595/Desktop/Word/output.txt","w");
    int a,b,c;
    fscanf(fr,"%d%d",&a,&b);
             c=a+b;
             printf("%d+%d=%d\n",a,b,c);
             fprintf(fw,"%d+%d=%d\n",a,b,c);
    return 0;
}
