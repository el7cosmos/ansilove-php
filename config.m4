dnl Autotools config.m4 for PHP extension ansilove

dnl If extension references and depends on an external library package, use
dnl the '--with-ansilove' configure option:
PHP_ARG_WITH([ansilove],
  [for ansilove support],
  [AS_HELP_STRING([--with-ansilove],
    [Include ansilove support])])

AS_VAR_IF([PHP_ANSILOVE], [no],, [
  dnl Path to library package can be given as parameter (--with-ansilove=<DIR>)
  SEARCH_PATH="/usr/local /usr /opt/homebrew"
  SEARCH_FOR="/include/ansilove.h"
  AS_IF([test -r $PHP_ANSILOVE/$SEARCH_FOR],
    [ANSILOVE_DIR=$PHP_ANSILOVE],
    [
      for i in $SEARCH_PATH; do
        AS_IF([test -r $i/$SEARCH_FOR],
          [ANSILOVE_DIR=$i; break;])
      done
    ])

  AC_MSG_CHECKING([for ansilove library package])
  AS_VAR_IF([ANSILOVE_DIR],, [
    AC_MSG_RESULT([not found])
    AC_MSG_ERROR([Please reinstall the ansilove library package])
  ], [AC_MSG_RESULT([found in $ANSILOVE_DIR])])

  dnl Add include flag where library package headers are located on the system.
  PHP_ADD_INCLUDE([$ANSILOVE_DIR/include])

  dnl Check for library and symbol presence.
  LIBNAME=ansilove # you may want to change this
  LIBSYMBOL=ansilove_init # you most likely want to change this

  dnl If you need to check for a particular library function (e.g. a conditional
  dnl or version-dependent feature) and you are not using pkg-config:
  PHP_CHECK_LIBRARY([$LIBNAME], [$LIBSYMBOL], [
      PHP_ADD_LIBRARY_WITH_PATH([$LIBNAME],
        [$ANSILOVE_DIR/$PHP_LIBDIR],
        [ANSILOVE_SHARED_LIBADD])
      AC_DEFINE([HAVE_ANSILOVE_FEATURE], [1],
        [Define to 1 if ansilove has the 'FEATURE'.])
    ],
    [AC_MSG_FAILURE([FEATURE not supported by your ansilove library.])],
    [-L$ANSILOVE_DIR/$PHP_LIBDIR -lm])

  dnl Add linked libraries flags for shared extension to the generated Makefile.
  PHP_SUBST([ANSILOVE_SHARED_LIBADD])

  dnl Define a preprocessor macro to indicate that this PHP extension can
  dnl be dynamically loaded as a shared module or is statically built into PHP.
  AC_DEFINE([HAVE_ANSILOVE], [1],
    [Define to 1 if the PHP extension 'ansilove' is available.])

  dnl Configure extension sources and compilation flags.
  PHP_NEW_EXTENSION([ansilove],
    [ansilove.c class.c enum.c],
    [$ext_shared],,
    [-DZEND_ENABLE_STATIC_TSRMLS_CACHE=1])
])
