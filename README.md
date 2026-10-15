# 🔍 Search a 2D Matrix II

## 📌 Overview

This solution searches for a target element in a row-wise and column-wise sorted 2D matrix using the **Staircase Search Algorithm**.

## ⚙️ Workflow

1. Start from the top-right corner of the matrix.
2. Compare the current element with the target.
3. If equal, return `true`.
4. If the target is smaller, move left.
5. If the target is larger, move down.
6. Repeat until the target is found or the search area is empty.
7. If the target is not found, return `false`.

## 🔄 Flowchart

```mermaid
flowchart TD
    A(["Start"]) --> B["Input Matrix and Target"]
    B --> C["Set r = 0, c = n - 1"]
    C --> D{"r < m and c >= 0?"}
    D -- No --> H["Return False"]
    D -- Yes --> E{"mat[r][c] == target?"}
    E -- Yes --> I["Return True"]
    E -- No --> F{"target < mat[r][c]?"}
    F -- Yes --> G["Move Left: c = c - 1"]
    F -- No --> J["Move Down: r = r + 1"]
    G --> D
    J --> D
    H --> K(["End"])
    I --> K
```

## ⏱️ Complexity Analysis

* **Time Complexity:** `O(m + n)`
* **Auxiliary Space Complexity:** `O(1)`

## 💻 Language

C++

## ✅ Key Concept

**Staircase Search** eliminates one row or one column at each step, making the search efficient.


