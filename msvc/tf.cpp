// tf.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "tf.h"


// This is an example of an exported variable
TF_API int ntf=0;

// This is an example of an exported function.
TF_API int fntf(void)
{
    return 42;
}

// This is the constructor of a class that has been exported.
// see tf.h for the class definition
Ctf::Ctf()
{
    return;
}
