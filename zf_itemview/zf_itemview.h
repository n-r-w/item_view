#pragma once

#if (defined(WIN32) || defined(_WIN32))
#ifdef ZF_ITEMVIEW_DLL_EXPORTS
#define ZF_ITEMVIEW_DLL_API __declspec(dllexport)
#else
#define ZF_ITEMVIEW_DLL_API
#endif
#else
#define ZF_ITEMVIEW_DLL_API
#endif
