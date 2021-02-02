/* Shell Sort : ShellSort is mainly a variation of Insertion Sort.
In insertion sort, we move elements only one position ahead.
When an element has to be moved far ahead, many movements are involved.
The idea of shellSort is to allow exchange of far items. 
In shellSort, we make the array h-sorted for a large value of h. 
We keep reducing the value of h until it becomes 1. 
An array is said to be h-sorted if all sublists of every h’th element is sorted. */

#include <iostream >
using namespace std ;

/* function to sort array using shellSort */
void ShellSort(int a[],int n)
{
	// Start with a big gap, then reduce the gap
	for(int gap = n/2 ; gap > 0 ; gap /= 2)
	{
		// Do a gapped insertion sort for this gap size.
        // The first gap elements a[0..gap-1] are already in gapped order
        // keep adding one more element until the entire array is gap sorted
        
        
        
	}
	
	
}

int main()
{
	int a[] = {3,50,-2,9,4,31,-34,29,90,0} ;
	int n = sizeof(a) / sizeof(a[0]) ;
	ShellSort(a,n) ;
	for(int i = 0 ; i<n ; i++)
		cout<<a[i]<<" " ;
	return 0;
}

