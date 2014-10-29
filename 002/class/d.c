#include<stdio.h>

int main(){
    int N;
    int os[5][5];
    int v_11=0,v_12=0,v_13=0,v_14=0,v_19=0,v_21=0,v_22=0,v_23=0,v_24=0,v_29=0,v_31=0,v_32=0,v_33=0,v_34=0,v_39=0,v_41=0,v_42=0,v_43=0,v_44=0,v_49=0,v_91=0,v_92=0,v_93=0,v_94=0,v_99=0;
    do{
        printf("|-----OS-----|------回答番号------|  |------形式------|------回答番号------|\n");
        printf("|Mac OS      | 1                 |  |デスクトップ　　　| 1                 |\n");
        printf("|Windows     | 2                 |  |ノート          | 2                 |\n");
        printf("|LINUX       | 3                 |  |タブレット       | 3                 |\n");
        printf("|Android     | 4                 |  |スマートフォン    | 4                 |\n");
        printf("|その他       | 9                 |  |その他          | 9                 |\n");
        printf("回答例 Windows-ノートの場合は 22\n");
        scanf("%d",&N);
        switch (N) {
            case 11:
                v_11++;
                break;
            case 12:
                v_12++;
                break;
            case 13:
                v_13++;
                break;
            case  14:
                v_14++;
                break;
            case  19:
                v_19++;
                break;
            case  21:
                v_21++;
                break;
            case  22:
                v_22++;
                break;
            case  23:
                v_23++;
                break;
            case  24:
                v_24++;
                break;
            case  29:
                v_29++;
                break;
            case  31:
                v_31++;
                break;
            case  32:
                v_32++;
                break;
            case  33:
                v_33++;
                break;
            case  34:
                v_34++;
                break;
            case  39:
                v_39++;
                break;
            case  41:
                v_41++;
                break;
            case  42:
                v_42++;
                break;
            case  43:
                v_43++;
                break;
            case  44:
                v_44++;
                break;
            case  49:
                v_99++;
                break;
            case  91:
                v_91++;
                break;
            case  92:
                v_92++;
                break;
            case 93:
                v_93++;
                break;
            case 94:
                v_94++;
                break;
            case 99:
                v_99++;
                break;
            default:
                break;
        }
        /* int t,o;
           t = N/10;
           o = N%10;
           os[t][o]++;
         */
    }while(N!=0);
    printf("Mac OS デスクトップ : %d\n",v_11);
    printf("Mac OS ノート : %d\n",v_12);
    printf("Mac OS タブレット : %d\n",v_13);
    printf("Mac OS スマートフォン : %d\n",v_14);
    printf("Mac OS その他 : %d\n",v_19);
    
    printf("Windows デスクトップ : %d\n",v_21);
    printf("Windows ノート : %d\n",v_22);
    printf("Windows OS タブレット : %d\n",v_23);
    printf("Windows OS スマートフォン : %d\n",v_24);
    printf("Windows その他 : %d\n",v_29);
    
    printf("LINUX デスクトップ : %d\n",v_31);
    printf("LINUX ノート : %d\n",v_32);
    printf("LINUX タブレット : %d\n",v_33);
    printf("LINUX スマートフォン : %d\n",v_34);
    printf("LINUX その他 : %d\n",v_39);
    
    printf("Android デスクトップ : %d\n",v_41);
    printf("Android ノート : %d\n",v_42);
    printf("Android タブレット : %d\n",v_43);
    printf("Android スマートフォン : %d\n",v_44);
    printf("Android その他 : %d\n",v_49);
    
    printf("その他 デスクトップ : %d\n",v_91);
    printf("その他 ノート : %d\n",v_92);
    printf("その他 タブレット : %d\n",v_93);
    printf("その他 スマートフォン : %d\n",v_94);
    printf("その他 その他 : %d\n",v_99);
    return 0;
}