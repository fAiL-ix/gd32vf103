/* See LICENSE of license details. */

#include <stdint.h>
#include <string.h>
#include <errno.h>
#include <gd32vf103.h>

#if   defined (__GNUC__)
#include <unistd.h>
#include <sys/types.h>
#endif

#include "stub.h"

ssize_t _write(int fd, const void* ptr, size_t len) __attribute__(( weak ));

ssize_t _write(int fd, const void* ptr, size_t len) {
    return _stub(EBADF);
}