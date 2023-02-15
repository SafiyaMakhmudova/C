#include <stdio.h>

int main() {


	int linya,bekat;

	printf(" Qaysi linyadasiz? [1,2,3]\n ");
	scanf ("%i",&linya);



	switch (linya){

	case 1:

	printf("Nechanchi bekatdasiz? [1...17]: ");
	scanf ("%i", &bekat);


		switch (bekat){

		    case 1:
			printf(" Qipchoq\n Afrosiyob\n Sirgali\n Toshkent halqa yoli\n Choshtepa\n Olmozor\n Chilonzor\n Mirzo Ulugbek\n Novza\n Milliy Bog\n Xalqlar dostligi\n Paxtakor\n Mustaqillik maydoni\n Amir Temur xiyoboni\n Hamid Olimjon\n Pushkin\n Buyuk ipak yoli\n  ");
				break;
		    case 2:
		       printf(" Afrosiyob\n Sirgali\n Toshkent halqa yoli\n Choshtepa\n Olmozor\n Chilonzor\n Mirzo Ulugbek\n Novza\n Milliy Bog\n Xalqlar dostligi\n Paxtakor\n Mustaqillik maydoni\n Amir Temur xiyoboni\n Hamid Olimjon\n Pushkin\n Buyuk ipak yoli\n  ");
		       		break;
		    case 3:
		    	printf(" Sirgali\n Toshkent halqa yoli\n Choshtepa\n Olmozor\n Chilonzor\n Mirzo Ulugbek\n Novza\n Milliy Bog\n Xalqlar dostligi\n Paxtakor\n Mustaqillik maydoni\n Amir Temur xiyoboni\n Hamid Olimjon\n Pushkin\n Buyuk ipak yoli\n  ");
		    		break;
		    case 4:
		        printf(" Toshkent halqa yoli\n Choshtepa\n Olmozor\n Chilonzor\n Mirzo Ulugbek\n Novza\n Milliy Bog\n Xalqlar dostligi\n Paxtakor\n Mustaqillik maydoni\n Amir Temur xiyoboni\n Hamid Olimjon\n Pushkin\n Buyuk ipak yoli\n  ");
		       		break;
		    case 5:
		        printf(" Choshtepa\n Olmozor\n Chilonzor\n Mirzo Ulugbek\n Novza\n Milliy Bog\n Xalqlar dostligi\n Paxtakor\n Mustaqillik maydoni\n Amir Temur xiyoboni\n Hamid Olimjon\n Pushkin\n Buyuk ipak yoli\n  ");
		       		break;
		    case 6:
		        printf(" Olmozor\n Chilonzor\n Mirzo Ulugbek\n Novza\n Milliy Bog\n Xalqlar dostligi\n Paxtakor\n Mustaqillik maydoni\n Amir Temur xiyoboni\n Hamid Olimjon\n Pushkin\n Buyuk ipak yoli\n  ");
		        	break;
		    case 7:
		        printf(" Chilonzor\n Mirzo Ulugbek\n Novza\n Milliy Bog\n Xalqlar dostligi\n Paxtakor\n Mustaqillik maydoni\n Amir Temur xiyoboni\n Hamid Olimjon\n Pushkin\n Buyuk ipak yoli\n  ");
		        	break;
		    case 8:
		        printf(" Mirzo Ulugbek\n Novza\n Milliy Bog\n Xalqlar dostligi\n Paxtakor\n Mustaqillik maydoni\n Amir Temur xiyoboni\n Hamid Olimjon\n Pushkin\n Buyuk ipak yoli\n  ");
		        	break;
		    case 9:
		        printf(" Novza\n Milliy Bog\n Xalqlar dostligi\n Paxtakor\n Mustaqillik maydoni\n Amir Temur xiyoboni\n Hamid Olimjon\n Pushkin\n Buyuk ipak yoli\n  ");
		        	break;
		    case 10:
		        printf(" Milliy Bog\n Xalqlar dostligi\n Paxtakor\n Mustaqillik maydoni\n Amir Temur xiyoboni\n Hamid Olimjon\n Pushkin\n Buyuk ipak yoli\n  ");
		        	break;
		    case 11:
		        printf(" Xalqlar dostligi\n Paxtakor\n Mustaqillik maydoni\n Amir Temur xiyoboni\n Hamid Olimjon\n Pushkin\n Buyuk ipak yoli\n  ");
		        	break;
		    case 12:
		        printf(" Paxtakor\n Mustaqillik maydoni\n Amir Temur xiyoboni\n Hamid Olimjon\n Pushkin\n Buyuk ipak yoli\n  ");
		        	break;
		    case 13:
		        printf(" Mustaqillik maydoni\n Amir Temur xiyoboni\n Hamid Olimjon\n Pushkin\n Buyuk ipak yoli\n  ");
		        	break;
		    case 14:
		        printf(" Amir Temur xiyoboni\n Hamid Olimjon\n Pushkin\n Buyuk ipak yoli\n  ");
		        	break;
		    case 15:
		        printf(" Hamid Olimjon\n Pushkin\n Buyuk ipak yoli\n  ");
		        	break;
		    case 16:
		        printf(" Pushkin\n Buyuk ipak yoli\n  ");
		        	break;
		    case 17:
		        printf(" Buyuk ipak yoli\n  ");
		        	break;

		}


	case 2:

		printf("Nechanchi bekatdasiz? [1...11]: ");
		scanf ("%i", &bekat);


		switch (bekat){

			case 1:
				printf(" Beruniy\n Tinchlik\n Chorsu\n G'afur G'ulom\n Alisher Navoiy\n O'zbekiston\n Kosmonavtlar\n Oybek\n Toshkent\n Mashinasozlar\n Do'stlik\n");
					break;
			case 2:
				printf(" Tinchlik\n Chorsu\n G'afur G'ulom\n Alisher Navoiy\n O'zbekiston\n Kosmonavtlar\n Oybek\n Toshkent\n Mashinasozlar\n Do'stlik\n");
					break;
			case 3:
				printf(" Chorsu\n G'afur G'ulom\n Alisher Navoiy\n O'zbekiston\n Kosmonavtlar\n Oybek\n Toshkent\n Mashinasozlar\n Do'stlik\n");
					break;
			case 4:
				printf(" G'afur G'ulom\n Alisher Navoiy\n O'zbekiston\n Kosmonavtlar\n Oybek\n Toshkent\n Mashinasozlar\n Do'stlik\n");
					break;
			case 5:
				printf(" Alisher Navoiy\n O'zbekiston\n Kosmonavtlar\n Oybek\n Toshkent\n Mashinasozlar\n Do'stlik\n");
					break;
			case 6:
				printf(" O'zbekiston\n Kosmonavtlar\n Oybek\n Toshkent\n Mashinasozlar\n Do'stlik\n");
					break;
			case 7:
				printf(" Kosmonavtlar\n Oybek\n Toshkent\n Mashinasozlar\n Do'stlik\n");
					break;
			case 8:
				printf(" Oybek\n Toshkent\n Mashinasozlar\n Do'stlik\n");
					break;
			case 9:
				printf(" Toshkent\n Mashinasozlar\n Do'stlik\n");
					break;
			case 10:
				printf(" Mashinasozlar\n Do'stlik\n");
					break;
			case 11:
				printf(" Do'stlik\n");
					break;

		}


	case 3:

		printf("Nechanchi bekatdasiz? [1...9]: ");
		scanf ("%i", &bekat);


		switch (bekat){

			case 1:
				printf(" Turkiston\n Yunusobod\n Fayzulla Xo'jayev\n Shahriston\n Bodomzor\n Minor\n Abdulla Qodoriy\n Yunus Rajabiy\n Ming o'rik\n ");
					break;
			case 2:
				printf(" Yunusobod\n Fayzulla Xo'jayev\n Shahriston\n Bodomzor\n Minor\n Abdulla Qodoriy\n Yunus Rajabiy\n Ming o'rik\n ");
					break;
			case 3:
				printf(" Fayzulla Xo'jayev\n Shahriston\n Bodomzor\n Minor\n Abdulla Qodoriy\n Yunus Rajabiy\n Ming o'rik\n ");
					break;
			case 4:
				printf(" Shahriston\n Bodomzor\n Minor\n Abdulla Qodoriy\n Yunus Rajabiy\n Ming o'rik\n ");
					break;
			case 5:
				printf(" Bodomzor\n Minor\n Abdulla Qodoriy\n Yunus Rajabiy\n Ming o'rik\n ");
					break;
			case 6:
				printf(" Minor\n Abdulla Qodoriy\n Yunus Rajabiy\n Ming o'rik\n ");
					break;
			case 7:
				printf(" Abdulla Qodoriy\n Yunus Rajabiy\n Ming o'rik\n ");
					break;
			case 8:
				printf(" Yunus Rajabiy\n Ming o'rik\n ");
					break;
			case 9:
				printf(" Ming o'rik\n ");
					break;
		}
	}

	return 0;
}
