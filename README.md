<!--

@license Apache-2.0

Copyright (c) 2023 The Stdlib Authors.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

   http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.

-->


<details>
  <summary>
    About stdlib...
  </summary>
  <p>We believe in a future in which the web is a preferred environment for numerical computation. To help realize this future, we've built stdlib. stdlib is a standard library, with an emphasis on numerical and scientific computation, written in JavaScript (and C) for execution in browsers and in Node.js.</p>
  <p>The library is fully decomposable, being architected in such a way that you can swap out and mix and match APIs and functionality to cater to your exact preferences and use cases.</p>
  <p>When you use stdlib, you can be absolutely certain that you are using the most thorough, rigorous, well-written, studied, documented, tested, measured, and high-quality code out there.</p>
  <p>To join us in bringing numerical computing to the web, get started by checking us out on <a href="https://github.com/stdlib-js/stdlib">GitHub</a>, and please consider <a href="https://opencollective.com/stdlib">financially supporting stdlib</a>. We greatly appreciate your continued support!</p>
</details>

# quaternary

[![NPM version][npm-image]][npm-url] [![Build Status][test-image]][test-url] [![Coverage Status][coverage-image]][coverage-url] <!-- [![dependencies][dependencies-image]][dependencies-url] -->

> C APIs for registering a Node-API module exporting interfaces for invoking quaternary numerical functions.

<!-- Section to include introductory text. Make sure to keep an empty line after the intro `section` element and another before the `/section` close. -->

<section class="intro">

</section>

<!-- /.intro -->

<!-- Package usage documentation. -->

<section class="installation">

## Installation

```bash
npm install @stdlib/math-base-napi-quaternary
```

</section>

<section class="usage">

## Usage

```javascript
var headerDir = require( '@stdlib/math-base-napi-quaternary' );
```

#### headerDir

Absolute file path for the directory containing header files for C APIs.

```javascript
var dir = headerDir;
// returns <string>
```

</section>

<!-- /.usage -->

<!-- Package usage notes. Make sure to keep an empty line after the `section` element and another before the `/section` close. -->

<section class="notes">

</section>

<!-- /.notes -->

<!-- Package usage examples. -->

<section class="examples">

## Examples

```javascript
var headerDir = require( '@stdlib/math-base-napi-quaternary' );

console.log( headerDir );
// => <string>
```

</section>

<!-- /.examples -->

<!-- C interface documentation. -->

* * *

<section class="c">

## C APIs

<!-- Section to include introductory text. Make sure to keep an empty line after the intro `section` element and another before the `/section` close. -->

<section class="intro">

</section>

<!-- /.intro -->

<!-- C usage documentation. -->

<section class="usage">

### Usage

```c
#include "stdlib/math/base/napi/quaternary.h"
```

<!-- NOTE: keep in alphabetical order according to the suffix XXXX_X -->

#### STDLIB_MATH_BASE_NAPI_MODULE_DDDD_D( fcn )

Macro for registering a Node-API module exporting an interface for invoking a quaternary function accepting and returning double-precision floating-point numbers.

```c
static double add( const double x, const double y, const double z, const double w ) {
    return x + y + z + w;
}

// ...

// Register a Node-API module:
STDLIB_MATH_BASE_NAPI_MODULE_DDDD_D( add );
```

The macro expects the following arguments:

-   **fcn**: `double (*fcn)( double, double, double, double )` quaternary function.

When used, this macro should be used **instead of** `NAPI_MODULE`. The macro includes `NAPI_MODULE`, thus ensuring Node-API module registration.

#### stdlib_math_base_napi_dddd_d( env, info, fcn )

Invokes a quaternary function accepting and returning double-precision floating-point numbers.

```c
#include <node_api.h>

// ...

static double add( const double x, const double y, const double z, const double w ) {
    return x + y + z + w;
}

// ...

/**
* Receives JavaScript callback invocation data.
*
* @param env    environment under which the function is invoked
* @param info   callback data
* @return       Node-API value
*/
napi_value addon( napi_env env, napi_callback_info info ) {
    return stdlib_math_base_napi_dddd_d( env, info, add );
}

// ...
```

The function accepts the following arguments:

-   **env**: `[in] napi_env` environment under which the function is invoked.
-   **info**: `[in] napi_callback_info` callback data.
-   **fcn**: `[in] double (*fcn)( double, double, double, double )` quaternary function.

```c
void stdlib_math_base_napi_dddd_d( napi_env env, napi_callback_info info, double (*fcn)( double, double, double, double ) );
```

#### STDLIB_MATH_BASE_NAPI_MODULE_DIII_D( fcn )

Macro for registering a Node-API module exporting an interface invoking a quaternary function accepting a double-precision floating-point number and three signed 32-bit integers and returning a double-precision floating-point number.

```c
static double add( const double x, const int32_t y, const int32_t z, const int32_t w ) {
    return x + y + z + w;
}

// ...

// Register a Node-API module:
STDLIB_MATH_BASE_NAPI_MODULE_DIII_D( add );
```

The macro expects the following arguments:

-   **fcn**: `double (*fcn)( double, int32_t, int32_t, int32_t )` quaternary function.

When used, this macro should be used **instead of** `NAPI_MODULE`. The macro includes `NAPI_MODULE`, thus ensuring Node-API module registration.

#### stdlib_math_base_napi_diii_d( env, info, fcn )

Invokes a quaternary function accepting a double-precision floating-point number and three signed 32-bit integers and returning a double-precision floating-point number.

```c
#include <node_api.h>

// ...

static double add( const double x, const int32_t y, const int32_t z, const int32_t w ) {
    return x + y + z + w;
}

// ...

/**
* Receives JavaScript callback invocation data.
*
* @param env    environment under which the function is invoked
* @param info   callback data
* @return       Node-API value
*/
napi_value addon( napi_env env, napi_callback_info info ) {
    return stdlib_math_base_napi_diii_d( env, info, add );
}

// ...
```

The function accepts the following arguments:

-   **env**: `[in] napi_env` environment under which the function is invoked.
-   **info**: `[in] napi_callback_info` callback data.
-   **fcn**: `[in] double (*fcn)( double, int32_t, int32_t, int32_t )` quaternary function.

```c
void stdlib_math_base_napi_diii_d( napi_env env, napi_callback_info info, double (*fcn)( double, int32_t, int32_t, int32_t ) );
```

#### STDLIB_MATH_BASE_NAPI_MODULE_FFFF_F( fcn )

Macro for registering a Node-API module exporting an interface for invoking a quaternary function accepting and returning single-precision floating-point numbers.

```c
static float addf( const float x, const float y, const float z, const float w ) {
    return x + y + z + w;
}

// ...

// Register a Node-API module:
STDLIB_MATH_BASE_NAPI_MODULE_FFFF_F( addf );
```

The macro expects the following arguments:

-   **fcn**: `float (*fcn)( float, float, float, float )` quaternary function.

When used, this macro should be used **instead of** `NAPI_MODULE`. The macro includes `NAPI_MODULE`, thus ensuring Node-API module registration.

#### stdlib_math_base_napi_ffff_f( env, info, fcn )

Invokes a quaternary function accepting and returning single-precision floating-point numbers.

```c
#include <node_api.h>

// ...

static float addf( const float x, const float y, const float z, const float w ) {
    return x + y + z + w;
}

// ...

/**
* Receives JavaScript callback invocation data.
*
* @param env    environment under which the function is invoked
* @param info   callback data
* @return       Node-API value
*/
napi_value addon( napi_env env, napi_callback_info info ) {
    return stdlib_math_base_napi_ffff_f( env, info, addf );
}

// ...
```

The function accepts the following arguments:

-   **env**: `[in] napi_env` environment under which the function is invoked.
-   **info**: `[in] napi_callback_info` callback data.
-   **fcn**: `[in] float (*fcn)( float, float, float, float )` quaternary function.

```c
void stdlib_math_base_napi_ffff_f( napi_env env, napi_callback_info info, float (*fcn)( float, float, float, float ) );
```

</section>

<!-- /.usage -->

<!-- C API usage notes. Make sure to keep an empty line after the `section` element and another before the `/section` close. -->

<section class="notes">

### Notes

-   The C-API functions expect that the callback `info` argument provides access to the following JavaScript arguments:

    -   `x`: input value.
    -   `y`: input value.
    -   `z`: input value.
    -   `w`: input value.

</section>

<!-- /.notes -->

<!-- C API usage examples. -->

<section class="examples">

</section>

<!-- /.examples -->

</section>

<!-- /.c -->

<!-- Section to include cited references. If references are included, add a horizontal rule *before* the section. Make sure to keep an empty line after the `section` element and another before the `/section` close. -->

<section class="references">

</section>

<!-- /.references -->

<!-- Section for related `stdlib` packages. Do not manually edit this section, as it is automatically populated. -->

<section class="related">

</section>

<!-- /.related -->

<!-- Section for all links. Make sure to keep an empty line after the `section` element and another before the `/section` close. -->


<section class="main-repo" >

* * *

## Notice

This package is part of [stdlib][stdlib], a standard library for JavaScript and Node.js, with an emphasis on numerical and scientific computing. The library provides a collection of robust, high performance libraries for mathematics, statistics, streams, utilities, and more.

For more information on the project, filing bug reports and feature requests, and guidance on how to develop [stdlib][stdlib], see the main project [repository][stdlib].

#### Community

[![Chat][chat-image]][chat-url]

---

## License

See [LICENSE][stdlib-license].


## Copyright

Copyright &copy; 2016-2025. The Stdlib [Authors][stdlib-authors].

</section>

<!-- /.stdlib -->

<!-- Section for all links. Make sure to keep an empty line after the `section` element and another before the `/section` close. -->

<section class="links">

[npm-image]: http://img.shields.io/npm/v/@stdlib/math-base-napi-quaternary.svg
[npm-url]: https://npmjs.org/package/@stdlib/math-base-napi-quaternary

[test-image]: https://github.com/stdlib-js/math-base-napi-quaternary/actions/workflows/test.yml/badge.svg?branch=main
[test-url]: https://github.com/stdlib-js/math-base-napi-quaternary/actions/workflows/test.yml?query=branch:main

[coverage-image]: https://img.shields.io/codecov/c/github/stdlib-js/math-base-napi-quaternary/main.svg
[coverage-url]: https://codecov.io/github/stdlib-js/math-base-napi-quaternary?branch=main

<!--

[dependencies-image]: https://img.shields.io/david/stdlib-js/math-base-napi-quaternary.svg
[dependencies-url]: https://david-dm.org/stdlib-js/math-base-napi-quaternary/main

-->

[chat-image]: https://img.shields.io/gitter/room/stdlib-js/stdlib.svg
[chat-url]: https://app.gitter.im/#/room/#stdlib-js_stdlib:gitter.im

[stdlib]: https://github.com/stdlib-js/stdlib

[stdlib-authors]: https://github.com/stdlib-js/stdlib/graphs/contributors

[stdlib-license]: https://raw.githubusercontent.com/stdlib-js/math-base-napi-quaternary/main/LICENSE

</section>

<!-- /.links -->
