//     #include <iostream>       NAIVE METHOD
// using namespace std;


// int firstOccurrence(int arr[], int n, int x)
// {
// 	for(int i = 0; i < n; i++)
// 		if(arr[i] == x)
// 			return i;

// 	return -1;
// }

// int main() {
    
//      int arr[] = {5, 10, 10, 15, 15}, n = 5;

// 	int x = 15;
	
// 	cout<<firstOccurrence(arr, n, x);
// 	return 0;
// }



// #include <iostream>     USING ITERATIVE BINARY SEARCH
// using namespace std;


// int firstOcc(int arr[], int n, int x)
// {
// 	int low = 0, high = n - 1;

// 	while(low <= high)
// 	{
// 		int mid = (low + high) / 2;

// 		if(x > arr[mid])
// 			low = mid + 1;

// 		else if(x < arr[mid])
// 			high = mid - 1;

// 		else
// 		{
// 			if(mid == 0 || arr[mid - 1] != arr[mid])
// 				return mid;

// 			else
// 				high = mid - 1;
// 		}

// 	}

// 	return -1;
// }

// int main() {
    
//     int arr[] = {5, 10, 10, 10, 20}, n = 5;

// 	int x = 10;
	
// 	cout<<firstOcc(arr, n, x);
// 	return 0;
// }



// #include <iostream>        USING RECCURSIVE BINARY SEARCH
// using namespace std;


// int firstOcc(int arr[], int low, int high, int x)
// {
// 	if(low > high)
// 		return -1;

// 	int mid = (low + high) / 2;

// 	if(x > arr[mid])
// 		return firstOcc(arr, mid + 1, high, x);

// 	else if(x < arr[mid])
// 		return firstOcc(arr, low, mid - 1, x);

// 	else
// 	{
// 		if(mid == 0 || arr[mid - 1] != arr[mid])
// 			return mid;

// 		else
// 			return firstOcc(arr, low, mid - 1, x);
// 	}
// }

// int main() {
    
//     int arr[] = {5, 10, 10, 15, 20, 20, 20}, n = 7;

// 	int x = 20;
	
// 	cout<<firstOcc(arr, 0, n - 1, x);
// 	return 0;
// }