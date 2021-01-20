---
description: 'Have a Question? Email me @ seymour096@gmail.com :D'
---

# Input Output Questions Asked

## Does Exclamation Require Any External Dependencies?

No, No It does not. FOR WINDOWS AT LEAST. Testers Are working On Dependency Handling For The Mac & Linux Systems.

## Can you Translate This To Any Language?

Short Answer: Yes.

Long Answer: Luckily, There's a New BETA Language API Generator Coming Soon So, API Wrapping Will Become Much Easier.

Some Examples for Python Parsing & Lua Parsing.

{% tabs %}
{% tab title="First Tab" %}
```python
import diptools
import exclamation.excla.exclamationlanguage



base = exclamationlanguage.ExclamationCodeBase(type="basic_code")

return base.parse("foo.excla")
```
{% endtab %}

{% tab title="Second Tab" %}
```lua
require("exclamation/excla.lua")

local excla = exclamation:ExclamationCodeBase(64)

return excla.parse("foo.excla")
```
{% endtab %}
{% endtabs %}



