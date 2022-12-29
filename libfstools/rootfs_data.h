#ifndef _FS_ROOTFS_DATA_H__
#define _FS_ROOTFS_DATA_H__

/* dup for files which would overwrite library function with static */

#define ROOTFS_DATA_NAME_MAX 64
extern char rootfs_data_name[];
char *get_rootfs_data_name(void);

/* TODO: move getenv_default and read_kernel_cmdline to libubox */
char *getenv_default(const char *name, char *def);
char *read_kernel_cmdline(const char *name, char *buf, size_t bufsz);

#endif /* _FS_ROOTFS_DATA_H__ */
