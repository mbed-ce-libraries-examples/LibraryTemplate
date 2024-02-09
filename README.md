<!--
  If you have any question about this then rise an issue https://github.com/mbed-ce-libraries-examples/LibraryTemplate/issues
  
  Under this block replace the text with a name of new library and some short description.
-->
# LibraryTemplate
Template for a new Library show just structure, basic Cmake configuration and requested informations (in Edit mode of this file) of new library

<!--
  Under this block edit How to start with the library under MbedCE
-->
## How to start
1. Create a new project according to [MbedCE instructions](https://github.com/mbed-ce/mbed-os/wiki)
2. Add this as submodule to your project via `git submodule add --depth 1 https://github.com/mbed-ce-libraries-examples/LibraryTemplate LibraryTemplate`
3. The top level `CMakeList.txt` (in root of your project) should be modified according to [this wiki page](https://github.com/mbed-ce/mbed-os/wiki/MbedOS-configuration#libraries-in-your-application)
4. Create your main.cpp file and copy & Paste example code below.
5. Build the project


<!--
  Under this block edit the simple example code for the new library.
  But if the library is too sophisticated and need an advanced code then rather make an example project for this library, delete the simple example code and replace it with a link to the example
-->
## Example code
```
#include "mbed.h"
#include "LibraryTemplate.h"

LibraryTemplate lb(LED1);

int main()
{
    printf("MbedCE_LibraryTemplate\n");
	
    while(1) {
        lb.doSomething();
        thread_sleep_for(500);
    }
}
```

<!--
  Under this block replace the text with more detailed description about the library.
  For example:
  - pinout of the component what this library interface for
  - pictures
  - troubleshoting 
-->

## Description

Some text about this library...

### Status: 
This libarary was tested with Nucleo-F446RE, VS-Code under Win11, GCC 12.3 and MbedCE library
