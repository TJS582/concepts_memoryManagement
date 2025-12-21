# GOALS - overarching goal

I want to implement a custom dynamic memory allocator in C++, as a matter of practicing c++ syntax and concepts while doing practical work on some important concepts.

## to do:

- Raw memory acquisition;
    -- I'm going to use mmap/munmap to handle large chunks of data

- Block metadata:
    -- header/footer structure for tracking size, free/used state and to handle coalescing

- Free list
    -- linked list nodes existing in free blocks
    -- needs to support insertion/removal

- Segregated pools/bins
    -- handling sizes of 2^x, up to 4096-1

- Allocation
    -- gets best size block, split if needed, returns aligned user pointer

- Deallocation
    -- marks block as free, coalsecing adjacent free blocks, returns to appropriate bin

- Alignment/safety
    -- ensures natural alignment, handles edge cases (zero size, double free, bad pointers, etc)

- C++ interface
    -- needs to be exposed via classes

- validation
    -- heap walker, guard bytes, fill patterns

- testing & refining
    -- testing suite to make sure all edge cases are being covered throughout the process


