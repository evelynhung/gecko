// Copyright 2012 Mozilla Corporation. All rights reserved.
// This code is governed by the license found in the LICENSE file.

/*---
es5id: 11.3.2_1_a_L15
description: >
    Tests that the function returned by
    Intl.NumberFormat.prototype.format meets the requirements for
    built-in objects defined by the introduction of chapter 17 of the
    ECMAScript Language Specification.
author: Norbert Lindenberg
includes: [testBuiltInObject.js]
---*/

testBuiltInObject(new Intl.NumberFormat().format, true, false, [], 1);

reportCompare(0, 0);
