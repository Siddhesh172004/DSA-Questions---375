    #include<stdio.h>
    #include<conio.h>
    int main() {
        int i, j = 0, k = 0;
        char temp[20];
        char s[][155] = { "siddhesh", "siddh","sid" };
        int sizeofelement = sizeof(s) / sizeof(s[0]);
        // printf("%d", sizeofelement);

        while (1) {
            for (j = 1;j < sizeofelement;j++) {
                if (s[0][k] == s[j][k]) {
                    // printf("%c ", s[0][0]);
                    temp[k] = s[j][k];
                }
                else {
                    goto s;
                }
                printf("\n");
            }
            k++;
        }
    s:  /// breaking the outer while loop
        if (k == 0) {
            printf("There is no common prefix!!");
        }
        else {
            printf("The Longest common prefix is : ");
            for (int l = 0;l < k;l++) {
                printf("%c", s[0][l]);
            }
        }

        return 0;
    }
