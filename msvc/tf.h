// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the TF_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// TF_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef TF_EXPORTS
#define TF_API __declspec(dllexport)
#else
#define TF_API __declspec(dllimport)
#endif

// This class is exported from the tf.dll
class TF_API Ctf {
public:
	Ctf(void);
	// TODO: add your methods here.
};

extern TF_API int ntf;

TF_API int fntf(void);
