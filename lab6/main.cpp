// #include <iostream>
// using namespace std;
// int main() {
//     long long A, B, C;
//     cin >> A;
//     cin >> B;
//     cin >> C;
//     if (A % B == 0 && B > C) {
//         cout << (A/B) + C;
//         return 0;
//     }
//     if (A % B == 0 && B < C) {
//         cout << (A/B) - C;
//         return 0;
//     }
//     cout << (A + B) * C;
//     return 0;
// }

// int main() {
//     int N;
//     cin >> N;
//     switch(N) {
//         case 1:
//             cout << "Monday";
//             break;
//         case 2:
//             cout << "Tuesday";
//             break;
//         case 3:
//             cout << "Wednesday";
//             break;
//         case 4:
//             cout << "Thursday";
//             break;
//         case 5:
//             cout << "Friday";
//             break;
//         case 6:
//             cout << "Saturday";
//             break;
//         case 7:
//             cout << "Sunday";
//             break;
//         default:
//             cout << "error";
//             break;
//     }
//     return 0;
// }

// int main()
// {
// 	int x;
// 	std::cin >> x;
// 	std::cout << (x==1?"Positive":"Negfative");
// }

// int main() {
// 	int x;
// 	cin >> x;
// 	switch(x) {
// 		case -1:
// 			cout << "Negative number";
// 			break;
// 		case 1:
// 			cout << "Positive number";
// 			break;
// 		default:
// 			cout << "error";
// 			break;
// 	}
// 	return 0;
// }



// #include <iostream>
// using namespace std;
// int main()
// {	
// 	long long S {0};
// 	long long min = LLONG_MAX;
// 	int nom = 56;
// 	int N;
// 	cin >> N;
// 	for(int i {0}; i < N; i++)
// 	{
// 		long long x;
// 		cin >> x;
// 		if (x % 3 ==0 || x % 7 == 0)
// 		{
// 			S += x;
// 			if (x <= min)
// 			{
// 				min = x;
// 				nom = i;
// 			}
// 		}
// 	}
// 	cout << S << " " << min << " " << nom;
// 	return 0;
// }



// #include <iostream>
// using namespace std;
// int main()
// {
// 	int x;
// 	int s = 1;
// 	cin >> x;
// 	while (x != 0)
// 	{
// 		if ((x%10) % 2 == 0)
// 		{
// 			s *= (x%10);
// 		}
// 		x = x/10;
// 	}
// 	cout << s;
// 	return 0;
// }


#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int *massiv = new int[n];
	for (int i {0}; i < n; i++)
	{
		int a;
		cin >> a;
		massiv[i] =  a;
	}
	for (int i {0}; i < n;i++)
	{
		int x = massiv[i];
		int kol = 0;
		while (x != 0)
		{
			x = x/10;
			kol += 1;
		}
		int *chisla = new int[kol];
		int b;
		for (int i {0}; i < kol;i++)
		{
			b = x/10;
			chisla[i] = b;
		}
	}
	return 0;
}

