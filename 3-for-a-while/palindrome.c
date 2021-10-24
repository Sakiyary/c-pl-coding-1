/**
 * To test whether a string is a palindrome.
 * - An empty string is a palindrome.
 * - A single-character string is a palindrome.
 * - If S is a palindrome, xSx is also a palindrome.
 *
 * For convenience (`scanf`), the string does not contain white-spaces.
 *
 * Created by hengxin on 10/23/21.
 */

#include <stdio.h>

#define MAX 21
char string[MAX] = "";

int main() {
  scanf("%20s", string);

  int len = 0;
  printf("The length of \"%s\" is %d.\n", string, len);

  int is_parlindrome = 1;
  printf("\"%s\" is %s a parlindrome.\n", string, is_parlindrome ? "" : "not");

  return 0;
}