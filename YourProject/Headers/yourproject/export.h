
#ifndef YOURPROJECT_EXPORT_H
#define YOURPROJECT_EXPORT_H

#ifdef YOURPROJECT_STATIC_DEFINE
#  define YOURPROJECT_EXPORT
#  define YOURPROJECT_NO_EXPORT
#else
#  ifndef YOURPROJECT_EXPORT
#    ifdef YourProject_EXPORTS
        /* We are building this library */
#      define YOURPROJECT_EXPORT __declspec(dllexport)
#    else
        /* We are using this library */
#      define YOURPROJECT_EXPORT __declspec(dllimport)
#    endif
#  endif

#  ifndef YOURPROJECT_NO_EXPORT
#    define YOURPROJECT_NO_EXPORT 
#  endif
#endif

#ifndef YOURPROJECT_DEPRECATED
#  define YOURPROJECT_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef YOURPROJECT_DEPRECATED_EXPORT
#  define YOURPROJECT_DEPRECATED_EXPORT YOURPROJECT_EXPORT YOURPROJECT_DEPRECATED
#endif

#ifndef YOURPROJECT_DEPRECATED_NO_EXPORT
#  define YOURPROJECT_DEPRECATED_NO_EXPORT YOURPROJECT_NO_EXPORT YOURPROJECT_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef YOURPROJECT_NO_DEPRECATED
#    define YOURPROJECT_NO_DEPRECATED
#  endif
#endif

#endif /* YOURPROJECT_EXPORT_H */
