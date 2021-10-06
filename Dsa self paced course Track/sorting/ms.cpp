// void merge(arr, l, m, r)
// {
//     int n1 = m - l + 1, n2 = r - m;
//     int left[n1], right[n2];
//     for (int i = 0; i < n1; i++)
//         left[i] = arr[l + i];
//     for (int i = 0; i < n2; i++)
//         right[i] = arr[n1 + i];
//     int i = 0, j = 0, k = 0;
//     while (i < n1 && j < n2)
//         if (left[i] <= right[j])
//             arr[k++] = left[i++];
//         else
//             arr[k++] = right[j++];
//     while (i < n1)
//         arr[k++] = left[i++];
//     while (j < n2)
//         arr[k++] = right[j++];
// }

// void mergeSort(arr, l, r)
// {
//     if (r > l)
//     {
//         int m = l + (r - l) / 2;
//         mergeSort(arr, l, m);
//         mergeSort(arr, m + 1, r);
//         merge(arr, l, m, r);
//     }
// } //it is the max optimised mergeSort, it is stable, THETA(nlogn), it takes BigO(n) auxilary space
