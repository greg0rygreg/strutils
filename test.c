// i don't want to update this anymore
// 2/11/26 I HAVE TO. FUCK!

#include "strutils.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  // oh my fucking god what am i doing
  size_t l = 0;
  size_t l2 = 0;
  str testS = "the quick brown fox jumps over the lazy dog";
  str testS2 = "this is a test string, for testing purposes, on a testing file";
  str testHUH = "hello world!!!"; // *
  str* testS_split = strsplit(testS, ' ', &l);
  str* testS2_split = strsplit(testS2, ',', &l2);
  str testRS = strreverse("string to be reversed");
  str testTCS = "this is title-cased text, this is also just a string/array of characters\\whatever you could call it";
  str testUCS = "i'm screaming at the very top of my lungs!!!!! can you hear me????";
  str testRCS = "I'M SCREAMING AT THE TOP OF MY VERY LUNGS!!!!! can you hear me????";
  str testJS[] = {"i'm", "going", "insane"};
  str testJdS = strjoin(testJS, 3, ' ');
  str testTCdS = strtitlecase(testTCS);
  str testUCdS = struppercase(testUCS);
  str testLCdS = strlowercase(testUCdS);
  str testRCdS = strreversecase(testRCS);
  str testHUHd = strreplace(testHUH, '!', '?');
  // theoretically you could replace anything with the null terminator
  // but that would end the string early
  // 2/11/26 now you have strrem(str s, char c)
  str testHUHd2 = strreplace(testHUHd, '?', '.');
  str testCR = "hello, so, like, this sentence, is FILLED, to, like, um, the brim, with commas";
  size_t testC = strcount(testCR, ',');
  str testR = strrem(testCR, ',');

  // printing part
  printf("%s:\n%s %s %s %s under %s %s %s\n\n", testS, testS_split[0], testS_split[2], testS_split[l-1], testS_split[4], testS_split[6], testS_split[l-2], testS_split[3]);
  printf("%s:\n%s,%s,%s\n\n", testS2, testS2_split[0], testS2_split[2], testS2_split[1]);
  printf("string to be reversed:\n%s\n\n", testRS);
  printf("%s:\n%s\n\n", testTCS, testTCdS);
  printf("\"i'm\", \"going\", \"insane\":\n%s\n\n", testJdS);
  printf("%s:\n%s\n\n", testUCS, testUCdS);
  printf("%s:\n%s\n\n", testUCdS, testLCdS);
  printf("%s:\n%s\n\n", testRCS, testRCdS);
  printf("%s:\n%s / %s\n\n", testHUH, testHUHd, testHUHd2);
  printf("%s:\n%lu commas counted\n\n", testCR, testC);
  printf("%s:\n%s\n", testCR, testR);

  // MMM hell
  dptrfree((void**)testS_split, l);
  dptrfree((void**)testS2_split, l2);
  free(testJdS);
  free(testHUHd);
  free(testHUHd2);
  free(testRS);
  free(testTCdS);
  free(testUCdS);
  free(testLCdS);
  free(testRCdS);
  free(testR);

  // freedom.
  return 0;
}