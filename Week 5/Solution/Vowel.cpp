#include <iostream>
using namespace std;

int main ()
{

char letter;


cout << " Enter A Letter To Check Wether its A Vowel ";
cin >> letter;


switch (letter){

	case 'A':
	cout << " Is a Vowel "<<endl;
	break ;

	case 'E':
	cout << " Is a Vowel "<<endl;
	break ;

	case 'I':
	cout << " Is a Vowel "<<endl;
	break ;

	case 'O':
	cout << " Is a Vowel "<<endl;
	break ;

	case 'U':
	cout << " Is a Vowel "<<endl;
	break ;

	case 'a':
	cout << " Is a Vowel "<<endl;
	break ;

	case 'e':
	cout << " Is a Vowel "<<endl;
	break ;

	case 'i':
	cout << " Is a Vowel "<<endl;
	break ;

	case 'o':
	cout << " Is a Vowel "<<endl;
	break ;

	case 'u':
	cout << " Is a Vowel "<<endl;
	break ;
	
default:
	cout << "Not A Vowel " << endl;

	break;

}

system("pause");
return 0;
}
