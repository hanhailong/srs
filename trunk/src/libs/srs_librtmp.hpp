/*
The MIT License (MIT)

Copyright (c) 2013-2014 winlin

Permission is hereby granted, free of charge, to any person obtaining a copy of
this software and associated documentation files (the "Software"), to deal in
the Software without restriction, including without limitation the rights to
use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
the Software, and to permit persons to whom the Software is furnished to do so,
subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/

#ifndef SRS_LIB_RTMP_HPP
#define SRS_LIB_RTMP_HPP

/*
#include <srs_librtmp.h>
*/

#ifdef __cplusplus
extern "C"{
#endif

// the output handler.
typedef void* srs_rtmp_t;

/**
* create a rtmp protocol stack.
* @return a rtmp handler, or NULL if error occured.
*/
srs_rtmp_t srs_rtmp_create();

/**
* close a rtmp protocl stack.
*/
void srs_rtmp_destroy(srs_rtmp_t rtmp);

/**
* get protocol stack version
*/
int srs_version_major();
int srs_version_minor();
int srs_version_revision();

#ifdef __cplusplus
}
#endif

#endif
