#include <stdio.h>
#include <string.h>

int main() {
    char s[11]; 
    fgets(s, sizeof(s), stdin);
    
    if (s[8] == 'A') {
        if (s[0] == '1' && s[1] == '2') {
            s[0] = '0';
            s[1] = '0';
        }
    } else { 
        if (!(s[0] == '1' && s[1] == '2')) {
            int hour = (s[0] - '0') * 10 + (s[1] - '0');
            hour += 12;
            s[0] = (hour / 10) + '0';
            s[1] = (hour % 10) + '0';
        }
    }
    
    s[8] = '\0'; 
    puts(s);
    return 0;
}
