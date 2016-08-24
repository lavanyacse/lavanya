#include <stdio.h>

int main(void) {
int num,i,j,f=0;
    char aos[1000][10000],s[100000];
    scanf("%d",&num);
    for(i=0;i<num;i++)
    scanf("%s",aos[i]);
    for(i=0;aos[0][i];i++){
        for(j=1;aos[j][i];j++){
            if(aos[j][i]!=aos[j-1][i]){
                printf("%s",s);
                f=1;
                break;
            }
        }
        if(f==1)
        break;
        else
        s[i]=aos[0][i];
    }
    return 0;
}

