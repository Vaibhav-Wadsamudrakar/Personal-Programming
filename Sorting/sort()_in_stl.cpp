// #include <iostream>      SORTING FOR ARRAY
// #include <algorithm>
// using namespace std;

// int main() {
	
// 	int arr[]={10,20,5,7};
// 	int n = sizeof(arr) / sizeof(arr[0]);
	
// 	sort(arr,arr+n);
	
// 	for(int x: arr)
// 	    cout<<x<<" ";
	
// 	sort(arr,arr+n,greater<int>());
	
// 	cout<<endl;
// 	for(int x: arr)
// 	    cout<<x<<" ";
// }




// #include <iostream>        SORING FOR VECTOR
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main() {
	
//     vector<int> v={10,20,5,7};
	
// 	sort(v.begin(),v.end());
	
// 	for(int x: v)
// 	    cout<<x<<" ";
	
// 	sort(v.begin(),v.end(),greater<int>());
	
// 	cout<<endl;
// 	for(int x: v)
// 	    cout<<x<<" ";
// }




// #include <iostream>    OWN FUNCTION
// #include <algorithm>
// using namespace std;

// struct Point{
//     int x,y;
// };

// bool MyComp(Point p1,Point p2){
//     return p1.x<p2.x;
// }

// int main() {
	
//     Point arr[]={{3,10},{2,8},{5,4}};
	
// 	int n=sizeof(arr)/sizeof(arr[0]);
// 	sort(arr,arr+n,MyComp);
	
// 	for(auto i: arr)
// 	    cout<<i.x<<" "<<i.y<<endl;
// }