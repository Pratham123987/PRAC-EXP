A. Decimal to Binary
 #include <stdio.h>
int main() {
  int n, binary[32], i = 0;
  printf("Enter a decimal number: ");
  scanf("%d", &n);
  while (n > 0) {
       binary[i] = n % 2;
       n = n / 2;
       i++;
  }
  printf("Binary equivalent: ");
  for (i = i - 1; i >= 0; i--)
       printf("%d", binary[i]);
    return 0;
}
     B. Hexadecimal to Binary
#include <stdio.h>
int main() {
    char hex[20];
    int i = 0;
    printf("Enter a hexadecimal number: ");
    scanf("%s", hex);
    while (hex[i] != '\0') {
      if (hex[i] == '0') printf("0000");
      else if (hex[i] == '1') printf("0001");
      else if (hex[i] == '2') printf("0010");
      else if (hex[i] == '3') printf("0011");
      else if (hex[i] == '4') printf("0100");
      else if (hex[i] == '5') printf("0101");
      else if (hex[i] == '6') printf("0110");
      else if (hex[i] == '7') printf("0111");
      else if (hex[i] == '8') printf("1000");
         else if (hex[i] == '9') printf("1001");
         else if (hex[i] == 'A' || hex[i] == 'a') printf("1010");
         else if (hex[i] == 'B' || hex[i] == 'b') printf("1011");
         else if (hex[i] == 'C' || hex[i] == 'c') printf("1100");
         else if (hex[i] == 'D' || hex[i] == 'd') printf("1101");
         else if (hex[i] == 'E' || hex[i] == 'e') printf("1110");
         else if (hex[i] == 'F' || hex[i] == 'f') printf("1111");
         else printf("Invalid");
         i++;
     }
     return 0;
}
