#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    char phone[100];
  // phone variable is the phone number, for loop is to get the input for however many numbers need to be converted
    for (int i = 0; i < n; i++) {
        scanf("%s", phone);
        int len = strlen(phone);
        int count = 0;
        for (int j = 0; j < len; j++) {
            if (phone[j] >= 'A' && phone[j] <= 'Z') {
                if (phone[j] == 'A' || phone[j] == 'B' || phone[j] == 'C') {
                    printf("2");
                } else if (phone[j] == 'D' || phone[j] == 'E' || phone[j] == 'F') {
                    printf("3");
                } else if (phone[j] == 'G' || phone[j] == 'H' || phone[j] == 'I') {
                    printf("4");
                } else if (phone[j] == 'J' || phone[j] == 'K' || phone[j] == 'L') {
                    printf("5");
                } else if (phone[j] == 'M' || phone[j] == 'N' || phone[j] == 'O') {
                    printf("6");
                } else if (phone[j] == 'P' || phone[j] == 'Q' || phone[j] == 'R' || phone[j] == 'S') {
                    printf("7");
                } else if (phone[j] == 'T' || phone[j] == 'U' || phone[j] == 'V') {
                    printf("8");
                } else if (phone[j] == 'W' || phone[j] == 'X' || phone[j] == 'Y' || phone[j] == 'Z') {
                    printf("9");
                }
                count++;
            } else if (phone[j] >= '0' && phone[j] <= '9') {
                printf("%c", phone[j]);
                count++;
            }
            if ((count == 3 || count == 6) && phone[j]!= '-' ){
                printf("-");
            }
            if (count >= 10) {
                break;
            }
        }
        printf("\n");
    }
    return 0;
}
