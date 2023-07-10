#include "s21_string.h"

/* Возвращает копию строки (str), преобразованной в нижний регистр.
В случае какой-либо ошибки следует вернуть значение S21_NULL */

void *s21_to_lower(const char *str) {  // void *
  char *str_low = S21_NULL;  // создаем указатель на будущую строку и зануляем
                             // на случай ошибок
  if (str) {  // если строка содержит чего-либо то выполняем
    str_low = calloc(s21_strlen(str) + 2,
                     sizeof(char));  // выделяем память под новую строку
    if (str_low != S21_NULL) {  // если память выделилась
      for (int i = 0; str[i]; i++) {
        if (str[i] >= 65 &&
            str[i] <= 90) {  // проверям если символ в верхнем регистре
          str_low[i] = str[i] + 32;  // меняем регистр
        } else {
          str_low[i] = str[i];  // записываем в строку
        }
      }
    }
  }
  return (void *)str_low;  //(void *) возвращаем указатель, иначе нулл
}