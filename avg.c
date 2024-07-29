#include <stdio.h>

int main() {
    int n;
    printf("enter size of the array:");
    scanf("%d",&n);
    int i;
    int sum=0;
    printf("enter values of the array:");
    for(i=0;i<n;i++){
        int x;
        scanf("%d",&x);
        sum+=x;
    }
    float avg=sum/n;
    printf("aVERAGE OF INTEGERS IS %f",avg);

    return 0;
}
