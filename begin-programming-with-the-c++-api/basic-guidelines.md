# Getting Started With The C++ API

## Installing The C++ API

To Install the C++ API, Type This in The Terminal Using the `dip.exe` Runtime.

```
C:Users\You\dir\to\excla\bin\dip\dip.exe dip install exclamation.cpp
```

{% hint style="info" %}
When Installing The C++ API, You Don't Need to Have a C++ Compiler Most of the time, It's always a Good Practice To. If all else fails, Use the `edb.exe` File Located in the `bin\` Directory.
{% endhint %}

```cpp
#include <iostream>
#include "Exclamation.h"
/*
Exclamation Doesn't Come Pre Packaged With A C++ API. To Get API Integration,
There's a Page Linked to this Thread Containing A Propietory Header That Can Be Either Purchased Or Given.
*/
#include "Objects.h"


ExclamationCodeBase i = *new ExclamationCodeBase;

i.Parse("test.excla"); // Simple Parser Function


```

The Exclamation Header File Contains Some Basic Strings For Building Programs With The C++ API.

Go to the Next Page to See How It Works.

