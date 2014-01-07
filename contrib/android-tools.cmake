function(find_ndk_mod modname)
   SET(NDK_MODULE_PATH $ENV{NDK_MODULE_PATH})
   if("$ENV{NDK_MODULE_PATH}" STREQUAL "")
       message(FATAL_ERROR "Cannot find android module ${modname}. Your NDK_MODULE_PATH has to be set!")	
   endif()
   string(REPLACE ":" ";" NDK_MODULE_PATH  ${NDK_MODULE_PATH})
   SET(P "P-NOTFOUND")
   foreach(path ${NDK_MODULE_PATH})
      find_path(P "Android.mk" ${path}/${modname} NO_DEFAULT_PATH)
   endforeach()
   if (${P} STREQUAL "P-NOTFOUND")
      message(FATAL_ERROR "Cannot find android module ${modname}. Please check your NDK_MODULE_PATH environment variable.")	
   else()
      message("   Found android module ${modname} in: ${P}")
   endif()
endfunction()
