Let's go through key-value data structures in C, C++, C#, JavaScript, PHP, Python, Go, and Rust.
We'll cover their implementation, and compiler/interpreter actions, provide example codes with comments and explanations, discuss their pros and cons, and explore the algorithms used with each data structure.

1. C:
   - Key-Value Data Structure: C does not have built-in native key-value data structures like dictionaries or hash maps. You can implement them using arrays and manual indexing.

2. C++:
   - Key-Value Data Structure: `std::map` and `std::unordered_map` from the C++ Standard Template Library (STL).
   - Implementation: `std::map` is typically implemented as a balanced binary search tree (Red-Black Tree), and `std::unordered_map` is implemented as a hash table.
   - Compiler/Interpreter Actions: The C++ STL is part of the standard library, and the compiler handles the compilation and linking of the required header files.
   - Example:

```cpp
#include <iostream>
#include <unordered_map>

int main() {
    // Creating an unordered_map in C++
    std::unordered_map<std::string, int> my_map = { {"apple", 1}, {"banana", 2}, {"orange", 3} };

    // Accessing values using keys
    std::cout << my_map["apple"] << std::endl;   // Output: 1
    std::cout << my_map["banana"] << std::endl;  // Output: 2

    // Adding a new key-value pair
    my_map["grape"] = 4;
    std::cout << my_map["grape"] << std::endl;   // Output: 4

    return 0;
}
```

   - Pros and Cons: `std::map` provides ordered key-value pairs, while `std::unordered_map` offers faster access time but unordered keys. They both have a trade-off between lookup time and memory consumption.

3. C#:
   - Key-Value Data Structure: `Dictionary<TKey, TValue>` class.
   - Implementation: The `Dictionary<TKey, TValue>` class is implemented as a hash table.
   - Compiler/Interpreter Actions: In C#, the .NET Framework includes the `Dictionary<TKey, TValue>` class, and the compiler handles the compilation and linking.
   - Example:

```csharp
using System;
using System.Collections.Generic;

class Program {
    static void Main() {
        // Creating a Dictionary in C#
        Dictionary<string, int> myDictionary = new Dictionary<string, int>();

        // Adding key-value pairs
        myDictionary["apple"] = 1;
        myDictionary["banana"] = 2;

        // Accessing values using keys
        Console.WriteLine(myDictionary["apple"]);   // Output: 1
        Console.WriteLine(myDictionary["banana"]);  // Output: 2

        // Adding a new key-value pair
        myDictionary["grape"] = 4;
        Console.WriteLine(myDictionary["grape"]);   // Output: 4
    }
}
```

   - Pros and Cons: C#'s `Dictionary` provides fast lookups and is widely used for mapping keys to values in .NET applications.

4. JavaScript:
   - Key-Value Data Structure: JavaScript objects and Maps.
   - Implementation: Objects are a type of map where keys are strings or symbols. Maps are implemented as hash tables.
   - Compiler/Interpreter Actions: JavaScript is an interpreted language, and the objects and Map implementations are built into the language itself.
   - Example:

```javascript
// Using objects as key-value data structures
let myObject = {
    apple: 1,
    banana: 2,
};

// Accessing values using keys
console.log(myObject["apple"]);   // Output: 1
console.log(myObject["banana"]);  // Output: 2

// Adding a new key-value pair
myObject["grape"] = 4;
console.log(myObject["grape"]);   // Output: 4

// Using Maps as key-value data structures
let myMap = new Map();

// Adding key-value pairs
myMap.set("apple", 1);
myMap.set("banana", 2);

// Accessing values using keys
console.log(myMap.get("apple"));   // Output: 1
console.log(myMap.get("banana"));  // Output: 2

// Adding a new key-value pair
myMap.set("grape", 4);
console.log(myMap.get("grape"));   // Output: 4
```

   - Pros and Cons: Objects are simple and fast but have some limitations in handling non-string keys. Maps provide more flexible key types and have built-in methods for managing key-value pairs.

5. PHP:
   - Key-Value Data Structure: PHP arrays (associative arrays).
   - Implementation: PHP arrays are implemented as hash tables.
   - Compiler/Interpreter Actions: PHP is an interpreted language, and arrays are a built-in data structure.
   - Example:

```php
// Using arrays as key-value data structures
$myArray = array(
    "apple" => 1,
    "banana" => 2,
);

// Accessing values using keys
echo $myArray["apple"];   // Output: 1
echo $myArray["banana"];  // Output: 2

// Adding a new key-value pair
$myArray["grape"] = 4;
echo $myArray["grape"];   // Output: 4
```

   - Pros and Cons: PHP arrays provide a flexible and straightforward way to implement key-value data structures.

6. Python:
   - Key-Value Data Structure: Dictionaries (`dict`).
   - Implementation: Python dictionaries are implemented as hash tables.
   - Compiler/Interpreter Actions: Python is an interpreted language, and dictionaries are a built-in data structure.
   - Example:

```python
# Using dictionaries as key-value data structures
my_dict = {'apple': 1, 'banana': 2}

# Accessing values using keys
print(my_dict['apple'])   # Output: 1
print(my_dict['banana'])  # Output: 2

# Adding a new key-value pair
my_dict['grape'] = 4
print(my_dict['grape'])   # Output: 4
```

   - Pros and Cons: Python dictionaries are versatile and widely used due to their efficiency and flexibility.

7. Go:
   - Key-Value Data Structure: `map` data type.
   - Implementation: Go maps are implemented as hash tables.
   - Compiler/Interpreter Actions: Go is a compiled language, and maps are part of the standard library, so the compiler handles their implementation.
   - Example:

```go
package main

import "fmt"

func main() {
    // Using maps as key-value data structures in Go
    myMap := map[string]int{
        "apple": 1,
        "banana": 2,
    }

    // Accessing values using keys
    fmt.Println(myMap["apple"])   // Output: 1
    fmt.Println(myMap["banana"])  // Output: 2

    // Adding a new key-value pair
    myMap["grape"] = 4
    fmt.Println(myMap["grape"])   // Output: 4


}
```

   - Pros and Cons: Go maps are efficient and provide a convenient way to implement key-value pairs.

8. Rust:
   - Key-Value Data Structure: `HashMap` in the `std::collections` module.
   - Implementation: Rust `HashMap` is implemented as a hash table.
   - Compiler/Interpreter Actions: Rust is a compiled language, and the `HashMap` implementation is part of the standard library, so the compiler handles its usage.
   - Example:

```rust
use std::collections::HashMap;

fn main() {
    // Using HashMap as key-value data structures in Rust
    let mut my_map = HashMap::new();
    my_map.insert("apple", 1);
    my_map.insert("banana", 2);

    // Accessing values using keys
    println!("{}", my_map["apple"]);   // Output: 1
    println!("{}", my_map["banana"]);  // Output: 2

    // Adding a new key-value pair
    my_map.insert("grape", 4);
    println!("{}", my_map["grape"]);   // Output: 4
}
```

   - Pros and Cons: Rust `HashMap` provides efficient key-value pair storage with strong safety guarantees and no overhead for dynamic memory allocation.

Now, let's discuss the algorithms used with these key-value data structures:

- C++: `std::map` uses a balanced binary search tree (Red-Black Tree) for ordered key-value pairs. `std::unordered_map` uses a hash table for fast access.
- C#: `Dictionary` is implemented as a hash table, providing fast key-value lookups.
- JavaScript: Objects and Maps use hash tables, offering efficient key-value pair storage and retrieval.
- PHP: PHP arrays are implemented as hash tables, providing a flexible key-value data structure.
- Python: Dictionaries are implemented as hash tables, providing efficient key-value pair storage.
- Go: Go maps are implemented as hash tables, providing fast and flexible key-value storage.
- Rust: `HashMap` in Rust is implemented as a hash table, offering efficient key-value pair storage.

When to use these key-value data structures:

- Use C++ `std::map` if you need ordered key-value pairs and `std::unordered_map` for faster access in an unordered manner.
- In C#, use `Dictionary` when you need to map keys to values in a hash table.
- In JavaScript, use objects for simple string-based keys, and use `Map` for more flexible key types and built-in methods.
- In PHP, use arrays for key-value data structures when you need a simple implementation.
- In Python, use dictionaries for key-value data structures due to their flexibility and efficiency.
- In Go, use maps when you need an efficient key-value data structure with a flexible key type.
- In Rust, use `HashMap` for efficient and safe key-value pair storage.

The runtime complexity and memory (space) usage complexity of key-value data structures in various programming languages are summarized below:

1. C/C++:
   - `std::map` (Ordered Map): Runtime complexity - O(log n) for insertions, deletions, and searches. Memory usage - Moderate.
   - `std::unordered_map` (Unordered Map): Runtime complexity - O(1) on average for insertions, deletions, and searches (amortized). Memory usage - Relatively high.

2. C#:
   - `Dictionary<TKey, TValue>`: Runtime complexity - O(1) on average for insertions, deletions, and searches. Memory usage - Relatively high.

3. JavaScript:
   - Objects and Maps: Runtime complexity - O(1) on average for insertions, deletions, and searches. Memory usage - Relatively high.

4. PHP:
   - Arrays (Associative Arrays): Runtime complexity - O(1) on average for insertions, deletions, and searches. Memory usage - Relatively high.

5. Python:
   - Dictionaries (`dict`): Runtime complexity - O(1) on average for insertions, deletions, and searches. Memory usage - Relatively high.

6. Go:
   - Maps: Runtime complexity - O(1) on average for insertions, deletions, and searches. Memory usage - Moderate.

7. Rust:
   - `HashMap`: Runtime complexity - O(1) on average for insertions, deletions, and searches. Memory usage - Moderate.

The runtime complexity indicates the efficiency of key-value operations concerning the size of the data set. A lower runtime complexity generally means faster operations. Memory usage complexity refers to the space required to store the data structure and its associated overhead. A higher memory usage complexity indicates more memory consumption.

Keep in mind that these complexities are general descriptions, and the actual performance can vary depending on factors like the specific implementation, the size of the data set, and the operations performed. Always benchmark and profile your code in your specific use case to get accurate performance measurements.

In summary, key-value data structures are fundamental for many programming tasks, enabling efficient mapping of keys to values. Each language provides its own implementation, allowing developers to choose the most suitable one based on performance, features, and convenience. The algorithms employed in these data structures ensure efficient operations, such as lookup, insertion, and deletion, making them essential tools for software development.
