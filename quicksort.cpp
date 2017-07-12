 function quicksort(array, 'left', 'right')
     // If the list has 2 or more items
     if 'left' < 'right'
         // See "Choice of pivot" section below for possible choices
         choose any 'pivotIndex' such that 'left' = 'pivotIndex' = 'right'
         // Get lists of bigger and smaller items and final position of pivot
         'pivotNewIndex':= partition(array, 'left', 'right', 'pivotIndex')
         // Recursively sort elements smaller than the pivot
         quicksort(array, 'left', 'pivotNewIndex' - 1)
         // Recursively sort elements at least as big as the pivot
         quicksort(array, 'pivotNewIndex' + 1, 'right')