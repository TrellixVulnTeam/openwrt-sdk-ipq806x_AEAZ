/*                                                                -*- C -*-
   +----------------------------------------------------------------------+
   | PHP Version 5                                                        |
   +----------------------------------------------------------------------+
   | Copyright (c) 1997-2007 The PHP Group                                |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
   | Author: Stig S�ther Bakken <ssb@php.net>                             |
   +----------------------------------------------------------------------+
*/

/* $Id$ */

#define CONFIGURE_COMMAND " './configure'  '--target=arm-openwrt-linux' '--host=arm-openwrt-linux' '--build=x86_64-linux-gnu' '--program-prefix=' '--program-suffix=' '--prefix=/usr' '--exec-prefix=/usr' '--bindir=/usr/bin' '--sbindir=/usr/sbin' '--libexecdir=/usr/lib' '--sysconfdir=/etc' '--datadir=/usr/share' '--localstatedir=/var' '--mandir=/usr/man' '--infodir=/usr/info' '--disable-nls' '--enable-cli' '--enable-cgi' '--enable-fpm' '--enable-shared' '--disable-static' '--disable-rpath' '--disable-debug' '--without-pear' '--with-config-file-path=/etc' '--with-config-file-scan-dir=/etc/php5' '--disable-short-tags' '--with-zlib=/home/han/misc/glweb/qsdk5-next/staging_dir/target-arm_cortex-a7_uClibc-1.0.14_eabi/usr' '--with-zlib-dir=/home/han/misc/glweb/qsdk5-next/staging_dir/target-arm_cortex-a7_uClibc-1.0.14_eabi/usr' '--with-pcre-regex=/home/han/misc/glweb/qsdk5-next/staging_dir/target-arm_cortex-a7_uClibc-1.0.14_eabi/usr' '--disable-phar' '--enable-calendar=shared' '--enable-ctype=shared' '--with-curl=shared,/home/han/misc/glweb/qsdk5-next/staging_dir/target-arm_cortex-a7_uClibc-1.0.14_eabi/usr' '--enable-fileinfo=shared' '--with-gettext=shared,/home/han/misc/glweb/qsdk5-next/staging_dir/target-arm_cortex-a7_uClibc-1.0.14_eabi/usr/lib/libintl-full' '--enable-dom=shared' '--enable-exif=shared' '--enable-ftp=shared' '--with-gd=shared' '--without-freetype-dir' '--with-jpeg-dir=/home/han/misc/glweb/qsdk5-next/staging_dir/target-arm_cortex-a7_uClibc-1.0.14_eabi/usr' '--with-png-dir=/home/han/misc/glweb/qsdk5-next/staging_dir/target-arm_cortex-a7_uClibc-1.0.14_eabi/usr' '--without-xpm-dir' '--without-t1lib' '--enable-gd-native-ttf' '--disable-gd-jis-conv' '--with-gmp=shared,/home/han/misc/glweb/qsdk5-next/staging_dir/target-arm_cortex-a7_uClibc-1.0.14_eabi/usr' '--enable-hash=shared' '--with-iconv=shared,/home/han/misc/glweb/qsdk5-next/staging_dir/target-arm_cortex-a7_uClibc-1.0.14_eabi/usr/lib/libiconv-stub' '--enable-json=shared' '--with-ldap=shared,/home/han/misc/glweb/qsdk5-next/staging_dir/target-arm_cortex-a7_uClibc-1.0.14_eabi/usr' '--with-ldap-sasl=/home/han/misc/glweb/qsdk5-next/staging_dir/target-arm_cortex-a7_uClibc-1.0.14_eabi/usr' '--enable-mbstring=shared' '--enable-mbregex' '--with-mcrypt=shared,/home/han/misc/glweb/qsdk5-next/staging_dir/target-arm_cortex-a7_uClibc-1.0.14_eabi/usr' '--with-mysql=shared,/home/han/misc/glweb/qsdk5-next/staging_dir/target-arm_cortex-a7_uClibc-1.0.14_eabi/usr' '--with-mysqli=shared,/home/han/misc/glweb/qsdk5-next/staging_dir/target-arm_cortex-a7_uClibc-1.0.14_eabi/usr/bin/mysql_config' '--enable-opcache=shared' '--with-openssl=shared,/home/han/misc/glweb/qsdk5-next/staging_dir/target-arm_cortex-a7_uClibc-1.0.14_eabi/usr' '--with-kerberos=no' '--with-openssl-dir=/home/han/misc/glweb/qsdk5-next/staging_dir/target-arm_cortex-a7_uClibc-1.0.14_eabi/usr' '--enable-pcntl=shared' '--enable-pdo=shared' '--with-pdo-mysql=shared,/home/han/misc/glweb/qsdk5-next/staging_dir/target-arm_cortex-a7_uClibc-1.0.14_eabi/usr' '--with-pdo-pgsql=shared,/home/han/misc/glweb/qsdk5-next/staging_dir/target-arm_cortex-a7_uClibc-1.0.14_eabi/usr' '--with-pdo-sqlite=shared,/home/han/misc/glweb/qsdk5-next/staging_dir/target-arm_cortex-a7_uClibc-1.0.14_eabi/usr' '--with-pgsql=shared,/home/han/misc/glweb/qsdk5-next/staging_dir/target-arm_cortex-a7_uClibc-1.0.14_eabi/usr' '--enable-session=shared' '--enable-shmop=shared' '--enable-simplexml=shared' '--enable-soap=shared' '--enable-sockets=shared' '--with-sqlite3=shared,/home/han/misc/glweb/qsdk5-next/staging_dir/target-arm_cortex-a7_uClibc-1.0.14_eabi/usr' '--enable-sysvmsg=shared' '--enable-sysvsem=shared' '--enable-sysvshm=shared' '--enable-tokenizer=shared' '--enable-xml=shared,/home/han/misc/glweb/qsdk5-next/staging_dir/target-arm_cortex-a7_uClibc-1.0.14_eabi/usr' '--enable-xmlreader=shared,/home/han/misc/glweb/qsdk5-next/staging_dir/target-arm_cortex-a7_uClibc-1.0.14_eabi/usr' '--enable-xmlwriter=shared,/home/han/misc/glweb/qsdk5-next/staging_dir/target-arm_cortex-a7_uClibc-1.0.14_eabi/usr' '--enable-zip=shared' '--disable-filter' '--enable-libxml' '--with-libxml-dir=/home/han/misc/glweb/qsdk5-next/staging_dir/target-arm_cortex-a7_uClibc-1.0.14_eabi/usr/include/libxml2' '--with-system-tzdata' 'build_alias=x86_64-linux-gnu' 'host_alias=arm-openwrt-linux' 'target_alias=arm-openwrt-linux' 'CC=arm-openwrt-linux-uclibcgnueabi-gcc' 'CFLAGS=-Os '-pipe' '-march=armv7-a' '-mtune=cortex-a7' '-fno-caller-saves' '-fhonour-copts' '-Wno-error=unused-but-set-variable' '-Wno-error=unused-result' '-mfloat-abi=soft' '-I/home/han/misc/glweb/qsdk5-next/staging_dir/target-arm_cortex-a7_uClibc-1.0.14_eabi/usr/lib/libiconv-stub/include' '-I/home/han/misc/glweb/qsdk5-next/staging_dir/target-arm_cortex-a7_uClibc-1.0.14_eabi/usr/lib/libintl-stub/include' 'LDFLAGS=-L/home/han/misc/glweb/qsdk5-next/staging_dir/target-arm_cortex-a7_uClibc-1.0.14_eabi/usr/lib '-L/home/han/misc/glweb/qsdk5-next/staging_dir/target-arm_cortex-a7_uClibc-1.0.14_eabi/lib' '-L/home/han/misc/glweb/qsdk5-next/staging_dir/toolchain-arm_cortex-a7_gcc-4.8-linaro_uClibc-1.0.14_eabi/usr/lib' '-L/home/han/misc/glweb/qsdk5-next/staging_dir/toolchain-arm_cortex-a7_gcc-4.8-linaro_uClibc-1.0.14_eabi/lib' '-L/home/han/misc/glweb/qsdk5-next/staging_dir/target-arm_cortex-a7_uClibc-1.0.14_eabi/usr/lib/libiconv-stub/lib' '-L/home/han/misc/glweb/qsdk5-next/staging_dir/target-arm_cortex-a7_uClibc-1.0.14_eabi/usr/lib/libintl-stub/lib' 'CPPFLAGS=-I/home/han/misc/glweb/qsdk5-next/staging_dir/target-arm_cortex-a7_uClibc-1.0.14_eabi/usr/include '-I/home/han/misc/glweb/qsdk5-next/staging_dir/target-arm_cortex-a7_uClibc-1.0.14_eabi/include' '-I/home/han/misc/glweb/qsdk5-next/staging_dir/toolchain-arm_cortex-a7_gcc-4.8-linaro_uClibc-1.0.14_eabi/usr/include' '-I/home/han/misc/glweb/qsdk5-next/staging_dir/toolchain-arm_cortex-a7_gcc-4.8-linaro_uClibc-1.0.14_eabi/include' '-I/home/han/misc/glweb/qsdk5-next/staging_dir/target-arm_cortex-a7_uClibc-1.0.14_eabi/usr/lib/libiconv-stub/include' '-I/home/han/misc/glweb/qsdk5-next/staging_dir/target-arm_cortex-a7_uClibc-1.0.14_eabi/usr/lib/libintl-stub/include' 'CXX=arm-openwrt-linux-uclibcgnueabi-g++' 'CXXFLAGS=-Os '-pipe' '-march=armv7-a' '-mtune=cortex-a7' '-fno-caller-saves' '-fhonour-copts' '-Wno-error=unused-but-set-variable' '-Wno-error=unused-result' '-mfloat-abi=soft' '-I/home/han/misc/glweb/qsdk5-next/staging_dir/target-arm_cortex-a7_uClibc-1.0.14_eabi/usr/lib/libiconv-stub/include' '-I/home/han/misc/glweb/qsdk5-next/staging_dir/target-arm_cortex-a7_uClibc-1.0.14_eabi/usr/lib/libintl-stub/include'"
#define PHP_ADA_INCLUDE		""
#define PHP_ADA_LFLAGS		""
#define PHP_ADA_LIBS		""
#define PHP_APACHE_INCLUDE	""
#define PHP_APACHE_TARGET	""
#define PHP_FHTTPD_INCLUDE      ""
#define PHP_FHTTPD_LIB          ""
#define PHP_FHTTPD_TARGET       ""
#define PHP_CFLAGS		"$(CFLAGS_CLEAN) -prefer-non-pic -static"
#define PHP_DBASE_LIB		""
#define PHP_BUILD_DEBUG		""
#define PHP_GDBM_INCLUDE	""
#define PHP_IBASE_INCLUDE	""
#define PHP_IBASE_LFLAGS	""
#define PHP_IBASE_LIBS		""
#define PHP_IFX_INCLUDE		""
#define PHP_IFX_LFLAGS		""
#define PHP_IFX_LIBS		""
#define PHP_INSTALL_IT		""
#define PHP_IODBC_INCLUDE	""
#define PHP_IODBC_LFLAGS	""
#define PHP_IODBC_LIBS		""
#define PHP_MSQL_INCLUDE	""
#define PHP_MSQL_LFLAGS		""
#define PHP_MSQL_LIBS		""
#define PHP_MYSQL_INCLUDE	"-I/home/han/misc/glweb/qsdk5-next/staging_dir/target-arm_cortex-a7_uClibc-1.0.14_eabi/usr/include/mysql"
#define PHP_MYSQL_LIBS		"-L/home/han/misc/glweb/qsdk5-next/staging_dir/target-arm_cortex-a7_uClibc-1.0.14_eabi/usr/lib/mysql -lmysqlclient "
#define PHP_MYSQL_TYPE		"external"
#define PHP_ODBC_INCLUDE	""
#define PHP_ODBC_LFLAGS		""
#define PHP_ODBC_LIBS		""
#define PHP_ODBC_TYPE		""
#define PHP_OCI8_SHARED_LIBADD 	""
#define PHP_OCI8_DIR			""
#define PHP_OCI8_ORACLE_VERSION		""
#define PHP_ORACLE_SHARED_LIBADD 	"@ORACLE_SHARED_LIBADD@"
#define PHP_ORACLE_DIR				"@ORACLE_DIR@"
#define PHP_ORACLE_VERSION			"@ORACLE_VERSION@"
#define PHP_PGSQL_INCLUDE	""
#define PHP_PGSQL_LFLAGS	""
#define PHP_PGSQL_LIBS		""
#define PHP_PROG_SENDMAIL	""
#define PHP_SOLID_INCLUDE	""
#define PHP_SOLID_LIBS		""
#define PHP_EMPRESS_INCLUDE	""
#define PHP_EMPRESS_LIBS	""
#define PHP_SYBASE_INCLUDE	""
#define PHP_SYBASE_LFLAGS	""
#define PHP_SYBASE_LIBS		""
#define PHP_DBM_TYPE		""
#define PHP_DBM_LIB		""
#define PHP_LDAP_LFLAGS		""
#define PHP_LDAP_INCLUDE	""
#define PHP_LDAP_LIBS		""
#define PHP_BIRDSTEP_INCLUDE     ""
#define PHP_BIRDSTEP_LIBS        ""
#define PEAR_INSTALLDIR         ""
#define PHP_INCLUDE_PATH	".:"
#define PHP_EXTENSION_DIR       "/usr/lib/php/extensions/no-debug-non-zts-20131226"
#define PHP_PREFIX              "/usr"
#define PHP_BINDIR              "/usr/bin"
#define PHP_SBINDIR             "/usr/sbin"
#define PHP_MANDIR              "/usr/man"
#define PHP_LIBDIR              "/usr/lib/php"
#define PHP_DATADIR             "/usr/share"
#define PHP_SYSCONFDIR          "/etc"
#define PHP_LOCALSTATEDIR       "/var"
#define PHP_CONFIG_FILE_PATH    "/etc"
#define PHP_CONFIG_FILE_SCAN_DIR    "/etc/php5"
#define PHP_SHLIB_SUFFIX        "so"
