package main

import "fmt"

// removeDuplicates removes duplicate values from arr while preserving the
// original order of first occurrences. Returns a new slice with unique elements.
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

func main() {
	sample := []int{3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5}
	fmt.Println("Original array:", sample)
	fmt.Println("After removing duplicates:", removeDuplicates(sample))
}
