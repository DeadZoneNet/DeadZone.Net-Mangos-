/* ace/config.h.  Generated from config.h.in by configure.  */
/* ace/config.h.in.  Generated from configure.ac by autoheader.  */


#ifndef ACE_CONFIG_H
#define ACE_CONFIG_H

// ACE configuration header file




/* Compiler/platform standard C++ auto_ptr implementation lacks reset() method
   */
/* #undef ACE_AUTO_PTR_LACKS_RESET */

/* Enable ACE_Timeprobes */
/* #undef ACE_COMPILE_TIMEPROBES */

/* */
#define ACE_DEFAULT_BASE_ADDR ((char *) 0x80000000)

/* */
/* #undef ACE_DEFAULT_BASE_ADDRL */

/* */
/* #undef ACE_DEFAULT_CLOSE_ALL_HANDLES */

/* */
#define ACE_DEFAULT_MAX_SOCKET_BUFSIZ 65535

/* The default number of handles the select()-based reactor should handle */
/* #undef ACE_DEFAULT_SELECT_REACTOR_SIZE */

/* Number of TSS keys, with ACE_HAS_TSS_EMULATION _only_. Defaults to 64. */
/* #undef ACE_DEFAULT_THREAD_KEYS */

/* Define this if you don't want debug version ACE search for debug version
   DLLs first before looking for the DLL names specified. */
/* #undef ACE_DISABLE_DEBUG_DLL_CHECK */

/* Do not include emulation for timed semaphore acquisitions. */
/* #undef ACE_DISABLE_POSIX_SEM_TIMEOUT_EMULATION */

/* Define to 1 to disable swapping swapping CDR on read */
/* #undef ACE_DISABLE_SWAP_ON_READ */

/* Define to DLL file suffix */
/* #undef ACE_DLL_SUFFIX */

/* Define to 1 to enable swapping swapping CDR on write */
/* #undef ACE_ENABLE_SWAP_ON_WRITE */

/* Compiler requires template args when explicitly calling template
   destructor. */
#define ACE_EXPLICIT_TEMPLATE_DESTRUCTOR_TAKES_ARGS 1

/* Define to 1 if the getsockname() and getpeername() return random values in
   the sockaddr_in.sin_zero field. */
/* #undef ACE_GETNAME_RETURNS_RANDOM_SIN_ZERO */

/* Uses ctime_r & asctime_r with only two parameters vs. three. */
#define ACE_HAS_2_PARAM_ASCTIME_R_AND_CTIME_R 1

/* Define to 1 if platform has 2 parameter sched_getaffinity() */
/* #undef ACE_HAS_2_PARAM_SCHED_GETAFFINITY */

/* Define to 1 if platform has 2 parameter sched_setaffinity() */
/* #undef ACE_HAS_2_PARAM_SCHED_SETAFFINITY */

/* Define to 1 if platform has 3 parameter readdir_r() */
#define ACE_HAS_3_PARAM_READDIR_R 1

/* Define to 1 if platform has 3 parameter wcstok() */
#define ACE_HAS_3_PARAM_WCSTOK 1

/* Platform has BSD 4.4 sendmsg()/recvmsg() APIs. */
#define ACE_HAS_4_4BSD_SENDMSG_RECVMSG 1

/* Platform supports Asynchronous IO calls */
#define ACE_HAS_AIO_CALLS 1

/* Platform has AIX4 ::read_real_time() */
/* #undef ACE_HAS_AIX_HI_RES_TIMER */

/* Compiler/platform supports alloca(). */
/* #undef ACE_HAS_ALLOCA */

/* Compiler/platform has <alloca.h> */
/* #undef ACE_HAS_ALLOCA_H */

/* Define to 1 if system should use Alpha's cycle counter */
/* #undef ACE_HAS_ALPHA_TIMER */

/* Use ACE's alternate cuserid() implementation since a system cuserid() may
   not exist, or it is not desirable to use it. The implementation requires
   ACE_LACKS_PWD_FUNCTIONS to be undefined and that the geteuid() system call
   exists. */
#define ACE_HAS_ALT_CUSERID 1

/* Compiler/platform correctly calls init()/fini() for shared libraries. */
#define ACE_HAS_AUTOMATIC_INIT_FINI 1

/* Compiler/platform has "big" fd_set, i.e. large number of bits set in fd_set
   passed back from select(). */
#define ACE_HAS_BIG_FD_SET 1

/* Platform sendv() does not work properly with datagrams, i.e. it fails when
   the iovec size is IOV_MAX. */
/* #undef ACE_HAS_BROKEN_DGRAM_SENDV */

/* Platform doesn't cast MAP_FAILED to a (void *). */
/* #undef ACE_HAS_BROKEN_MAP_FAILED */

/* HP/UX does not wrap the mmap(2) header files with extern "C". */
/* #undef ACE_HAS_BROKEN_MMAP_H */

/* Platform headers don't support <msg.h> prototypes */
/* #undef ACE_HAS_BROKEN_MSG_H */

/* Platform defines struct timespec in <sys/timers.h> */
/* #undef ACE_HAS_BROKEN_POSIX_TIME */

/* OS/compiler's header files are inconsistent with libC definition of
   rand_r(). */
/* #undef ACE_HAS_BROKEN_RANDR */

/* Compiler/platform has the wrong prototype for t_error(), i.e., t_error(char
   *) rather than t_error(const char *). */
/* #undef ACE_HAS_BROKEN_T_ERROR */

/* Platform has <bstring.h> (which contains bzero() prototype) */
/* #undef ACE_HAS_BSTRING */

/* Define to 1 if platform has bswap16(). */
/* #undef ACE_HAS_BSWAP16 */

/* Define to 1 if platform has bswap32(). */
/* #undef ACE_HAS_BSWAP32 */

/* Define to 1 if platform has bswap64(). */
/* #undef ACE_HAS_BSWAP64 */

/* Define to 1 if platform has bswap_16(). */
#define ACE_HAS_BSWAP_16 1

/* Define to 1 if platform has bswap_32(). */
#define ACE_HAS_BSWAP_32 1

/* Define to 1 if platform has bswap_64(). */
#define ACE_HAS_BSWAP_64 1

/* Define to 1 if platform has the <bytesex.h> header file. */
/* #undef ACE_HAS_BYTESEX_H */

/* Define to 1 if platform has the <byteswap.h> header file. */
#define ACE_HAS_BYTESWAP_H 1

/* Platform supports the Win32 CancelIO() function. (WinNT 4.0 and beyond) */
/* #undef ACE_HAS_CANCEL_IO */

/* OS/platform uses char * for dlopen/dlsym args, rather than const char *. */
/* #undef ACE_HAS_CHARPTR_DL */

/* Define to 1 if arg 2 of 'shmat' is char *' */
/* #undef ACE_HAS_CHARPTR_SHMAT */

/* Define to 1 if arg 1 of 'shmdt' is char *' */
/* #undef ACE_HAS_CHARPTR_SHMDT */

/* OS/platform uses char * for sockopt, rather than const char * */
/* #undef ACE_HAS_CHARPTR_SOCKOPT */

/* Define to 1 if platform has clock_gettime(). */
#define ACE_HAS_CLOCK_GETTIME 1

/* Define to 1 if platform has clock_settime(). */
#define ACE_HAS_CLOCK_SETTIME 1

/* OS header files have some problems with XTI (HP/UX 11). */
/* #undef ACE_HAS_CONFLICTING_XTI_MACROS */

/* Prototypes for both signal() and struct sigaction are consistent. */
#define ACE_HAS_CONSISTENT_SIGNAL_PROTOTYPES 1

/* Platform has swab(const char*, char*, ssize_t) variant. */
/* #undef ACE_HAS_CONST_CHAR_SWAB */

/* Compiler/platform has correctly prototyped header files. */
#define ACE_HAS_CPLUSPLUS_HEADERS 1

/* Define to 1 if the system has the type `cpu_set_t'. */
#define ACE_HAS_CPU_SET_T 1

/* Platform defines custom DSO/DLL symbol export macros. */
/* #undef ACE_HAS_CUSTOM_EXPORT_MACROS */

/* Platform supports /dev/poll character device. */
/* #undef ACE_HAS_DEV_POLL */

/* Platform supports operations on directories via struct dirent, readdir_r,
   etc. */
#define ACE_HAS_DIRENT 1

/* Build ACE using the frigging PC DLL nonsense... */
/* #undef ACE_HAS_DLL */

/* Define to 1 if the dlsym() call segfaults when passed an invalid handle. */
#define ACE_HAS_DLSYM_SEGFAULT_ON_INVALID_HANDLE 1

/* Platform (Linux) supports event poll interface. */
#define ACE_HAS_EVENT_POLL 1

/* Compiler supports C++ exception handling. */
#define ACE_HAS_EXCEPTIONS 1

/* Platform has Fast-Light (FL) toolkit installed. */
/* #undef ACE_HAS_FL */

/* Define to 1 if compiler has builtin atomic support */
#define ACE_HAS_GCC_ATOMIC_BUILTINS 1

/* Define to 1 if platform has getifaddrs(). */
#define ACE_HAS_GETIFADDRS 1

/* Platform supports getpagesize() call (otherwise, ACE_PAGE_SIZE must be
   defined, except on Win32). */
#define ACE_HAS_GETPAGESIZE 1

/* Define to 1 if platform has getprogname(). */
/* #undef ACE_HAS_GETPROGNAME */

/* Define to 1 if platform has getrusage(). */
#define ACE_HAS_GETRUSAGE 1

/* Define to 1 if platform has the declaration of getrusage(). */
#define ACE_HAS_GETRUSAGE_PROTOTYPE 1

/* Enable use of GNU template repositories. GNU C++ w/repo patch and EGCS only
   */
/* #undef ACE_HAS_GNU_REPO */

/* The GPERF utility is compiled for this platform */
#define ACE_HAS_GPERF 1

/* Optimize ACE_Handle_Set::count_bits for select() operations (common case)
   */
#define ACE_HAS_HANDLE_SET_OPTIMIZED_FOR_SELECT 1

/* Define to 1 if system has SunOS high resolution timer. */
/* #undef ACE_HAS_HI_RES_TIMER */

/* Define to 1 if platform has the <ia32intrin.h> header file. */
/* #undef ACE_HAS_IA32INTRIN_H */

/* Define to 1 if platform has the <ia64intrin.h> header file. */
/* #undef ACE_HAS_IA64INTRIN_H */

/* Defined to 1 if platform supports ICMP over raw sockets */
#define ACE_HAS_ICMP_SUPPORT 1

/* Define to 1 if the system has the type `idtype_t'. */
/* #undef ACE_HAS_IDTYPE_T */

/* Inline all the static class OS methods to remove call overhead Note: This
   gets defined by OS.h if __ACE_INLINE__ is defined */
/* #undef ACE_HAS_INLINED_OSCALLS */

/* Define to 1 if the system has the type `int16_t'. */
#define ACE_HAS_INT16_T 1

/* Define to 1 if the system has the type `int32_t'. */
#define ACE_HAS_INT32_T 1

/* Define to 1 if the system has the type `int64_t'. */
#define ACE_HAS_INT64_T 1

/* Define to 1 if the system has the type `int8_t'. */
#define ACE_HAS_INT8_T 1

/* Define to 1 if the system supports x86/x86_64 inline assembly */
#define ACE_HAS_INTEL_ASSEMBLY 1

/* Platform supports the intrinsic interlocked optimizations. */
/* #undef ACE_HAS_INTRINSIC_INTERLOCKED */

/* Define to 1 if platform has the <intrin.h> header file. */
/* #undef ACE_HAS_INTRIN_H */

/* Platform supports IPv6 */
/* #undef ACE_HAS_IPV6 */

/* Platform supports IP multicast */
#define ACE_HAS_IP_MULTICAST 1

/* Platform supports the very odd IRIX 6.2 threads... */
/* #undef ACE_HAS_IRIX62_THREADS */

/* Define to 1 if platform has the declaration of isastream(). */
#define ACE_HAS_ISASTREAM_PROTOTYPE 1

/* Define to 1 if platform has itoa(). */
/* #undef ACE_HAS_ITOA */

/* The rusage_t structure has only two fields. */
/* #undef ACE_HAS_LIMITED_RUSAGE_T */

/* Define to 1 if system has Linux version of sysinfo(). */
#define ACE_HAS_LINUX_SYSINFO 1

/* Platform supports llseek(). This should not be defined if ACE_HAS_LSEEK64
   is defined. */
/* #undef ACE_HAS_LLSEEK */

/* Platform defines MAP_FAILED as a long constant. */
/* #undef ACE_HAS_LONG_MAP_FAILED */

/* Platform supports lseek64(). This should not be defined if ACE_HAS_LLSEEK
   is defined. */
#define ACE_HAS_LSEEK64 1

/* */
/* #undef ACE_HAS_LYNXOS4_SIGNALS */

/* Enabled malloc statistics collection. */
/* #undef ACE_HAS_MALLOC_STATS */

/* Define to 1 if platform has memchr(). */
#define ACE_HAS_MEMCHR 1

/* Define to 1 if unrolled ACE_OS::fast_memcpy() is faster than system
   memcpy() */
/* #undef ACE_HAS_MEMCPY_LOOP_UNROLL */

/* Platform supports Microsoft Foundation Classes */
/* #undef ACE_HAS_MFC */

/* Define to 1 if platform has mkdir(). */
#define ACE_HAS_MKDIR 1

/* Platform supports recvmsg and sendmsg */
#define ACE_HAS_MSG 1

/* Platform supports MT safe mktime() call (do any of them?) */
/* #undef ACE_HAS_MT_SAFE_MKTIME */

/* Sockets may be called in multi-threaded programs */
/* #undef ACE_HAS_MT_SAFE_SOCKETS */

/* Compiler supports timed mutex acquisitions (e.g.
   pthread_mutex_timedlock()). */
#define ACE_HAS_MUTEX_TIMEOUTS 1

/* Define to 1 if platform has nanosleep(). */
#define ACE_HAS_NANOSLEEP 1

/* Define to 1 if platform has the <new.h> header file. */
/* #undef ACE_HAS_NEW_H */

/* Compiler supports new (std::nothrow) */
#define ACE_HAS_NEW_NOTHROW 1

/* Platform provides new style C++ <new> header */
#define ACE_HAS_NEW_NO_H 1

/* Define to 1 if system has nonconst FD_ISSET() macro. */
/* #undef ACE_HAS_NONCONST_FD_ISSET */

/* Platform uses non-const char * in calls to gethostbyaddr, gethostbyname,
   getservbyname */
/* #undef ACE_HAS_NONCONST_GETBY */

/* Platform has a non-const parameter to msgsnd() (e.g., SCO). */
/* #undef ACE_HAS_NONCONST_MSGSND */

/* Platform omits const qualifier from iovec parameter in readv() prototype.
   */
/* #undef ACE_HAS_NONCONST_READV */

/* Platform's select() uses non-const timeval* (only found on Linux right now)
   */
#define ACE_HAS_NONCONST_SELECT_TIMEVAL 1

/* Platform omits const qualifier from msghdr parameter in sendmsg()
   prototype. */
/* #undef ACE_HAS_NONCONST_SENDMSG */

/* Platform omits const qualifier from rlimit parameter in setrlimit()
   prototype. */
/* #undef ACE_HAS_NONCONST_SETRLIMIT */

/* Platform has swab(char*, char*, ssize_t) variant. */
#define ACE_HAS_NONCONST_SWAB 1

/* Platform omits const qualifier from iovec parameter in writev() prototype.
   */
/* #undef ACE_HAS_NONCONST_WRITEV */

/* Causes the ACE_Object_Manager instance to be created in main (int, char
   *[]), instead of as a static (global) instance. */
/* #undef ACE_HAS_NONSTATIC_OBJECT_MANAGER */

/* Compiler/platform uses old malloc()/free() prototypes (ugh) */
/* #undef ACE_HAS_OLD_MALLOC */

/* Platform, e.g., Solaris 2.5, only supports SCHED_OTHER POSIX scheduling
   policy. */
/* #undef ACE_HAS_ONLY_SCHED_OTHER */

/* Use the semaphore implementation of ACE_Message_Queue rather than the
   emulated condition variable (NT and VxWorks). */
/* #undef ACE_HAS_OPTIMIZED_MESSAGE_QUEUE */

/* timezone* 2nd parameter & no prototype */
/* #undef ACE_HAS_OSF1_GETTIMEOFDAY */

/* Platform supports the OSF TLI timod STREAMS module */
/* #undef ACE_HAS_OSF_TIMOD_H */

/* Define to 1 if platform has the <pdh.h> header file. */
/* #undef ACE_HAS_PDH_H */

/* Define to 1 if system is using Intel Pentium(tm) processor */
/* #undef ACE_HAS_PENTIUM */

/* Platform contains <poll.h> */
#define ACE_HAS_POLL 1

/* Platform supports "position-independent" features provided by
   ACE_Based_Pointer<>. */
#define ACE_HAS_POSITION_INDEPENDENT_POINTERS 1

/* Platform supports POSIX getpwnam_r() function */
#define ACE_HAS_POSIX_GETPWNAM_R 1

/* Platform supports POSIX O_NONBLOCK semantics */
#define ACE_HAS_POSIX_NONBLOCK 1

/* Platform supports POSIX realtime signals */
#define ACE_HAS_POSIX_REALTIME_SIGNALS 1

/* Platform supports POSIX real-time semaphores (e.g., VxWorks and Solaris) */
#define ACE_HAS_POSIX_SEM 1

/* Platform supports timed POSIX semaphore acquisitions (sem_timedwait()). */
#define ACE_HAS_POSIX_SEM_TIMEOUT 1

/* Platform supports the POSIX struct timespec type */
#define ACE_HAS_POSIX_TIME 1

/* Define to 1 if system should use PowerPC's cycle counter */
/* #undef ACE_HAS_POWERPC_TIMER */

/* OS has priocntl (2) */
/* #undef ACE_HAS_PRIOCNTL */

/* Platform supports the /proc file system and defines tid_t in <sys/procfs.h>
   */
#define ACE_HAS_PROC_FS 1

/* Define to 1 if the system has the type `prusage_t'. */
/* #undef ACE_HAS_PRUSAGE_T */

/* Define to 1 if platform has POSIX threads */
#define ACE_HAS_PTHREADS 1

/* Platform supports POSIX Threads .4a Draft 4 */
/* #undef ACE_HAS_PTHREADS_DRAFT4 */

/* Platform supports POSIX Threads .4a Draft 6 */
/* #undef ACE_HAS_PTHREADS_DRAFT6 */

/* Platform supports POSIX Threads .1c Draft 7 */
/* #undef ACE_HAS_PTHREADS_DRAFT7 */

/* Platform supports POSIX.1c-1995 threads */
#define ACE_HAS_PTHREADS_STD 1

/* Platform has the UNIX98 extensions to Pthreads (rwlocks) */
#define ACE_HAS_PTHREADS_UNIX98_EXT 1

/* Define to 1 if platform has pthread_attr_setcreatesuspend_np(). */
/* #undef ACE_HAS_PTHREAD_ATTR_SETCREATESUSPEND_NP */

/* Define to 1 if platform has pthread_condattr_setkind_np(). */
/* #undef ACE_HAS_PTHREAD_CONDATTR_SETKIND_NP */

/* Define to 1 if platform has pthread_continue(). */
/* #undef ACE_HAS_PTHREAD_CONTINUE */

/* Define to 1 if platform has pthread_continue_np(). */
/* #undef ACE_HAS_PTHREAD_CONTINUE_NP */

/* Define to 1 if platform has pthread_getaffinity_np(). */
#define ACE_HAS_PTHREAD_GETAFFINITY_NP 1

/* Define to 1 if platform has pthread_getconcurrency(). */
#define ACE_HAS_PTHREAD_GETCONCURRENCY 1

/* Define to 1 if platform has pthread_mutexattr_setkind_np(). */
#define ACE_HAS_PTHREAD_MUTEXATTR_SETKIND_NP 1

/* Define to 1 if platform has the <pthread_np.h> header file. */
/* #undef ACE_HAS_PTHREAD_NP_H */

/* pthread.h declares an enum with PTHREAD_PROCESS_PRIVATE and
   PTHREAD_PROCESS_SHARED values */
#define ACE_HAS_PTHREAD_PROCESS_ENUM 1

/* Define to 1 if platform has pthread_resume_np(). */
/* #undef ACE_HAS_PTHREAD_RESUME_NP */

/* Define to 1 if platform has pthread_setaffinity_np(). */
#define ACE_HAS_PTHREAD_SETAFFINITY_NP 1

/* Define to 1 if platform has pthread_setconcurrency(). */
#define ACE_HAS_PTHREAD_SETCONCURRENCY 1

/* Define to 1 if platform has the declaration of pthread_sigmask(). */
#define ACE_HAS_PTHREAD_SIGMASK_PROTOTYPE 1

/* Define to 1 if platform has pthread_suspend(). */
/* #undef ACE_HAS_PTHREAD_SUSPEND */

/* Define to 1 if platform has pthread_suspend_np(). */
/* #undef ACE_HAS_PTHREAD_SUSPEND_NP */

/* Purify'ing. Defined on command line. */
/* #undef ACE_HAS_PURIFY */

/* Platform has pread() and pwrite() support. */
/* #undef ACE_HAS_P_READ_WRITE */

/* Quantify'ing. Defined on command line. */
/* #undef ACE_HAS_QUANTIFY */

/* Define to 1 to configure Reactor to use a user-space queue for
   notifications */
/* #undef ACE_HAS_REACTOR_NOTIFICATION_QUEUE */

/* Mutexes are inherently recursive (e.g., Win32) */
/* #undef ACE_HAS_RECURSIVE_MUTEXES */

/* Platform will recurse infinitely on thread exits from TSS cleanup routines
   (e.g., AIX) */
#define ACE_HAS_RECURSIVE_THR_EXIT_SEMANTICS 1

/* Platform supports reentrant functions (i.e., all the POSIX *_r functions).
   */
#define ACE_HAS_REENTRANT_FUNCTIONS 1

/* Platform supports the POSIX regular expression library */
/* #undef ACE_HAS_REGEX */

/* Platform has enum instead of int for first argument to ::{get,set}rlimit
   (). The value of this macro is the enum definition, e.g., enum
   __rlimit_resource, for Linux glibc 2.0. */
/* #undef ACE_HAS_RLIMIT_RESOURCE_ENUM */

/* Platform has enum instead of int for first argument to ::getrusage (). The
   value of this macro is the enum definition, e.g., enum __rusage_who, for
   Linux glibc 2.0. */
/* #undef ACE_HAS_RUSAGE_WHO_ENUM */

/* Define to 1 if platform has sched_getaffinity(). */
#define ACE_HAS_SCHED_GETAFFINITY 1

/* Define to 1 if platform has sched_setaffinity(). */
#define ACE_HAS_SCHED_SETAFFINITY 1

/* Define to 1 if platform has the <select.h> header file. */
/* #undef ACE_HAS_SELECT_H */

/* Compiler/platform defines a union semun for SysV shared memory */
/* #undef ACE_HAS_SEMUN */

/* Define to 1 if platform has setprogname(). */
/* #undef ACE_HAS_SETPROGNAME */

/* Define to 1 if platform has set_t_errno(). */
/* #undef ACE_HAS_SET_T_ERRNO */

/* Platform has shm_open() */
#define ACE_HAS_SHM_OPEN 1

/* Platform's sigaction() function takes const sigaction* as 2nd parameter */
#define ACE_HAS_SIGACTION_CONSTP2 1

/* Define to 1 if the system has the type `siginfo_t'. */
#define ACE_HAS_SIGINFO_T 1

/* Platform has bug with sigismember() (HP/UX 11). */
/* #undef ACE_HAS_SIGISMEMBER_BUG */

/* Platform supports the Win32 SignalObjectAndWait() function (WinNT 4.0 and
   beyond). */
/* #undef ACE_HAS_SIGNAL_OBJECT_AND_WAIT */

/* Define to 1 if platform has sigsuspend(). */
#define ACE_HAS_SIGSUSPEND 1

/* Define to 1 if platform has sigtimedwait(). */
#define ACE_HAS_SIGTIMEDWAIT 1

/* Define to 1 if `sigval_int' is a member of `union sigval'. */
/* #undef ACE_HAS_SIGVAL_SIGVAL_INT */

/* Define to 1 if `sigval_ptr' is a member of `union sigval'. */
/* #undef ACE_HAS_SIGVAL_SIGVAL_PTR */

/* Define to 1 if platform has sigwait(). */
#define ACE_HAS_SIGWAIT 1

/* Define to 1 if the system has the type 'sig_atomic_t'. */
#define ACE_HAS_SIG_ATOMIC_T 1

/* Compiler requires extern "C" functions for signals. */
#define ACE_HAS_SIG_C_FUNC 1

/* OS/compiler uses size_t * rather than int * for socket lengths */
/* #undef ACE_HAS_SIZET_SOCKET_LEN */

/* Define to 1 if `sin6_len' is a member of `sockaddr_in6'. */
/* #undef ACE_HAS_SOCKADDR_IN6_SIN6_LEN */

/* Define to 1 if `sin_len' is a member of `sockaddr_in'. */
/* #undef ACE_HAS_SOCKADDR_IN_SIN_LEN */

/* Platform requires (struct sockaddr *) for msg_name field of struct msghdr.
   */
#define ACE_HAS_SOCKADDR_MSG_NAME 1

/* Define to 1 if the system has the type `socklen_t'. */
#define ACE_HAS_SOCKLEN_T 1

/* Define to 1 if the system has the type `ssize_t'. */
#define ACE_HAS_SSIZE_T 1

/* Platform/compiler supports Standard C++ Library */
#define ACE_HAS_STANDARD_CPP_LIBRARY 1

/* Platform has void (*)(...) prototype for pthread_key_create() destructor
   (e.g., LynxOS). */
/* #undef ACE_HAS_STDARG_THR_DEST */

/* */
#define ACE_HAS_STDCPP_STL_INCLUDES 1

/* Platform provides C++ <stdexcept> header */
/* #undef ACE_HAS_STDEXCEPT_NO_H */

/* Define to 1 if platform has UNIX International Threads */
/* #undef ACE_HAS_STHREADS */

/* Define to 1 if the system has the type `struct strbuf'. */
#define ACE_HAS_STRBUF_T 1

/* Define to 1 use ACE's strdup() emulation */
/* #undef ACE_HAS_STRDUP_EMULATION */

/* Platform supports STREAMS */
#define ACE_HAS_STREAMS 1

/* Platform supports STREAM pipes */
/* #undef ACE_HAS_STREAM_PIPES */

/* Use the STRICT compilation mode on Win32. */
/* #undef ACE_HAS_STRICT */

/* Platform has <strings.h> (which contains bzero() prototype) */
#define ACE_HAS_STRINGS 1

/* Platform/Compiler supports a String class (e.g., GNU or Win32). */
#define ACE_HAS_STRING_CLASS 1

/* Define to 1 if platform has strnlen(). */
#define ACE_HAS_STRNLEN 1

/* Define to 1 if platform has strsignal(). */
#define ACE_HAS_STRSIGNAL 1

/* Compiler/platform has strange hostent API for socket *_r() calls */
/* #undef ACE_HAS_STRUCT_NETDB_DATA */

/* Compiler/platform supports SVR4 dynamic linking semantics */
#define ACE_HAS_SVR4_DYNAMIC_LINKING 1

/* Compiler/platform supports SVR4 gettimeofday() prototype but doesn't have a
   prototype */
/* #undef ACE_HAS_SVR4_GETTIMEOFDAY */

/* Compiler/platform supports SVR4 signal typedef. */
/* #undef ACE_HAS_SVR4_SIGNAL_T */

/* Compiler/platform supports SVR4 TLI (in particular, T_GETNAME stuff). */
/* #undef ACE_HAS_SVR4_TLI */

/* Define to 1 if platform has sysctl(). */
#define ACE_HAS_SYSCTL 1

/* Define to 1 if platform has the <sysent.h> header file. */
/* #undef ACE_HAS_SYSENT_H */

/* Platform supports System V IPC (most versions of UNIX, but not Win32) */
#define ACE_HAS_SYSV_IPC 1

/* Define to 1 if system has SysV version of sysinfo(). */
/* #undef ACE_HAS_SYSV_SYSINFO */

/* Define to 1 if platform has the <sys/filio.h> header file. */
/* #undef ACE_HAS_SYS_FILIO_H */

/* Define to 1 if platform has the <sys/loadavg.h> header file. */
/* #undef ACE_HAS_SYS_LOADAVG_H */

/* Define to 1 if platform has the <sys/pstat.h> header file. */
/* #undef ACE_HAS_SYS_PSTAT_H */

/* Compiler/platform supports _sys_siglist array */
#define ACE_HAS_SYS_SIGLIST 1

/* Define to 1 if platform has the <sys/sockio.h> header file. */
/* #undef ACE_HAS_SYS_SOCKIO_H */

/* Define to 1 if platform has the <sys/syscall.h> header file. */
#define ACE_HAS_SYS_SYSCALL_H 1

/* Define to 1 if platform has the <sys/sysinfo.h> header file. */
#define ACE_HAS_SYS_SYSINFO_H 1

/* Define to 1 if platform has the <sys/systeminfo.h> header file. */
/* #undef ACE_HAS_SYS_SYSTEMINFO_H */

/* Platform provides <sys/xti.h> header */
/* #undef ACE_HAS_SYS_XTI_H */

/* */
/* #undef ACE_HAS_TANDEM_SIGNALS */

/* Compiler implements templates that support typedefs inside of classes used
   as formal arguments to a template class. */
#define ACE_HAS_TEMPLATE_TYPEDEFS 1

/* Define to 1 if system supports SysV tty API. */
#define ACE_HAS_TERMIO 1

/* Define to 1 if system supports POSIX tty API. */
#define ACE_HAS_TERMIOS 1

/* Platform supports threads. */
#define ACE_HAS_THREADS 1

/* Platform allows multiple threads to call accept() on the same port (e.g.,
   WinNT). */
/* #undef ACE_HAS_THREAD_SAFE_ACCEPT */

/* Platform has thread_self() rather than pthread_self() (e.g., DCETHREADS and
   AIX) */
/* #undef ACE_HAS_THREAD_SELF */

/* Compiler/platform has thread-specific storage */
#define ACE_HAS_THREAD_SPECIFIC_STORAGE 1

/* The pthread_keycreate() routine *must* take extern C functions. */
/* #undef ACE_HAS_THR_C_DEST */

/* The pthread_create() routine *must* take extern C functions. */
/* #undef ACE_HAS_THR_C_FUNC */

/* Platform supports thr_keydelete (e.g,. UNIXWARE) */
/* #undef ACE_HAS_THR_KEYDELETE */

/* Platform calls thr_minstack() rather than thr_min_stack() (e.g., Tandem).
   */
/* #undef ACE_HAS_THR_MINSTACK */

/* Platform has thr_yield() */
/* #undef ACE_HAS_THR_YIELD */

/* Define to 1 if platform has global timezone variable */
#define ACE_HAS_TIMEZONE 1

/* Platform/compiler supports timezone * as second parameter to gettimeofday()
   and has a prototype. */
#define ACE_HAS_TIMEZONE_GETTIMEOFDAY 1

/* Platform supports TLI timod STREAMS module */
/* #undef ACE_HAS_TIMOD_H */

/* Platform supports TLI tiuser header */
/* #undef ACE_HAS_TIUSER_H */

/* Platform does not protect <tiuser.h> with extern "C" */
/* #undef ACE_HAS_TIUSER_H_BROKEN_EXTERN_C */

/* Platform supports TLI. Also see ACE_TLI_TCP_DEVICE. */
/* #undef ACE_HAS_TLI */

/* Platform provides TLI function prototypes */
/* #undef ACE_HAS_TLI_PROTOTYPES */

/* ACE provides TSS emulation. See also ACE_DEFAULT_THREAD_KEYS. */
/* #undef ACE_HAS_TSS_EMULATION */

/* Define to 1 if platform has ualarm(). */
#define ACE_HAS_UALARM 1

/* Define to 1 if the system has the type `ucontext_t'. */
#define ACE_HAS_UCONTEXT_T 1

/* Define to 1 if the system has the type `uint16_t'. */
#define ACE_HAS_UINT16_T 1

/* Define to 1 if the system has the type `uint32_t'. */
#define ACE_HAS_UINT32_T 1

/* Define to 1 if the system has the type `uint64_t'. */
#define ACE_HAS_UINT64_T 1

/* Define to 1 if the system has the type `uint8_t'. */
#define ACE_HAS_UINT8_T 1

/* Has inconsistent SVR4 signal stuff, but not the same as the other platforms
   */
/* #undef ACE_HAS_UNIXWARE_SVR4_SIGNAL_T */

/* Define to 1 if platform has vasprintf(). */
#define ACE_HAS_VASPRINTF 1

/* Define to 1 if platform has vaswprintf(). */
/* #undef ACE_HAS_VASWPRINTF */

/* Prints out console message in ACE_NOTSUP. Useful for tracking down origin
   of ACE_NOTSUP. */
/* #undef ACE_HAS_VERBOSE_NOTSUP */

/* Define to 1 if platform has vfwprintf(). */
#define ACE_HAS_VFWPRINTF 1

/* Platform/compiler supports void * as second parameter to gettimeofday() and
   has a prototype. */
/* #undef ACE_HAS_VOIDPTR_GETTIMEOFDAY */

/* Platform requires void * for mmap(). */
#define ACE_HAS_VOIDPTR_MMAP 1

/* OS/compiler uses void * arg 4 setsockopt() rather than const char * */
#define ACE_HAS_VOIDPTR_SOCKOPT 1

/* Define to 1 if platform has vswprintf(). */
#define ACE_HAS_VSWPRINTF 1

/* Platform/compiler supports wchar_t */
#define ACE_HAS_WCHAR 1

/* Define to 1 use ACE's wcsdup() emulation */
/* #undef ACE_HAS_WCSDUP_EMULATION */

/* Define to 1 if platform has wcsnlen(). */
#define ACE_HAS_WCSNLEN 1

/* Platform/compiler supports Win32 structural exceptions. */
/* #undef ACE_HAS_WIN32_STRUCTURAL_EXCEPTIONS */

/* The Win32 platform support TryEnterCriticalSection(). (WinNT 4.0 and
   beyond) */
/* #undef ACE_HAS_WIN32_TRYLOCK */

/* The Win32 platform supports WinSock 2.0. */
/* #undef ACE_HAS_WINSOCK2 */

/* Compiler handles explicit calling of template destructor correctly. */
#define ACE_HAS_WORKING_EXPLICIT_TEMPLATE_DESTRUCTOR 1

/* Solaris for intel uses macros for fstat() and stat(), these are wrappers
   for _fxstat() and _xstat() uses of the macros. Causes compile and runtime
   problems. */
/* #undef ACE_HAS_X86_STAT_MACROS */

/* Platform has the XLI version of TLI */
/* #undef ACE_HAS_XLI */

/* Platform has support for multi-byte character support compliant with the
   XPG4 Worldwide Portability Interface wide-character classification. */
#define ACE_HAS_XPG4_MULTIBYTE_CHAR 1

/* Platform has Xt Intrinsics Toolkit */
/* #undef ACE_HAS_XT */

/* Platform has XTI (X/Open-standardized superset of TLI). Implies ACE_HAS_TLI
   but uses a different header file. */
/* #undef ACE_HAS_XTI */

/* Define to 1 if platform has _InterlockedDecrement(). */
/* #undef ACE_HAS__INTERLOCKEDDECREMENT */

/* Define to 1 if platform has _InterlockedExchangeAdd(). */
/* #undef ACE_HAS__INTERLOCKEDEXCHANGEADD */

/* Define to 1 if platform has _InterlockedIncrement(). */
/* #undef ACE_HAS__INTERLOCKEDINCREMENT */

/* Define to the *printf format specifier (e.g. "%lld") for ACE_INT64 */
#define ACE_INT64_FORMAT_SPECIFIER "%ld"

/* Define to signed 64 bit integer type */
#define ACE_INT64_TYPE signed long

/* Define to the type of arg 2 for `ioctl'. */
#define ACE_IOCTL_TYPE_ARG2 int

/* Define to 1 if platform lacks access(). */
/* #undef ACE_LACKS_ACCESS */

/* Do not compile support for the "Codecs" ACE features. */
/* #undef ACE_LACKS_ACE_CODECS */

/* Platform can not build ace/IOStream{,_T}.cpp. This does not necessarily
   mean that the platform does not support iostreams. */
/* #undef ACE_LACKS_ACE_IOSTREAM */

/* Do not compile support for the "other" ACE features, such as CORBA
   handling, name services, and QoS. */
/* #undef ACE_LACKS_ACE_OTHER */

/* Do not compile support for the ACE Service Configurator. */
/* #undef ACE_LACKS_ACE_SVCCONF */

/* Do not compile support for the ACE Token feature. */
/* #undef ACE_LACKS_ACE_TOKEN */

/* Do not compile support for the ACE UUID feature. */
/* #undef ACE_LACKS_ACE_UUID */

/* Define to 1 if platform lacks alarm(). */
/* #undef ACE_LACKS_ALARM */

/* Define to 1 if platform lacks alphasort(). */
/* #undef ACE_LACKS_ALPHASORT */

/* Define to 1 if platform lacks the <arpa/inet.h> header file. */
/* #undef ACE_LACKS_ARPA_INET_H */

/* Define to 1 if platform lacks asctime(). */
/* #undef ACE_LACKS_ASCTIME */

/* Define to 1 if platform lacks asctime_r(). */
/* #undef ACE_LACKS_ASCTIME_R */

/* No system support for replacing any previous mappings. */
/* #undef ACE_LACKS_AUTO_MMAP_REPLACEMENT */

/* Platform lacks support for the standard C++ auto_ptr class */
/* #undef ACE_LACKS_AUTO_PTR */

/* Define to 1 if platform lacks bsearch(). */
/* #undef ACE_LACKS_BSEARCH */

/* Define to 1 to support unaligned CDR */
/* #undef ACE_LACKS_CDR_ALIGNMENT */

/* Compiler does not have any istream operator>> for chars, u_chars, or signed
   chars. */
#define ACE_LACKS_CHAR_RIGHT_SHIFTS 1

/* Compiler does not have operator>> (istream &, u_char *) or operator>>
   (istream &, signed char *) */
#define ACE_LACKS_CHAR_STAR_RIGHT_SHIFTS 1

/* Define to 1 if platform lacks chdir(). */
/* #undef ACE_LACKS_CHDIR */

/* Define to 1 if system lacks pthread_condattr_setpshared() */
/* #undef ACE_LACKS_CONDATTR_PSHARED */

/* Platform lacks condition variables (e.g., Win32 and VxWorks) */
/* #undef ACE_LACKS_COND_T */

/* pthread_cond_timedwait does *not* reset the time argument when the lock is
   acquired. */
/* #undef ACE_LACKS_COND_TIMEDWAIT_RESET */

/* Platform uses struct strbuf * rather than const struct strbuf * (e.g.,
   HP/UX 10.x) */
/* #undef ACE_LACKS_CONST_STRBUF_PTR */

/* Platform forgot const in cond_timewait (e.g., HP/UX). */
/* #undef ACE_LACKS_CONST_TIMESPEC_PTR */

/* Define to 1 if platform lacks difftime(). */
/* #undef ACE_LACKS_DIFFTIME */

/* Define to 1 if platform lacks the <dirent.h> header file. */
/* #undef ACE_LACKS_DIRENT_H */

/* Define to 1 if platform lacks the <dlfcn.h> header file. */
/* #undef ACE_LACKS_DLFCN_H */

/* Define to 1 if platform lacks dup(). */
/* #undef ACE_LACKS_DUP */

/* Define to 1 if platform lacks dup2(). */
/* #undef ACE_LACKS_DUP2 */

/* Define to 1 if platform lacks the <errno.h> header file. */
/* #undef ACE_LACKS_ERRNO_H */

/* Platform lacks the exec() family of system calls (e.g., Win32, VxWorks,
   Chorus) */
/* #undef ACE_LACKS_EXEC */

/* Define to 1 if platform lacks the <execinfo.h> header file. */
/* #undef ACE_LACKS_EXECINFO_H */

/* Define to 1 if platform lacks fcntl(). */
/* #undef ACE_LACKS_FCNTL */

/* Define to 1 if platform lacks the <fcntl.h> header file. */
/* #undef ACE_LACKS_FCNTL_H */

/* Define to 1 if platform lacks fgetwc(). */
/* #undef ACE_LACKS_FGETWC */

/* Define to 1 if platform lacks fgetws(). */
/* #undef ACE_LACKS_FGETWS */

/* Define to 1 if the system lacks the type `struct flock'. */
/* #undef ACE_LACKS_FILELOCKS */

/* Define to 1 if platform lacks fork(). */
/* #undef ACE_LACKS_FORK */

/* Define to 1 if platform lacks fputws(). */
/* #undef ACE_LACKS_FPUTWS */

/* Define to 1 if platform lacks fsync(). */
/* #undef ACE_LACKS_FSYNC */

/* Define to 1 if platform lacks getcwd(). */
/* #undef ACE_LACKS_GETCWD */

/* Define to 1 if platform lacks getegid(). */
/* #undef ACE_LACKS_GETEGID */

/* Define to 1 if platform lacks geteuid(). */
/* #undef ACE_LACKS_GETEUID */

/* Define to 1 if platform lacks getgid(). */
/* #undef ACE_LACKS_GETGID */

/* Define to 1 if platform lacks gethostent(). */
/* #undef ACE_LACKS_GETHOSTENT */

/* Define to 1 if platform lacks getipnodebyaddr(). */
#define ACE_LACKS_GETIPNODEBYADDR 1

/* Define to 1 if platform lacks getipnodebyname(). */
#define ACE_LACKS_GETIPNODEBYNAME 1

/* Define to 1 if platform lacks getopt(). */
/* #undef ACE_LACKS_GETOPT */

/* Define to 1 if platform lacks the declaration of getopt(). */
/* #undef ACE_LACKS_GETOPT_PROTOTYPE */

/* Define to 1 if platform lacks getpgid(). */
/* #undef ACE_LACKS_GETPGID */

/* Define to 1 if platform lacks getpgid() declaration in <unistd.h>. */
/* #undef ACE_LACKS_GETPGID_PROTOTYPE */

/* Define to 1 if platform lacks getpid(). */
/* #undef ACE_LACKS_GETPID */

/* Define to 1 if platform lacks getppid(). */
/* #undef ACE_LACKS_GETPPID */

/* Platforms lacks getservbyname() (e.g., VxWorks and Chorus). */
/* #undef ACE_LACKS_GETSERVBYNAME */

/* Define to 1 if platform lacks getuid(). */
/* #undef ACE_LACKS_GETUID */

/* Define to 1 if platform lacks gmtime(). */
/* #undef ACE_LACKS_GMTIME */

/* Define to 1 if platform lacks gmtime_r(). */
/* #undef ACE_LACKS_GMTIME_R */

/* Define to 1 if platform lacks inet_aton(). */
/* #undef ACE_LACKS_INET_ATON */

/* Platform can't handle "inline" keyword correctly. */
/* #undef ACE_LACKS_INLINE_FUNCTIONS */

/* Define to 1 if the system lacks the type `intmax_t'. */
/* #undef ACE_LACKS_INTMAX_T */

/* Define to 1 if the system lacks the type `intptr_t'. */
/* #undef ACE_LACKS_INTPTR_T */

/* Define to 1 if platform lacks the <inttypes.h> header file. */
/* #undef ACE_LACKS_INTTYPES_H */

/* iostream header does not declare ipfx (), opfx (), etc. */
#define ACE_LACKS_IOSTREAM_FX 1

/* iostreams are not supported adequately on the given platform. */
/* #undef ACE_LACKS_IOSTREAM_TOTALLY */

/* Define to 1 if platform lacks isatty(). */
/* #undef ACE_LACKS_ISATTY */

/* Define to 1 if platform lacks isblank(). */
/* #undef ACE_LACKS_ISBLANK */

/* Define to 1 if platform lacks isctype(). */
/* #undef ACE_LACKS_ISCTYPE */

/* Define to 1 if platform lacks iswblank(). */
/* #undef ACE_LACKS_ISWBLANK */

/* Define to 1 if platform lacks iswctype(). */
/* #undef ACE_LACKS_ISWCTYPE */

/* Define to 1 if platform lacks itow(). */
#define ACE_LACKS_ITOW 1

/* Define to 1 if the system lacks the type `key_t'. */
/* #undef ACE_LACKS_KEY_T */

/* Define to 1 if platform lacks kill(). */
/* #undef ACE_LACKS_KILL */

/* Platform lacks streambuf "linebuffered ()". */
#define ACE_LACKS_LINEBUFFERED_STREAMBUF 1

/* Platform/compiler lacks the llseek() prototype. This should not be defined
   if ACE_LACKS_LSEEK64_PROTOTYPE is defined. */
/* #undef ACE_LACKS_LLSEEK_PROTOTYPE */

/* Define to 1 if platform lacks localtime(). */
/* #undef ACE_LACKS_LOCALTIME */

/* Define to 1 if platform lacks log2(). */
/* #undef ACE_LACKS_LOG2 */

/* Compiler/platform does not support the unsigned long long datatype. */
/* #undef ACE_LACKS_LONGLONG_T */

/* Platform/compiler lacks the lseek64() prototype. This should not be defined
   if ACE_LACKS_LLSEEK_PROTOTYPE is defined. */
/* #undef ACE_LACKS_LSEEK64_PROTOTYPE */

/* Define to 1 if platform lacks lstat(). */
/* #undef ACE_LACKS_LSTAT */

/* Define to 1 if platform lacks madvise(). */
/* #undef ACE_LACKS_MADVISE */

/* Define to 1 if platform lacks the declaration of madvise(). */
/* #undef ACE_LACKS_MADVISE_PROTOTYPE */

/* Define to 1 if platform lacks the <malloc.h> header file. */
/* #undef ACE_LACKS_MALLOC_H */

/* Define to 1 if platform lacks the <memory.h> header file. */
/* #undef ACE_LACKS_MEMORY_H */

/* Define to 1 if platform lacks mkfifo(). */
/* #undef ACE_LACKS_MKFIFO */

/* Define to 1 if platform lacks mkstemp(). */
/* #undef ACE_LACKS_MKSTEMP */

/* Define to 1 if platform lacks the declaration of mkstemp(). */
/* #undef ACE_LACKS_MKSTEMP_PROTOTYPE */

/* Define to 1 if platform lacks mktemp(). */
/* #undef ACE_LACKS_MKTEMP */

/* Define to 1 if platform lacks the declaration of mktemp(). */
/* #undef ACE_LACKS_MKTEMP_PROTOTYPE */

/* The platform doesn't have mmap(2) (e.g., SCO UNIX). */
/* #undef ACE_LACKS_MMAP */

/* Platform/compiler doesn't have open() mode masks. */
/* #undef ACE_LACKS_MODE_MASKS */

/* Platform does not have Motif X toolkit available */
/* #undef ACE_LACKS_MOTIF */

/* Define to 1 if platform lacks mprotect(). */
/* #undef ACE_LACKS_MPROTECT */

/* Platform defines ACE_HAS_MSG, but lacks msg_accrights{len}. */
#define ACE_LACKS_MSG_ACCRIGHTS 1

/* Define to 1 if platform lacks msync(). */
/* #undef ACE_LACKS_MSYNC */

/* Define to 1 if system lacks pthread_mutexattr_setpshared(). */
/* #undef ACE_LACKS_MUTEXATTR_PSHARED */

/* Platform lacks named POSIX semaphores (e.g., Chorus) */
/* #undef ACE_LACKS_NAMED_POSIX_SEM */

/* Define to 1 if platform lacks the <netdb.h> header file. */
/* #undef ACE_LACKS_NETDB_H */

/* Platform does not support reentrant netdb functions (getprotobyname_r,
   getprotobynumber_r, gethostbyaddr_r, gethostbyname_r, getservbyname_r). */
#define ACE_LACKS_NETDB_REENTRANT_FUNCTIONS 1

/* Define to 1 if platform lacks the <netinet/in.h> header file. */
/* #undef ACE_LACKS_NETINET_IN_H */

/* Define to 1 if platform lacks the <netinet/tcp.h> header file. */
/* #undef ACE_LACKS_NETINET_TCP_H */

/* Define to 1 if platform lacks the <net/if.h> header file. */
/* #undef ACE_LACKS_NET_IF_H */

/* OS requires non-null status pointer for pthread_join () */
/* #undef ACE_LACKS_NULL_PTHREAD_STATUS */

/* Platform lacks std::numeric_limits<> */
/* #undef ACE_LACKS_NUMERIC_LIMITS */

/* Define to 1 if platform lacks IGMPv3 "perfect" filtering of multicast
   datagrams at the socket level. If defined, ACE_SOCK_Dgram_Mcast will bind
   the first joined multicast group to the socket, and all future joins on
   that socket will fail with an error. */
/* #undef ACE_LACKS_PERFECT_MULTICAST_FILTERING */

/* Define to 1 if platform lacks pipe(). */
/* #undef ACE_LACKS_PIPE */

/* Compiler doesn't support placement operator delete(void *, void *). */
/* #undef ACE_LACKS_PLACEMENT_OPERATOR_DELETE */

/* Compiler complains about use of obsolete "pragma once" */
#define ACE_LACKS_PRAGMA_ONCE 1

/* Define to 1 if the system lacks the type 'pri_t'. */
#define ACE_LACKS_PRI_T 1

/* Define to 1 if platform lacks pthread_attr_setstack() */
/* #undef ACE_LACKS_PTHREAD_ATTR_SETSTACK */

/* Define to 1 if platform lacks pthread_attr_setstackaddr(). */
/* #undef ACE_LACKS_PTHREAD_ATTR_SETSTACKADDR */

/* Define to 1 if platform lacks pthread_attr_setstacksize(). */
/* #undef ACE_LACKS_PTHREAD_ATTR_SETSTACKSIZE */

/* Platform lacks pthread_cancel() */
/* #undef ACE_LACKS_PTHREAD_CANCEL */

/* Define to 1 if platform lacks pthread_sigmask(). */
/* #undef ACE_LACKS_PTHREAD_SIGMASK */

/* Define to 1 if platform lacks pthread_thr_sigsetmask(). */
#define ACE_LACKS_PTHREAD_THR_SIGSETMASK 1

/* Define to 1 if platform lacks pthread_yield(). */
/* #undef ACE_LACKS_PTHREAD_YIELD */

/* Platform lacks, getpwnam(), etc. */
/* #undef ACE_LACKS_PWD_FUNCTIONS */

/* Define to 1 if platform lacks the <pwd.h> header file. */
/* #undef ACE_LACKS_PWD_H */

/* Platform lacks getpwnam_r() methods (e.g., SGI 6.2). */
/* #undef ACE_LACKS_PWD_REENTRANT_FUNCTIONS */

/* Define to 1 if platform lacks qsort(). */
/* #undef ACE_LACKS_QSORT */

/* Define to 1 if platform lacks readdir_r(). */
/* #undef ACE_LACKS_READDIR_R */

/* Define to 1 if platform lacks readlink(). */
/* #undef ACE_LACKS_READLINK */

/* Define to 1 if platform lacks readv(). */
/* #undef ACE_LACKS_READV */

/* Define to 1 if platform lacks realpath(). */
/* #undef ACE_LACKS_REALPATH */

/* Define to 1 if platform lacks recvmsg(). */
/* #undef ACE_LACKS_RECVMSG */

/* Define to 1 if platform lacks rename(). */
/* #undef ACE_LACKS_RENAME */

/* Platform/compiler lacks {get,set}rlimit() function (e.g., VxWorks, Chorus,
   and SCO UNIX) */
/* #undef ACE_LACKS_RLIMIT */

/* Define to 1 if platform lacks the declaration of {get,set}rlimit(). */
/* #undef ACE_LACKS_RLIMIT_PROTOTYPE */

/* Define to 1 if system lacks pthread_rwlockattr_setpshared(). */
/* #undef ACE_LACKS_RWLOCKATTR_PSHARED */

/* Define to 1 if the system lacks the type `rwlock_t'. */
#define ACE_LACKS_RWLOCK_T 1

/* Define to 1 if platform lacks sbrk(). */
/* #undef ACE_LACKS_SBRK */

/* Define to 1 if platform lacks the <sched.h> header file. */
/* #undef ACE_LACKS_SCHED_H */

/* Define to 1 if platform lacks the <search.h> header file. */
/* #undef ACE_LACKS_SEARCH_H */

/* Define to 1 if platform lacks seekdir(). */
/* #undef ACE_LACKS_SEEKDIR */

/* Define to 1 if platform lacks the <semaphore.h> header file. */
/* #undef ACE_LACKS_SEMAPHORE_H */

/* Define to 1 if the system lacks the type `struct sembuf'. */
/* #undef ACE_LACKS_SEMBUF_T */

/* Define to 1 if platform lacks sendmsg(). */
/* #undef ACE_LACKS_SENDMSG */

/* Platform lacks pthread_attr_setdetachstate() (e.g., HP/UX 10.x) */
/* #undef ACE_LACKS_SETDETACH */

/* Define to 1 if platform lacks setegid(). */
/* #undef ACE_LACKS_SETEGID */

/* Define to 1 if platform lacks setenv(). */
/* #undef ACE_LACKS_SETENV */

/* Define to 1 if platform lacks seteuid(). */
/* #undef ACE_LACKS_SETEUID */

/* Define to 1 if platform lacks setgid(). */
/* #undef ACE_LACKS_SETGID */

/* Define to 1 if platform lacks setpgid(). */
/* #undef ACE_LACKS_SETPGID */

/* Define to 1 if platform lacks setpgid() declaration in <unistd.h>. */
/* #undef ACE_LACKS_SETPGID_PROTOTYPE */

/* Define to 1 if platform lacks setregid(). */
/* #undef ACE_LACKS_SETREGID */

/* Define to 1 if platform lacks setregid() declaration in <unistd.h>. */
/* #undef ACE_LACKS_SETREGID_PROTOTYPE */

/* Define to 1 if platform lacks setreuid(). */
/* #undef ACE_LACKS_SETREUID */

/* Define to 1 if platform lacks setreuid() declaration in <unistd.h>. */
/* #undef ACE_LACKS_SETREUID_PROTOTYPE */

/* Platform lacks pthread_attr_setsched() (e.g. MVS) */
/* #undef ACE_LACKS_SETSCHED */

/* Define to 1 if platform lacks setsid(). */
/* #undef ACE_LACKS_SETSID */

/* Define to 1 if platform lacks setuid(). */
/* #undef ACE_LACKS_SETUID */

/* Define to 1 if platform lacks sigaction(). */
/* #undef ACE_LACKS_SIGACTION */

/* Define to 1 if platform lacks the <siginfo.h> header file. */
#define ACE_LACKS_SIGINFO_H 1

/* Define to 1 if platform lacks the <signal.h> header file. */
/* #undef ACE_LACKS_SIGNAL_H */

/* Platform lacks "signed char" type (broken!) */
/* #undef ACE_LACKS_SIGNED_CHAR */

/* Define to 1 if the system lacks the type `sigset_t'. */
/* #undef ACE_LACKS_SIGSET */

/* Define to 1 if `si_addr' is not a member of `siginfo_t'. */
/* #undef ACE_LACKS_SI_ADDR */

/* Define to 1 if platform lacks socketpair(). */
/* #undef ACE_LACKS_SOCKETPAIR */

/* Platform doesn't support SO_SNDBUF/SO_RCVBUF (used in TAO) */
/* #undef ACE_LACKS_SOCKET_BUFSIZ */

/* Compiler doesn't support static data member templates */
/* #undef ACE_LACKS_STATIC_DATA_MEMBER_TEMPLATES */

/* Define to 1 if platform lacks the <stdint.h> header file. */
/* #undef ACE_LACKS_STDINT_H */

/* Define to 1 if platform lacks the <stdlib.h> header file. */
/* #undef ACE_LACKS_STDLIB_H */

/* Define to 1 if platform lacks strcasecmp(). */
/* #undef ACE_LACKS_STRCASECMP */

/* Define to 1 if platform lacks a declaration for strcasecmp() */
/* #undef ACE_LACKS_STRCASECMP_PROTOTYPE */

/* Define to 1 if platform lacks strchr(). */
/* #undef ACE_LACKS_STRCHR */

/* Define to 1 if platform lacks strdup(). */
/* #undef ACE_LACKS_STRDUP */

/* Define to 1 if platform lacks strerror(). */
/* #undef ACE_LACKS_STRERROR */

/* Define to 1 if platform lacks strftime(). */
/* #undef ACE_LACKS_STRFTIME */

/* Define to 1 if platform lacks the <strings.h> header file. */
/* #undef ACE_LACKS_STRINGS_H */

/* Define to 1 if platform lacks the <string.h> header file. */
/* #undef ACE_LACKS_STRING_H */

/* Define to 1 if platform lacks strncasecmp(). */
/* #undef ACE_LACKS_STRNCASECMP */

/* Define to 1 if platform lacks a declaration for strncasecmp() */
/* #undef ACE_LACKS_STRNCASECMP_PROTOTYPE */

/* Define to 1 if platform lacks the declaration of strnlen(). */
/* #undef ACE_LACKS_STRNLEN_PROTOTYPE */

/* Platform lacks stropts.h */
/* #undef ACE_LACKS_STROPTS_H */

/* Define to 1 if platform lacks strpbrk(). */
/* #undef ACE_LACKS_STRPBRK */

/* Define to 1 if platform lacks strptime(). */
/* #undef ACE_LACKS_STRPTIME */

/* Define to 1 if platform lacks the declaration of strptime(). */
/* #undef ACE_LACKS_STRPTIME_PROTOTYPE */

/* Define to 1 if platform lacks strrchr(). */
/* #undef ACE_LACKS_STRRCHR */

/* Define to 1 if the system lacks the type `struct strrecvfd'. */
/* #undef ACE_LACKS_STRRECVFD */

/* Define to 1 if platform lacks strspn(). */
/* #undef ACE_LACKS_STRSPN */

/* Define to 1 if platform lacks strtod(). */
/* #undef ACE_LACKS_STRTOD */

/* Platform/compiler lacks the strtok_r() prototype */
/* #undef ACE_LACKS_STRTOK_R_PROTOTYPE */

/* Define to 1 if platform lacks strtol(). */
/* #undef ACE_LACKS_STRTOL */

/* Define to 1 if platform lacks strtoll(). */
/* #undef ACE_LACKS_STRTOLL */

/* Define to 1 if platform lacks a declaration for strtoll() */
/* #undef ACE_LACKS_STRTOLL_PROTOTYPE */

/* Define to 1 if platform lacks strtoul(). */
/* #undef ACE_LACKS_STRTOUL */

/* Define to 1 if platform lacks strtoull(). */
/* #undef ACE_LACKS_STRTOULL */

/* Define to 1 if platform lacks a declaration for strtoull() */
/* #undef ACE_LACKS_STRTOULL_PROTOTYPE */

/* Define to 1 if the system lacks the type `struct dirent'. */
/* #undef ACE_LACKS_STRUCT_DIR */

/* Define to 1 if the system uses int instead of `struct lifnum' for
   SIOCGIFNUM ioctl. */
#define ACE_LACKS_STRUCT_LIFNUM 1

/* Define to 1 if the system lacks the type 'suseconds_t'. */
/* #undef ACE_LACKS_SUSECONDS_T */

/* Define to 1 if platform lacks swab(). */
/* #undef ACE_LACKS_SWAB */

/* Define to 1 if platform lacks syscall(). */
/* #undef ACE_LACKS_SYSCALL */

/* Define to 1 if platform lacks sysconf(). */
/* #undef ACE_LACKS_SYSCONF */

/* Define to 1 if platform lacks system(). */
/* #undef ACE_LACKS_SYSTEM */

/* Platform lacks SYSV message queue prototypes */
/* #undef ACE_LACKS_SYSV_MSQ_PROTOS */

/* Platform lacks System V shared memory (e.g., Win32 and VxWorks) */
/* #undef ACE_LACKS_SYSV_SHMEM */

/* Define to 1 if platform lacks the <sys/ioctl.h> header file. */
/* #undef ACE_LACKS_SYS_IOCTL_H */

/* Define to 1 if platform lacks the <sys/ipc.h> header file. */
/* #undef ACE_LACKS_SYS_IPC_H */

/* Define to 1 if platform lacks the <sys/mman.h> header file. */
/* #undef ACE_LACKS_SYS_MMAN_H */

/* Platform lacks sys/msg.h (e.g., Chorus and VxWorks) */
/* #undef ACE_LACKS_SYS_MSG_H */

/* Define to 1 if platform lacks the <sys/param.h> header file. */
/* #undef ACE_LACKS_SYS_PARAM_H */

/* Define to 1 if platform lacks the <sys/resource.h> header file. */
/* #undef ACE_LACKS_SYS_RESOURCE_H */

/* Define to 1 if platform lacks the <sys/select.h> header file. */
/* #undef ACE_LACKS_SYS_SELECT_H */

/* Define to 1 if platform lacks the <sys/sem.h> header file. */
/* #undef ACE_LACKS_SYS_SEM_H */

/* Define to 1 if platform lacks the <sys/shm.h> header file. */
/* #undef ACE_LACKS_SYS_SHM_H */

/* Define to 1 if platform lacks the <sys/socket.h> header file. */
/* #undef ACE_LACKS_SYS_SOCKET_H */

/* Define to 1 if platform lacks the <sys/stat.h> header file. */
/* #undef ACE_LACKS_SYS_STAT_H */

/* Define to 1 if platform lacks the <sys/sysctl.h> header file. */
/* #undef ACE_LACKS_SYS_SYSCTL_H */

/* Define to 1 if platform lacks the <sys/time.h> header file. */
/* #undef ACE_LACKS_SYS_TIME_H */

/* Define to 1 if platform lacks the <sys/types.h> header file. */
/* #undef ACE_LACKS_SYS_TYPES_H */

/* Define to 1 if platform lacks the <sys/uio.h> header file. */
/* #undef ACE_LACKS_SYS_UIO_H */

/* Define to 1 if platform lacks the <sys/un.h> header file. */
/* #undef ACE_LACKS_SYS_UN_H */

/* Define to 1 if platform lacks the <sys/wait.h> header file. */
/* #undef ACE_LACKS_SYS_WAIT_H */

/* OS does not support TCP_NODELAY */
/* #undef ACE_LACKS_TCP_NODELAY */

/* Define to 1 if platform lacks telldir(). */
/* #undef ACE_LACKS_TELLDIR */

/* Define to 1 if platform lacks tempnam(). */
/* #undef ACE_LACKS_TEMPNAM */

/* Define to 1 if platform lacks the <termios.h> header file. */
/* #undef ACE_LACKS_TERMIOS_H */

/* Define to 1 if platform lacks the <termio.h> header file. */
/* #undef ACE_LACKS_TERMIO_H */

/* Platform lacks pthread_attr_setscope() */
/* #undef ACE_LACKS_THREAD_PROCESS_SCOPING */

/* Define to 1 if platform lacks the declarations of recv_timedwait,
   send_timedwait, etc. */
#define ACE_LACKS_TIMEDWAIT_PROTOTYPES 1

/* Platform does not define timepec_t as a typedef for struct timespec. */
#define ACE_LACKS_TIMESPEC_T 1

/* Define to 1 if platform lacks the <time.h> header file. */
/* #undef ACE_LACKS_TIME_H */

/* Define to 1 if platform lacks towlower(). */
/* #undef ACE_LACKS_TOWLOWER */

/* Define to 1 if platform lacks towupper(). */
/* #undef ACE_LACKS_TOWUPPER */

/* Define to 1 if platform lacks truncate(). */
/* #undef ACE_LACKS_TRUNCATE */

/* Header files lack t_errno for TLI */
/* #undef ACE_LACKS_T_ERRNO */

/* Define to 1 if platform lacks the declaration of ualarm(). */
/* #undef ACE_LACKS_UALARM_PROTOTYPE */

/* Define to 1 if platform lacks the <ucontext.h> header file. */
/* #undef ACE_LACKS_UCONTEXT_H */

/* Define to 1 if the system lacks the type `uintmax_t'. */
/* #undef ACE_LACKS_UINTMAX_T */

/* Define to 1 if the system lacks the type `uintptr_t'. */
/* #undef ACE_LACKS_UINTPTR_T */

/* Define to 1 if platform lacks umask(). */
/* #undef ACE_LACKS_UMASK */

/* Define to 1 if platform lacks uname(). */
/* #undef ACE_LACKS_UNAME */

/* */
#define ACE_LACKS_UNBUFFERED_STREAMBUF 1

/* Define to 1 if platform lacks the <unistd.h> header file. */
/* #undef ACE_LACKS_UNISTD_H */

/* ACE platform has no UNIX domain sockets */
/* #undef ACE_LACKS_UNIX_DOMAIN_SOCKETS */

/* Platform lacks full signal support (e.g., Win32 and Chorus). */
/* #undef ACE_LACKS_UNIX_SIGNALS */

/* Define to 1 if platform lacks unlink(). */
/* #undef ACE_LACKS_UNLINK */

/* Define to 1 if platform lacks unsetenv(). */
/* #undef ACE_LACKS_UNSETENV */

/* Define to 1 if the system lacks the type 'useconds_t'. */
/* #undef ACE_LACKS_USECONDS_T */

/* Define to 1 if platform lacks the <utime.h> header file. */
/* #undef ACE_LACKS_UTIME_H */

/* Define to 1 if the system lacks the type `struct utsname'. */
/* #undef ACE_LACKS_UTSNAME_T */

/* Define to 1 if the system lacks the type `u_long_long_t'. */
#define ACE_LACKS_U_LONGLONG_T 1

/* Define to 1 if platform lacks vsnprintf(). */
/* #undef ACE_LACKS_VSNPRINTF */

/* Define to 1 if platform lacks the <wchar.h> header file. */
/* #undef ACE_LACKS_WCHAR_H */

/* Define to 1 if the system lacks the type `wchar_t'. */
/* #undef ACE_LACKS_WCHAR_T */

/* Define to 1 if platform lacks wcscasecmp(). */
/* #undef ACE_LACKS_WCSCASECMP */

/* Define to 1 if platform lacks wcscat(). */
/* #undef ACE_LACKS_WCSCAT */

/* Define to 1 if platform lacks wcschr(). */
/* #undef ACE_LACKS_WCSCHR */

/* Define to 1 if platform lacks wcscmp(). */
/* #undef ACE_LACKS_WCSCMP */

/* Define to 1 if platform lacks wcscpy(). */
/* #undef ACE_LACKS_WCSCPY */

/* Define to 1 if platform lacks wcscspn(). */
/* #undef ACE_LACKS_WCSCSPN */

/* Define to 1 if platform lacks wcsdup(). */
/* #undef ACE_LACKS_WCSDUP */

/* Define to 1 if platform lacks wcslen(). */
/* #undef ACE_LACKS_WCSLEN */

/* Define to 1 if platform lacks wcsncasecmp(). */
/* #undef ACE_LACKS_WCSNCASECMP */

/* Define to 1 if platform lacks wcsncat(). */
/* #undef ACE_LACKS_WCSNCAT */

/* Define to 1 if platform lacks wcsncmp(). */
/* #undef ACE_LACKS_WCSNCMP */

/* Define to 1 if platform lacks wcsncpy(). */
/* #undef ACE_LACKS_WCSNCPY */

/* Define to 1 if platform lacks wcsnicmp(). */
#define ACE_LACKS_WCSNICMP 1

/* Define to 1 if platform lacks wcspbrk(). */
/* #undef ACE_LACKS_WCSPBRK */

/* Define to 1 if platform lacks wcsrchr(). */
/* #undef ACE_LACKS_WCSRCHR */

/* Define to 1 if platform lacks wcsspn(). */
/* #undef ACE_LACKS_WCSSPN */

/* Define to 1 if platform lacks wcsstr(). */
/* #undef ACE_LACKS_WCSSTR */

/* Define to 1 if platform lacks wcstod(). */
/* #undef ACE_LACKS_WCSTOD */

/* Define to 1 if platform lacks wcstok(). */
/* #undef ACE_LACKS_WCSTOK */

/* Define to 1 if platform lacks wcstol(). */
/* #undef ACE_LACKS_WCSTOL */

/* Define to 1 if platform lacks wcstoll(). */
/* #undef ACE_LACKS_WCSTOLL */

/* Define to 1 if platform lacks a declaration for wcstoll() */
/* #undef ACE_LACKS_WCSTOLL_PROTOTYPE */

/* Define to 1 if platform lacks wcstoul(). */
/* #undef ACE_LACKS_WCSTOUL */

/* Define to 1 if platform lacks wcstoull(). */
/* #undef ACE_LACKS_WCSTOULL */

/* Define to 1 if platform lacks a declaration for wcstoull() */
/* #undef ACE_LACKS_WCSTOULL_PROTOTYPE */

/* Define to 1 if platform lacks the <wctype.h> header file. */
/* #undef ACE_LACKS_WCTYPE_H */

/* Define to 1 if platform lacks writev(). */
/* #undef ACE_LACKS_WRITEV */

/* Define to environment variable used for DLL search path */
/* #undef ACE_LD_SEARCH_PATH */

/* typedef for ACE_LOFF_T */
/* #undef ACE_LOFF_T_TYPEDEF */

/* Renames "main (int, char *[])", for platforms such as g++/VxWorks that
   don't allow main. Requires the use of ACE_HAS_NONSTATIC_OBJECT_MANAGER. */
/* #undef ACE_MAIN */

/* */
/* #undef ACE_MALLOC_ALIGN */

/* */
/* #undef ACE_MAP_PRIVATE */

/* Define to 1 if platform has 1 parameter mkdir() */
/* #undef ACE_MKDIR_LACKS_MODE */

/* Compile using multi-thread libraries */
#define ACE_MT_SAFE 1

/* Turns off debugging features */
/* #undef ACE_NDEBUG */

/* Necessary with some compilers to pass ACE_TTY_IO as parameter to
   DEV_Connector. */
#define ACE_NEEDS_DEV_IO_CONVERSION 1

/* Compiler requires a definition for a "hidden" function, e.g., a private,
   unimplemented copy constructor or assignment operator. The SGI C++ compiler
   needs this, in template classes, with
   ACE_HAS_TEMPLATE_INSTANTIATION_PRAGMA. */
/* #undef ACE_NEEDS_FUNC_DEFINITIONS */

/* Required by platforms with small default stacks. */
/* #undef ACE_NEEDS_HUGE_THREAD_STACKSIZE */

/* OS has LWPs, and when the priority of a bound thread is set, then the LWP
   priority must be set also. */
/* #undef ACE_NEEDS_LWP_PRIO_SET */

/* Platform needs to #include <sched.h> to get thread scheduling defs. */
/* #undef ACE_NEEDS_SCHED_H */

/* Compiler's 'new' throws exception on failure (ANSI C++ behavior). */
#define ACE_NEW_THROWS_EXCEPTIONS 1

/* Turns off the LM_DEBUG and LM_ERROR logging macros... */
/* #undef ACE_NLOGGING */

/* Explicitly disable ACE inlining */
/* #undef ACE_NO_INLINE */

/* Turns off the tracing feature. */
/* #undef ACE_NTRACE */

/* Defines the page size of the system (not used on Win32 or with
   ACE_HAS_GETPAGESIZE). */
/* #undef ACE_PAGE_SIZE */

/* Flag that denotes the symbol should be exported from the DSO/DLL. */
/* #undef ACE_Proper_Export_Flag */

/* Flag that denotes the symbol should be imported from the DSO/DLL. */
/* #undef ACE_Proper_Import_Flag */

/* Platform redefines the t_... names (UnixWare) */
/* #undef ACE_REDEFINES_XTI_FUNCTIONS */

/* shm_open() requires a leading slash in name */
/* #undef ACE_SHM_OPEN_REQUIRES_ONE_SLASH */

/* Size of the native "double" type */
#define ACE_SIZEOF_DOUBLE 8

/* Size of the native "float" type */
#define ACE_SIZEOF_FLOAT 4

/* Size of the native "int" type */
#define ACE_SIZEOF_INT 4

/* Size of the native "long" type */
#define ACE_SIZEOF_LONG 8

/* Size of the native "long double" type */
#define ACE_SIZEOF_LONG_DOUBLE 16

/* Size of the native "long long" type */
#define ACE_SIZEOF_LONG_LONG 8

/* Size of the native "short" type */
#define ACE_SIZEOF_SHORT 2

/* Size of the native "pointer to void" type */
#define ACE_SIZEOF_VOID_P 8

/* Size of the native "wchar_t" type */
#define ACE_SIZEOF_WCHAR 4

/* Define to the *printf format specifier (e.g. "%u") for size_t */
#define ACE_SIZE_T_FORMAT_SPECIFIER "%lu"

/* Define to the *printf format specifier (e.g. "%d") for ssize_t */
#define ACE_SSIZE_T_FORMAT_SPECIFIER "%ld"

/* Define to function that is equivalent to strcasecmp() */
/* #undef ACE_STRCASECMP_EQUIVALENT */

/* Define to function that is equivalent to strdup() */
/* #undef ACE_STRDUP_EQUIVALENT */

/* Define to function that is equivalent to strncasecmp() */
/* #undef ACE_STRNCASECMP_EQUIVALENT */

/* Define to function that is equivalent to strtoll() */
/* #undef ACE_STRTOLL_EQUIVALENT */

/* Define to function that is equivalent to strtoull() */
/* #undef ACE_STRTOULL_EQUIVALENT */

/* Compiler's template mechanism must use a pragma. This is used for AIX's C++
   compiler. */
/* #undef ACE_TEMPLATES_REQUIRE_PRAGMA */

/* Compiler's template mechanim must see source code (i.e., .cpp files). This
   is used for GNU G++. */
#define ACE_TEMPLATES_REQUIRE_SOURCE 1

/* Specify this if you don't want threads to inherit parent thread's
   ACE_Log_Msg properties. */
/* #undef ACE_THREADS_DONT_INHERIT_LOG_MSG */

/* */
/* #undef ACE_THR_PRI_FIFO_DEF */

/* */
#define ACE_TIMER_SKEW (1000 * 10)

/* Device the platform uses for TCP on TLI. Only needed if not /dev/tcp. */
/* #undef ACE_TLI_TCP_DEVICE */

/* Define to the *printf format specifier (e.g. "%llu") for ACE_UINT64 */
#define ACE_UINT64_FORMAT_SPECIFIER "%lu"

/* Define to unsigned 64 bit integer type */
#define ACE_UINT64_TYPE unsigned long

/* Platform uses assembly symbols instead of C symbols in dlsym() */
/* #undef ACE_USES_ASM_SYMBOL_IN_DLSYM */

/* Enable IPv6 support on platforms that don't have IPv6 turned on by default
   */
/* #undef ACE_USES_IPV4_IPV6_MIGRATION */

/* Some files, such as ace/streams.h, want to include new style C++ stream
   headers. These headers are iomanip, ios, iostream, istream, ostream,
   fstream and streambuf. If _all_ of these headers aren't available, then
   assume that only iostream.h and fstream.h are available. */
/* #undef ACE_USES_OLD_IOSTREAMS */

/* When linking MFC as a static library is desired */
/* #undef ACE_USES_STATIC_MFC */

/* Platform has its standard C++ library in the namespace std. */
#define ACE_USES_STD_NAMESPACE_FOR_STDCPP_LIB 1

/* ACE is built to use wide characters internally */
/* #undef ACE_USES_WCHAR */

/* The OS/platform supports the poll() event demultiplexor */
/* #undef ACE_USE_POLL */

/* Define to 1 to embed RCS ID strings into compiled object files. */
/* #undef ACE_USE_RCSID */

/* For Win32: Use Select_Reactor as default implementation of Reactor instead
   of WFMO_Reactor. */
/* #undef ACE_USE_SELECT_REACTOR_FOR_REACTOR_IMPL */

/* Define to function that is equivalent to wcscasecmp() */
/* #undef ACE_WCSCASECMP_EQUIVALENT */

/* Define to function that is equivalent to wcsdup() */
/* #undef ACE_WCSDUP_EQUIVALENT */

/* Define to function that is equivalent to wcsncasecmp() */
/* #undef ACE_WCSNCASECMP_EQUIVALENT */

/* Define to function that is equivalent to wcstoll() */
/* #undef ACE_WCSTOLL_EQUIVALENT */

/* Define to function that is equivalent to wcstoull() */
/* #undef ACE_WCSTOULL_EQUIVALENT */

/* Configure for use on Win32 */
/* #undef ACE_WIN32 */

/* A parameter list indicating the version of WinSock (e.g., "1, 1" is version
   1.1). */
/* #undef ACE_WSOCK_VERSION */

/* Configure for use on AIX */
/* #undef AIX */

/* Define to 1 if the `closedir' function returns void instead of `int'. */
/* #undef CLOSEDIR_VOID */

/* Define to one of `_getb67', `GETB67', `getb67' for Cray-2 and Cray-YMP
   systems. This function is required for `alloca.c' support on those systems.
   */
/* #undef CRAY_STACKSEG_END */

/* GNU Win32 environement */
/* #undef CYGWIN32 */

/* Define to 1 if using `alloca.c'. */
/* #undef C_ALLOCA */

/* */
/* #undef DEC_CXX */

/* Configure for use on Digital Unix */
/* #undef DIGITAL_UNIX */

/* Define to 1 if you have `alloca', as a function or macro. */
/* #undef HAVE_ALLOCA */

/* Define to 1 if you have <alloca.h> and it should be used (not on Ultrix).
   */
/* #undef HAVE_ALLOCA_H */

/* Define to 1 if you have the <dirent.h> header file, and it defines `DIR'.
   */
#define HAVE_DIRENT_H 1

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define to 1 if you have the <fstream> header file. */
#define HAVE_FSTREAM 1

/* Define to 1 if you have the <fstream.h> header file. */
/* #undef HAVE_FSTREAM_H */

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the <iomanip> header file. */
#define HAVE_IOMANIP 1

/* Define to 1 if you have the <ios> header file. */
#define HAVE_IOS 1

/* Define to 1 if you have the <iostream> header file. */
#define HAVE_IOSTREAM 1

/* Define to 1 if you have the <iostream.h> header file. */
/* #undef HAVE_IOSTREAM_H */

/* Define to 1 if you have the <istream> header file. */
#define HAVE_ISTREAM 1

/* Define to 1 if you have the `dld' library (-ldld). */
/* #undef HAVE_LIBDLD */

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the <ndir.h> header file, and it defines `DIR'. */
/* #undef HAVE_NDIR_H */

/* Define to 1 if you have the <ostream> header file. */
#define HAVE_OSTREAM 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <streambuf> header file. */
#define HAVE_STREAMBUF 1

/* Define to 1 if you have the `strftime' function. */
#define HAVE_STRFTIME 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <sys/dir.h> header file, and it defines `DIR'.
   */
/* #undef HAVE_SYS_DIR_H */

/* Define to 1 if you have the <sys/ndir.h> header file, and it defines `DIR'.
   */
/* #undef HAVE_SYS_NDIR_H */

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have <sys/wait.h> that is POSIX.1 compatible. */
#define HAVE_SYS_WAIT_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Configure for use on HP-UX */
/* #undef HPUX */

/* Configure for use on HP-UX 10 */
/* #undef HPUX_10 */

/* Configure for use on HP-UX 11 */
/* #undef HPUX_11 */

/* */
/* #undef IP_ADD_MEMBERSHIP */

/* */
/* #undef IP_DROP_MEMBERSHIP */

/* Configure for use on Irix 5 */
/* #undef IRIX5 */

/* Configure for use on Irix 6 */
/* #undef IRIX6 */

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "ace-bugs@cs.wustl.edu"

/* Define to the full name of this package. */
#define PACKAGE_NAME "ACE"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "ACE 5.8.3"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "ace"

/* Define to the version of this package. */
#define PACKAGE_VERSION "5.8.3"

/* Maximum thread priority */
/* #undef PTHREAD_MAX_PRIORITY */

/* Minimum thread priority */
/* #undef PTHREAD_MIN_PRIORITY */

/* */
/* #undef PTHREAD_STACK_MIN */

/* */
/* #undef SCO */

/* The size of `double', as computed by sizeof. */
#define SIZEOF_DOUBLE 8

/* The size of `float', as computed by sizeof. */
#define SIZEOF_FLOAT 4

/* The size of `int', as computed by sizeof. */
#define SIZEOF_INT 4

/* The size of `long', as computed by sizeof. */
#define SIZEOF_LONG 8

/* The size of `long double', as computed by sizeof. */
#define SIZEOF_LONG_DOUBLE 16

/* The size of `long long', as computed by sizeof. */
#define SIZEOF_LONG_LONG 8

/* The size of `short', as computed by sizeof. */
#define SIZEOF_SHORT 2

/* The size of `signed char', as computed by sizeof. */
#define SIZEOF_SIGNED_CHAR 1

/* The size of `void *', as computed by sizeof. */
#define SIZEOF_VOID_P 8

/* The size of `wchar_t', as computed by sizeof. */
#define SIZEOF_WCHAR_T 4

/* If using the C implementation of alloca, define if you know the
   direction of stack growth for your system; otherwise it will be
   automatically deduced at runtime.
	STACK_DIRECTION > 0 => grows toward higher addresses
	STACK_DIRECTION < 0 => grows toward lower addresses
	STACK_DIRECTION = 0 => direction of growth unknown */
/* #undef STACK_DIRECTION */

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Configure for use on UnixWare */
/* #undef UNIXWARE */

/* */
/* #undef UNIXWARE_2_0 */

/* */
/* #undef UNIXWARE_2_1 */

/* */
/* #undef UNIXWARE_7_1 */

/* Configure for use on VxWorks */
/* #undef VXWORKS */

/* Define to 1 if your processor stores words with the most significant byte
   first (like Motorola and SPARC, unlike Intel and VAX). */
/* #undef WORDS_BIGENDIAN */

/* Define to 1 if the X Window System is missing or not being used. */
#define X_DISPLAY_MISSING 1

/* Define to 1 if `lex' declares `yytext' as a `char *' by default, not a
   `char[]'. */
/* #undef YYTEXT_POINTER */

/* Enable ACE inlining */
#define __ACE_INLINE__ 1

/* */
/* #undef __IOCTL_VERSIONED__ */

/* */
/* #undef __NO_INCLUDE_WARN__ */




#endif  /* ACE_CONFIG_H */


// Local Variables:
// mode:C++
// End:


