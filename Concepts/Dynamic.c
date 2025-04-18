/*
A statically allocated variable or array has a fixed size in memory. Allocation of memory is done before the program's execution.
But, DYNAMIC MEMORY ALLOCATION is a way in which the size of a data structure can be changed during the runtime.
In general, we can also say that it is a way through which we can allocate and free the memory during runtime.
Memory is allocated during the execution of the program.

The Memory Assigned to a program in a typical architecture can be written down into four segments:

1. Code: Text Segment
2. Static/Global variables:
  i) Data segment: Used to store initialized data.(Initialized segment)
  ii) Bss segment: Used to store uninitialized data.(Uninitialized segment)
3. Stack: List of all the variables(Storage).
4. Heap -> Use of Heap:
- There are a lot of limitations of stack(Static memory allocation)
- Heap can be used flexibly by the programmer as per his needs.

# What is Stack Overflow?
-> Compiler allocates some space for the stack part of the memory.
-> When this space gets exhausted for some bad reason, the situation is called as stack overflow.
-> Typical example includes recursion with wrong/no base condition.

In Dynamic Memory Allocation, the memory is allocated at runtime from the heap segment.
We have four functions that we can use:

-> Malloc, SYNTAX: ptr = (ptr-type*) malloc(size_in_bytes);
-- Stands for Memory Allocation.
-- It reserves a block of memory with the given amount of bytes,and it's return value is
the void pointer for the allocated space.
-- However, If the space is insufficient, allocation of memory fails and
it returns a NULL pointer.
-- All The values at allocated memory are initialized to garbage values.

-> Calloc, SYNTAX: ptr = (ptr-type*) calloc(n, size_in_bytes);
-- Stands for Contiguous memory allcation.
-- Same as that of Malloc.
-- Diff. is, All the values at allocated memory are initialized to 0.

-> Relloc, SYNTAX: ptr = (ptr-type*) realloc(ptr, new_size_in_bytes);
-- It stands for reallocation.
-- If the dynamically allocated memory is insufficient,
we can change the size of previously allocated memory using the realloc function.

-> Free, SYNTAX: free(ptr);
-- If dynamically allocated memory is not required anymore, We can create using free function.
-- This will free the memory being used by the program in the heap.

# The only parameter passed to free() is a pointer, not a size. So the issue is, 
how does the free() function know how big the block to deallocate is?

The heap area allocated after the dynamic memory allocation is one word larger than the requested memory. 
The additional word is used to store the allocation size and is later utilized by free ( ).
So, this is how the free() method knows about the size of the block to be deallocated.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
  // ============================
  // 🟢 USE OF MALLOC
  // ============================
  int *ptr_mal, n;
  printf("Enter the size of array you want to create (Malloc):\n");
  scanf("%d", &n);

  // malloc sirf memory allocate karta hai, values initialize nahi karta (garbage values milti hain)
  ptr_mal = (int *)malloc(n * sizeof(int));

  // User se input le rahe hain
  for (int i = 0; i < n; i++) {
    printf("Enter the value no. %d of this array:\n", i);
    scanf("%d", &ptr_mal[i]);
  }

  // Malloc se banaye gaye array ka output
  for (int i = 0; i < n; i++) {
    printf("The value at %d of this array is %d\n", i, ptr_mal[i]);
  }

  // ============================
  // 🟡 USE OF CALLOC
  // ============================
  int *ptr_cal, n1;
  printf("\nEnter the size of array you want to create (Calloc):\n");
  scanf("%d", &n1);

  // calloc memory ko 0 se initialize karta hai by default
  ptr_cal = (int *)calloc(n1, sizeof(int));

  // User se input le rahe hain
  for (int i = 0; i < n1; i++) {
    printf("Enter the value no. %d of this array:\n", i);
    scanf("%d", &ptr_cal[i]);
  }

  // Calloc se banaye gaye array ka output
  for (int i = 0; i < n1; i++) {
    printf("The value at %dth index of this array is %d\n", i, ptr_cal[i]);
  }

  // ============================
  // 🔵 USE OF REALLOC
  // ============================
  printf("\nEnter the size of new array you want to create (Realloc):\n");
  scanf("%d", &n);

  // realloc pehle wali memory ko resize karta hai — purani values safe rehti hain
  ptr_cal = (int *)realloc(ptr_cal, n * sizeof(int));

  // Naye size ke extra indexes ke liye input le rahe hain
  for (int i = n1; i < n; i++) {
    printf("Enter the new value at index %d:\n", i);
    scanf("%d", &ptr_cal[i]);
  }

  // Reallocated array ka output
  for (int i = 0; i < n; i++) {
    printf("The new value at %d of this array is %d\n", i, ptr_cal[i]);
  }

  // ============================
  // 🔴 USE OF FREE
  // ============================
  // Jaise kaam khatam hone ke baad resources wapas karne chahiye, waise hi memory bhi free karna zaroori hai
  free(ptr_mal);
  free(ptr_cal);

  return 0;
}
