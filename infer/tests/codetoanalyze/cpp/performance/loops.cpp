/*
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */
#include <iostream>
#include <string>

void nested_do_while(int p) {
  int a = 10;
  int b = 0;
  do {
    do {
      if (p == 15) {
        p = p + 1;
      }
      b++;
    } while (b < 10);
    a++;
  } while (a < 20);
}

void zeropad_linear(std::string s, std::string p) {
  while (s == p) {
    p = p + "0";
  }
}
