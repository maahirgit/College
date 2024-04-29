//Switch in class
#include<iostream>
using namespace std;
class vowel
{
	char c;
	public:
		/*void input()
		{
			cout<<"Enter value of c";
			cin>>c;
		}*/
		void find()
		{
			do
			{
				cin>>c;
				switch(c)
				{
					case 'a':
						cout<<"Vowel a";
						break;
					case 'A':
					case 'e':
					case 'E':
					case 'i':
					case 'I':
					case 'o':
					case 'O':
					case 'u':
					case 'U':
						cout<<"Its vowel";
						break;
					default:
						cout<<"Its consonant";
				}
			}while(!(c>=65)&&(c<=90));
		}
};
int main()
{
	vowel v1;
	//v1.input();
	v1.find();
}






