/* src/config.h.in.  Generated from configure.ac by autoheader.  */

/* Python3 is available */
#undef ENABLE_PYTHON

/* Have cgmanager_get_pid_cgroup_abs_sync */
#undef HAVE_CGMANAGER_GET_PID_CGROUP_ABS_SYNC

/* Define to 1 if you have the `confstr' function. */
#undef HAVE_CONFSTR

/* Define to 1 if you have the declaration of `PR_CAPBSET_DROP', and to 0 if
   you don't. */
#undef HAVE_DECL_PR_CAPBSET_DROP

/* Define to 1 if you have the declaration of
   `seccomp_syscall_resolve_name_arch', and to 0 if you don't. */
#undef HAVE_DECL_SECCOMP_SYSCALL_RESOLVE_NAME_ARCH

/* Define to 1 if you have the `endmntent' function. */
#undef HAVE_ENDMNTENT

/* Define to 1 if you have the `faccessat' function. */
#define HAVE_FACCESSAT 1

/* Define to 1 if you have the `fgetln' function. */
#undef HAVE_FGETLN

/* Define to 1 if you have the `getline' function. */
#undef HAVE_GETLINE

/* Define to 1 if you have the `hasmntopt' function. */
#undef HAVE_HASMNTOPT

/* Define to 1 if you have the <ifaddrs.h> header file. */
#undef HAVE_IFADDRS_H

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the `apparmor' library (-lapparmor). */
#undef HAVE_LIBAPPARMOR

/* Define to 1 if you have the `pthread' library (-lpthread). */
#undef HAVE_LIBPTHREAD

/* Define to 1 if you have the `seccomp' library (-lseccomp). */
#undef HAVE_LIBSECCOMP

/* Define to 1 if you have the `util' library (-lutil). */
#undef HAVE_LIBUTIL

/* Define to 1 if you have the <linux/genetlink.h> header file. */
#define HAVE_LINUX_GENETLINK_H 1

/* Define to 1 if you have the <linux/netlink.h> header file. */
#define HAVE_LINUX_NETLINK_H 1

/* Define to 1 if you have the <linux/unistd.h> header file. */
#define HAVE_LINUX_UNISTD_H 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the `openpty' function. */
#undef HAVE_OPENPTY

/* Define to 1 if you have the `pivot_root' function. */
#undef HAVE_PIVOT_ROOT

/* Define to 1 if you have the `pthread_atfork' function. */
#undef HAVE_PTHREAD_ATFORK

/* Define to 1 if you have the <pty.h> header file. */
#undef HAVE_PTY_H

/* Define to 1 if you have the `rand_r' function. */
#undef HAVE_RAND_R

/* Define to 1 if the system has the type `scmp_filter_ctx'. */
#undef HAVE_SCMP_FILTER_CTX

/* Define to 1 if you have the `sethostname' function. */
#define HAVE_SETHOSTNAME 1

/* Define to 1 if you have the `setmntent' function. */
#undef HAVE_SETMNTENT

/* Define to 1 if you have the `setns' function. */
#define HAVE_SETNS 1

/* Define to 1 if you have the `statvfs' function. */
#undef HAVE_STATVFS

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <sys/personality.h> header file. */
#define HAVE_SYS_PERSONALITY_H 1

/* Define to 1 if you have the <sys/signalfd.h> header file. */
#define HAVE_SYS_SIGNALFD_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/timerfd.h> header file. */
#define HAVE_SYS_TIMERFD_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define if the compiler supports __thread */
#undef HAVE_TLS

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the `unshare' function. */
#define HAVE_UNSHARE 1

/* Define to 1 if you have the `utmpxname' function. */
#undef HAVE_UTMPXNAME

/* Define to 1 if you have the <utmpx.h> header file. */
#undef HAVE_UTMPX_H

/* bionic libc */
#define IS_BIONIC 1

/* Enabling mutex debugging */
#undef MUTEX_DEBUGGING

/* Name of package */
#undef PACKAGE

/* Define to the address where bug reports for this package should be sent. */
#undef PACKAGE_BUGREPORT

/* Define to the full name of this package. */
#undef PACKAGE_NAME

/* Define to the full name and version of this package. */
#undef PACKAGE_STRING

/* Define to the one symbol short name of this package. */
#undef PACKAGE_TARNAME

/* Define to the home page for this package. */
#undef PACKAGE_URL

/* Define to the version of this package. */
#undef PACKAGE_VERSION

/* Define to 1 if you have the ANSI C header files. */
#undef STDC_HEADERS

/* Enable extensions on AIX 3, Interix.  */
#ifndef _ALL_SOURCE
# undef _ALL_SOURCE
#endif
/* Enable GNU extensions on systems that have them.  */
#ifndef _GNU_SOURCE
# undef _GNU_SOURCE
#endif
/* Enable threading extensions on Solaris.  */
#ifndef _POSIX_PTHREAD_SEMANTICS
# undef _POSIX_PTHREAD_SEMANTICS
#endif
/* Enable extensions on HP NonStop.  */
#ifndef _TANDEM_SOURCE
# undef _TANDEM_SOURCE
#endif
/* Enable general extensions on Solaris.  */
#ifndef __EXTENSIONS__
# undef __EXTENSIONS__
#endif


/* Version number of package */
#undef VERSION

/* Define to 1 if on MINIX. */
#undef _MINIX

/* Define to 2 if the system does not provide POSIX.1 features except with
   this defined. */
#undef _POSIX_1_SOURCE

/* Define to 1 if you need to in order for `stat' and other things to work. */
#undef _POSIX_SOURCE

/* Define to the compiler TLS keyword */
#undef thread_local
