/*
 *  A library for something
 *
 *  Copyright (C) Made by someone in 2024
 *                based on something else
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documnetation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to  whom the Software is
 * furished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS OR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

/*
 *  Example:
 * @code
 * #include "mbed.h"
 * #include "LibraryTemplate.h"
 * 
 * LibraryTemplate lb(LED1);
 * 
 * int main()
 * {
 *     printf("MbedCE_LibraryTemplate\n");
 *
 *     while(1) {
 *         lb.doSomething();
 *         thread_sleep_for(500);
 *     }
 * }
 * @endcode
 */

#ifndef LIBRARYTEMPLATE_H
#define LIBRARYTEMPLATE_H

#include "mbed.h"

class LibraryTemplate
{
public:
   /** Constructor
    * 
    * @param PinName pin The pin to assign as an output.
    */
    LibraryTemplate(PinName pin);
    ~LibraryTemplate();

   /** doSomething
    *
    * This method does something magic 
    * @note toggle a pin
    */
    void doSomething();

private:
    DigitalOut _led;

};


#endif
