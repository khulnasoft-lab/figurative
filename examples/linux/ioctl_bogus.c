// This example demonstrates a particular syscall that fails at runtime.
// Used primarily as a test of Figurative's file-related syscall implementation.

#include <errno.h>
#include <stdio.h>
#include <string.h>
#include <sys/ioctl.h>
#include <sys/socket.h>

// stropts not included in Ubuntu 20.04+
// #include <stropts.h>
#define FLUSHRW		0x03
#define __SID		('S' << 8)
#define I_FLUSH		(__SID | 5)

int main() {
    // try bogus ioctl on a non-open file descriptor
    int rc = ioctl(42, I_FLUSH, FLUSHRW);
    if (rc == -1) {
        fprintf(stderr, "got expected error: %s\n", strerror(errno));
        return 0;
    } else {
        fprintf(stdout, "unexpectedly succeeded!\n");
        return 1;
    }
}
