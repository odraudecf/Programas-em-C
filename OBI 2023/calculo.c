#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A;
    int B;
    int S;
    int Cont;
    int Total = 0;
    int Num;
    int Sep1 = 0;
    int Sep2 = 0;
    int Sep3 = 0;
    int Sep4 = 0;
    int Sep5 = 0;

    scanf("%d", &S);
    scanf("%d", &A);
    scanf("%d", &B);

    for(Cont = A; Cont<=B; Cont++){
        Sep1 = 0;
        Sep2 = 0;
        Sep3 = 0;
        Sep4 = 0;
        Sep5 = 0;
        Num = 0;

        Sep1 = Cont%10;
        Num = Cont/10;

        if (Num>0){
            Sep2 = Num%10;
            Num = Num/10;

                if (Num>0){
                    Sep3 = Num%10;
                    Num = Num/10;

                    if (Num>0){
                        Sep4 = Num%10;
                        Num = Num/10;

                            if (Num>0){
                            Sep5 = Num%10;
                            Num = Num/10;

            }
        }
        }
        }
        if (Sep1+Sep2+Sep3+Sep4+Sep5 == S){
            Total++;
        }

    }
    printf("%d", Total);
    return 0;
}
