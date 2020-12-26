/* See LICENSE of license details. */

#include <unistd.h>

void _exit(int code) __attribute__(( weak ));

void _exit(int code)
{
  for (;;);
}
