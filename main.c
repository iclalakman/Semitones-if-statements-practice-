#include <stdio.h>
int main() {
    int st; //semitones

    printf("Enter the number of semitones: ");
    scanf("%d",&st);

    if (st==0)
        printf("Perfect Prime");
    else if (st==1 || st==2)
        printf("Second");
    else if (st==3 || st==4)
        printf("Third");
    else if (st==5)
        printf("Fourth");
    else if (st==6)
        printf("Tritone");
    else if (st==7)
        printf("Perfect Fifth");
    else if (st==8 || st==9)
        printf("Sixth");
    else if (st==10 || st==11)
        printf("Seventh");
    else if (st==12)
        printf("Perfect Octave");
    else
        printf("Invalid semitone number");

    return 0;
}
