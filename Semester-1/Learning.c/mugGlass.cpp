#include<stdio.h>
int main()
{
    int g, m, k;
    scanf("%d %d %d", &g, &m, &k);
    int glass_water = 0;
    int mug_water = 0;
    for(int i = 0; i < k; i ++){
            if(glass_water == g){
                glass_water = 0;
            }
            else if(mug_water == 0){
                mug_water = m;
            }
            else{

            }

    }

    return 0;
}
