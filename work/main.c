//
//  main.c
//  work
//
//  Created by s20171106168 on 2018/12/5.
//  Copyright © 2018 s20171106168. All rights reserved.
//

#include <stdio.h>
    int main(int argc, const char * argv[]) {
        int n,x,num;
        int flag=-1;
        scanf("%d%d",&n,&x);
        for (int i=1; i<=n; i++) {
            scanf("%d",&num);
            if (num!=x) {
                flag++;
            }
            else if(num==x){
                flag++;
                break;
            }
        }
        if (flag==n-1) {
            printf("Not Found");
        }
        else printf("%d",flag);
        return 0;
    }
