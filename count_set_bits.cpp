// #include<iostream>
// using namespace std;
// int count_set_bits(int n)
// {   
//     int b=0;
//     while(n!=0)
//     {
//         if((n&1)==1)
//         {
//             b++;
//         }
//         n=n>>1;
//     }    
//     cout<<b;  
// }
// int main()
// {
//     int a=5;
//     count_set_bits(a);
//     return 0;
// }



//brian kerningham algo
// C++ program to Count set 
// bits in an integer 
// #include <bits/stdc++.h> 
// using namespace std; 

// unsigned int countSetBits(int n) 
// { 
//        unsigned int count = 0; 
//        while (n) { 
//           n &= (n - 1); 
//           count++; 
//        } 
//       return count; 
// } 

// /* Program to test function countSetBits */
// int main() 
// { 
// 	int i = 9; 
// 	cout << countSetBits(i); 
// 	return 0; 
// } 
