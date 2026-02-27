# Remove Duplicate – Preserve Order

[![Instagram](https://img.shields.io/badge/Instagram-%40lacopydepastel-E4405F?style=for-the-badge&logo=instagram&logoColor=white)](https://www.instagram.com/lacopydepastel)
[![YouTube](https://img.shields.io/badge/YouTube-%40rvorine-FF0000?style=for-the-badge&logo=youtube&logoColor=white)](https://www.youtube.com/@rvorine)

---

## Problem

Given an array that may contain duplicate values, remove the duplicates while **preserving the original order** of the first occurrences.

**Example**

```
Input:  [3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5]
Output: [3, 1, 4, 5, 9, 2, 6]
```

---

## Solution

The key idea is to use a **Set** (or equivalent hash-based structure) to keep track of elements that have already been seen as we iterate through the array.  
For each element:
- If it is **not** in the set → add it to the result list **and** mark it as seen in the set.
- If it **is** already in the set → skip it.

This gives us **O(n)** time complexity and **O(n)** space complexity.

---

## Implementations

| Language | File |
|----------|------|
| Python | [python/solution.py](python/solution.py) |
| JavaScript | [javascript/solution.js](javascript/solution.js) |
| Java | [java/Solution.java](java/Solution.java) |
| C++ | [cpp/solution.cpp](cpp/solution.cpp) |
| Go | [go/solution.go](go/solution.go) |

---

### Python

```python
def remove_duplicates(arr):
    seen = set()
    result = []
    for item in arr:
        if item not in seen:
            seen.add(item)
            result.append(item)
    return result
```

### JavaScript

```javascript
function removeDuplicates(arr) {
    const seen = new Set();
    const result = [];
    for (const item of arr) {
        if (!seen.has(item)) {
            seen.add(item);
            result.push(item);
        }
    }
    return result;
}
```

### Java

```java
public static List<Integer> removeDuplicates(int[] arr) {
    Set<Integer> seen = new LinkedHashSet<>();
    for (int item : arr) {
        seen.add(item);
    }
    return new ArrayList<>(seen);
}
```

### C++

```cpp
std::vector<int> removeDuplicates(const std::vector<int>& arr) {
    std::unordered_set<int> seen;
    std::vector<int> result;
    for (int item : arr) {
        if (seen.find(item) == seen.end()) {
            seen.insert(item);
            result.push_back(item);
        }
    }
    return result;
}
```

### Go

```go
func removeDuplicates(arr []int) []int {
    seen := make(map[int]bool)
    result := []int{}
    for _, item := range arr {
        if !seen[item] {
            seen[item] = true
            result = append(result, item)
        }
    }
    return result
}
```

---

## How to Run

**Python**
```bash
python3 python/solution.py
```

**JavaScript**
```bash
node javascript/solution.js
```

**Java**
```bash
javac java/Solution.java && java -cp java Solution
```

**C++**
```bash
g++ -o solution cpp/solution.cpp && ./solution
```

**Go**
```bash
go run go/solution.go
```