#include "s21_string.h"

/**
 * Сравнивает не более первых n байтов str1 и str2.
 * str1 указатели на сравниваемые строки.
 * str2 указатели на сравниваемые строки.
 * param n количество символов для сравнения.
 * return 0 – если первые n символов сравниваемых строк идентичны.
Положительное число – если в первых n символах сравниваемых строк есть отличия и
код первого отличающегося символа в строке str1 больше кода символа на той же
позиции в строке str2.
    Отрицательное число – в первых n символах сравниваемых строк есть отличия и
код первого отличающегося символа в строке str1 меньше кода символа на той же
позиции в строке str2.
 */
int s21_strncmp(const char *str1, const char *str2, s21_size_t n) {
  int result = 0;
  if (str1 && str2 && n > 0) {
    for (s21_size_t i = 0; i < n; i++) {
      if (str1[i] == '\0' || str1[i] != str2[i]) {
        result = str1[i] - str2[i];
        break;
      }
    }
  }
  return result;
}