def remove_duplicates(arr):
    """Remove duplicates from arr while preserving the original order.

    Args:
        arr: A list of elements.

    Returns:
        A new list with duplicates removed, keeping the first occurrence of each element.
    """
    seen = set()
    result = []
    for item in arr:
        if item not in seen:
            seen.add(item)
            result.append(item)
    return result


if __name__ == "__main__":
    sample = [3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5]
    print("Original array:", sample)
    print("After removing duplicates:", remove_duplicates(sample))
