#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A;
    scanf("%d", &A);

    int Cont;
    int B[A];
    int TotContract = 0;

    for (Cont = 0; Cont < A; Cont++){
        scanf("%d", &B[Cont]);
    }

    for (Cont = 0; Cont < A; Cont++){
        if (B[Cont] == B[A-(Cont+1)]){

        }
        else{
            if (B[Cont] + B[Cont+1] == B[A-(Cont+1)] + B[A-(Cont+2)]){
                TotContract = TotContract + 2;
                B[Cont+1] = B[Cont] + B[Cont+1];
                B[Cont] = 0;
                B[A-(Cont+2)] = B[A-(Cont+1)] + B[A-(Cont+2)];
                B[A-(Cont+1)] = 0;

            }
        }
    }
    printf("%d", TotContract);
    return 0;
}
