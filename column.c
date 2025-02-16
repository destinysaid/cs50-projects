#include <stdio.h>
#include <cs50.h>

int main(void)

{
    int i, increase, bricks;
    // The first thing that happens is that you get asked a question, how many bricks do you want? lets say we answer "5"
    bricks = get_int("how many bricks do you want? \n");
    // Here is the magic. The big for-loop: It first puts i to be 0 (i = 0), then says if i is less than bricks ( i < bricks(5)), go to the inner loop. Since i(0) is less than bricks(5) it goes to the inner loop.
    for (i = 0; i < bricks; i++ )
    {
        // This inside loop then comes into play and says: put "increase" to be 0 (increase = 0), then says if increase is less than i+1, print #. Remember, i is currently 0, so i+1 is 0+1
        for (increase = 0; increase < i+1; increase++ )
        {
            printf("#"); // After # is printed, increase becomes "1(increase++)" and it checks, is incresase less than i+1? no its not, since i+1 is 0+1, which is 1. increase is also 1, which is NOT less than 1, but equal to it.
        }
        printf("\n"); // This line ends the bigger for-loop and goes back to the top and checks, "is i still less than bricks(5), if yes, run the whole process again but add 1(i++) to i.
    }

}
// essentially, the big loop plays out, then the inside loop plays out based in the value of i.
// How the pyramid forms: After the loop plays out once, i is now 1(i++), so the inner loop starts again(from 0 because its starting again), this time, i+1 is 1+1, so the inner loop can print 2 #
