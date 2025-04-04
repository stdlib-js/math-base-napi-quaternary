/**
* @license Apache-2.0
*
* Copyright (c) 2025 The Stdlib Authors.
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*    http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/

#include "stdlib/math/base/napi/quaternary/diii_d.h"
#include <node_api.h>
#include <assert.h>
#include <stdint.h>

/**
* Invokes a quaternary function accepting a double-precision floating-point number and three signed 32-bit integers and returning a double-precision floating-point number.
*
* ## Notes
*
* -   This function expects that the callback `info` argument provides access to the following JavaScript arguments:
*
*     -   `x`: input value.
*     -   `y`: input value.
*     -   `z`: input value.
*     -   `w`: input value.
*
* @param env    environment under which the function is invoked
* @param info   callback data
* @param fcn    quaternary function
* @return       function return value as a Node-API double-precision floating-point number
*/
napi_value stdlib_math_base_napi_diii_d( napi_env env, napi_callback_info info, double (*fcn)( double, int32_t, int32_t, int32_t ) ) {
	napi_status status;

	size_t argc = 4;
	napi_value argv[ 4 ];
	status = napi_get_cb_info( env, info, &argc, argv, NULL, NULL );
	assert( status == napi_ok );

	if ( argc < 4 ) {
		status = napi_throw_error( env, NULL, "invalid invocation. Must provide four numbers." );
		assert( status == napi_ok );
		return NULL;
	}

	napi_valuetype vtype0;
	status = napi_typeof( env, argv[ 0 ], &vtype0 );
	assert( status == napi_ok );
	if ( vtype0 != napi_number ) {
		status = napi_throw_type_error( env, NULL, "invalid argument. First argument must be a number." );
		assert( status == napi_ok );
		return NULL;
	}

	napi_valuetype vtype1;
	status = napi_typeof( env, argv[ 1 ], &vtype1 );
	assert( status == napi_ok );
	if ( vtype1 != napi_number ) {
		status = napi_throw_type_error( env, NULL, "invalid argument. Second argument must be a number." );
		assert( status == napi_ok );
		return NULL;
	}

	napi_valuetype vtype2;
	status = napi_typeof( env, argv[ 2 ], &vtype2 );
	assert( status == napi_ok );
	if ( vtype2 != napi_number ) {
		status = napi_throw_type_error( env, NULL, "invalid argument. Third argument must be a number." );
		assert( status == napi_ok );
		return NULL;
	}

	napi_valuetype vtype3;
	status = napi_typeof( env, argv[ 3 ], &vtype3 );
	assert( status == napi_ok );
	if ( vtype3 != napi_number ) {
		status = napi_throw_type_error( env, NULL, "invalid argument. Fourth argument must be a number." );
		assert( status == napi_ok );
		return NULL;
	}

	double x;
	status = napi_get_value_double( env, argv[ 0 ], &x );
	assert( status == napi_ok );

	int32_t y;
	status = napi_get_value_int32( env, argv[ 1 ], &y );
	assert( status == napi_ok );

	int32_t z;
	status = napi_get_value_int32( env, argv[ 2 ], &z );
	assert( status == napi_ok );

	int32_t w;
	status = napi_get_value_int32( env, argv[ 3 ], &w );
	assert( status == napi_ok );

	napi_value v;
	status = napi_create_double( env, fcn( x, y, z, w ), &v );
	assert( status == napi_ok );

	return v;
}
