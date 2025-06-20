# C - Sorting Algorithms & Big O

This project focuses on implementing and analyzing classic sorting algorithms using the C programming language.  
We practiced building sorting logic from scratch, printing results after each swap, and understanding the time complexity of each algorithm.

---

## Project Description

This project includes the implementation of the following sorting algorithms:

- Bubble Sort
- Insertion Sort (Doubly Linked List)
- Selection Sort
- Quick Sort (Lomuto partition scheme)

Each function prints the array after every swap operation to help visualize the sorting process.

---

## Team Members & Contributions

| Name             | Role                          |
|------------------|-------------------------------|
| sarunh10         | Bubble Sort & Insertion Sort  |
| Abdullah Aldafas | Selection Sort & Quick Sort   |

---

## Testing Method

All implementations were tested using **OnlineGDB** and other C compilers.  
We used the provided `main.c` files to:

- Compile each function  
- Verify behavior on different datasets  
- Check the output after each swap for accuracy  

---

## Requirements

- Allowed editors: `vi`, `vim`, `emacs`
- Compiled on **Ubuntu 20.04 LTS** using:
  ```bash
  gcc -Wall -Werror -Wextra -pedantic -std=gnu89
  ```
- All files must end with a new line  
- A `README.md` file at the root of the project is mandatory  
- Code must follow **Betty style**  
- No global variables  
- Max 5 functions per file  
- Standard library functions are **not allowed** unless specified  
- All prototypes must be declared in `sort.h`  
- All header files must use **include guards**  
- Arrays/lists with size less than 2 do not need sorting  

---

## Example Usage

```c
int array[] = {19, 48, 99, 71, 13, 52, 96, 73};
size_t size = sizeof(array) / sizeof(array[0]);

quick_sort(array, size); // or bubble_sort, selection_sort, etc.
```

---

## Authors

- **Abdullah Aldafas**  
- **Sara Ali Mareer**
