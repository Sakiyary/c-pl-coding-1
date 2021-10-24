/**
 * Binary Search Algorithm
 *
 * See https://en.wikipedia.org/wiki/Binary_search_algorithm
 * or https://youtu.be/iP897Z5Nerk
 * or https://www.khanacademy.org/computing/computer-science/algorithms/binary-search/a/binary-search
 *
 * Created by hengxin on 10/23/21.
 */

#include <stdio.h>

#define LEN 10
int dict[LEN] = {1, 1, 2, 3, 5, 8, 13, 21, 34, 55};

int main() {
  int key = 0;
  scanf("%d", &key);

  int index = -1;

  if (index == -1) {
    printf("Not found!\n");
  } else {
    printf("The index of %d is %d.\n", key, index);
  }

  return 0;
}