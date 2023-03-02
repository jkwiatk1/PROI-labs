# Lab4

* Przy pomocy mechanizmu wyjątków obsłuż możliwe błędy użytkownika. 
* Dodaj mozliwość wpisywania parametrów telefonu (opcja 2) z poprawną obsługą ewentualnych błędów użytkownika. 
* Do sprzętu AGD dodaj dwie sensowne klasy pochodne. 
* Wypełnij funkcję zwrocNazwyProduktowOProducencie zgodnie z jego nazwą. W przypadku braku produktu o wskazanym producencie, funkcja powinna rzucać wyjątek typu string o tekście "Nie ma takiego produktu". W przypadku braku nazwy produktu funkcja powinna rzucać wyjątek typu string o tekście "Produkt nie ma nazwy". * Proszę sprawdzić działanie wszystkich możliwości. Wywołanie tej funkcji powinno być zrealizowane w dodaktowej funkcji menu. 
* Wyświetl produkty posortowane względem ceny. Wykorzystaj w tym celu funkcję std::sort. 
* Stwórz konstruktor klasy Telefon, jako parametry przyjmujący wielkość matrycy i liczbę procesorów w postaci pary elementów (obiekt typu pair), który będzie nadawał wartość tych zmiennych poprzez listę inicjalizacyjną. 

* W pliku SklepInternetowy zamień wektor wskaźników na Produkty (vector<Product*>) na listę wskaźników (list\<Product\*\>) i popraw błędy które z tego wynikną. Pamiętaj, że lista nie ma zaimplementowanego dostępu poprzez indeks [], ale można do elementów dotrzeć poprzez iteratory.
