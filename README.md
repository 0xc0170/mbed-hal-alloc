# mbed C HAL layer for "dynamic" allocations

It might be useful for higher layer which reuse mbed C HAL to use dynamic allocations. This functionality covers the allocations/deallocation of objects. Or it returns the size of an object required by HAL, therefore the higher layer can allocate objects required for HAL.

This can be useful for languages which do not "include" for example. A higher layer can redefine C objects which in case of mbed, is considered too much work, or let C to handle dynamic allocation, or just get the size of the object in the runtime, and allocate it using other language allocators.
