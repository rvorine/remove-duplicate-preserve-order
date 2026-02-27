/**
 * Removes duplicates from an array while preserving the original order.
 * @param {Array} arr - The input array that may contain duplicate values.
 * @returns {Array} A new array with duplicates removed, keeping first occurrences.
 */
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

const sample = [3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5];
console.log("Original array:", sample);
console.log("After removing duplicates:", removeDuplicates(sample));
