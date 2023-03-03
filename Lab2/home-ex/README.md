# Lab2 - Zadanie do wykonania w domu

Proszę zaimplementować klasę, reprezentującą ofertę pakietu telewizyjnego udostępnianą klientowi operatora telekomunikacyjnego. Pakiet charakteryzuje się nazwą, okresem dostępności (daty początku i końca dostępności danej oferty), ceną oraz zestawem kanałów dostępnych w ramach danego pakietu. Na potrzeby tego zadania kanały telewizyjne mogą być reprezentowane za pomocą nazw.

Wskazaną w treści zadania. W każdym z zadań należy dobrać odpowiednie typy pól i wartości zwracanych metod oraz zaimplementować:
* odpowiedni(e) konstruktor(y), 
* gettery i settery dla wszystkich pólniebędących kolekcjami, oraz do kolekcji aby móc wyświetlić wszystkie elementy ofert,
* metody umożliwiające operowanie na kolekcjach i ich elementach:
    * wyszukiwanie elementów w kolekcji,
    * dodawanie nowych elementów do kolekcji (zakładamy, że dodawanie  duplikatów  jest niedopuszczalne),
    * modyfikację danego elementu kolekcji,
    * usuwanie określonego elementu z kolekcji(nie jest możliwa modyfikacja ani usunięcie elementu, którego wcześniej nie było w kolekcji),
    * zliczanie elementów kolekcji.
    
We wszystkich zadaniach zachodzi potrzeba użycia co najmniej jednej kolekcji oraz odwołań do obiektów innych  klas.  Zgodnie  z  podejściem  obiektowym,  należałoby  stworzyć  wszystkie  niezbędne  klasy reprezentujące pojęcia pojawiające się w zadaniu, słusznie byłoby też użyć rodzaju kolekcji pasującego do danego zadania. Dla uproszczenia, na potrzeby tego (i tylko tego) zadania, można ograniczyć się do zastosowania typów wbudowanych (np. stringi vector). Do reprezentacji kolekcji elementów proszę wówczas użyć wektorów z biblioteki standardowej C++ (z pliku vector), a powiązane obiekty zastąpić symbolizującymi je zmiennymi typu string(np. jeśli w przypadku pisarza chcemy przechować kolekcję napisanych  przez  niego  książek,  to  na  potrzeby  tego  zadania  można  przyjąć,  że  książkajest reprezentowana przez tytuł zapisywany jako string,  a  kolekcja –jako vector).Wówczas  elementy kolekcji będą rozpoznawane na podstawie napisów typu string(np. sprawdzenie, czy książka została napisana przez danego pisarza, będzie polegać na sprawdzeniu, czy wektor książek autorstwa pisarza zawiera tytuł wyszukiwanej książki).

Uwaga: Powyższe uproszczenie jest dopuszczalne wyłącznie na potrzeby zadania nr 2 i nie może zostać zastosowane w kolejnych zadaniach ani w projekcie. 

Dla  wszystkich metod  proszę przygotować testy jednostkowe, sprawdzające zachowanie klasy zarówno dla danych poprawnych, jak i niepoprawnych. Każdą metodę należy przetestować na kilku różnych wartościach danych.

Do  testów  jednostkowych  należy  użyć  biblioteki  do  tego  przeznaczonej,  np. Catch2(https://github.com/catchorg/Catch2/tree/v2.x),  opis  podstaw  jej  użycia  znajduje  się  pod  adresem 
https://github.com/catchorg/Catch2/blob/v2.x/docs/tutorial.md#top. Jedno  z  rozwiązań  polega  na ściągnięciu kodu biblioteki (zawartej w całości w jednym pliku nagłówkowym) i dodaniu tego pliku do folderu  z  projektem. Można skorzystać z innej analogicznej biblioteki, niedopuszczalne jest jednak wykonanie „testów” za pomocą instrukcji assertczy cout.

Ponadto, proszę napisać program wczytujący dane (wartości kolejnych pól obiektu) z argumentów wywołania programu, tworzący na ich podstawie obiekt klasy z treści zadania i wypisujący wszystkie pola tego obiektu. Proszę zabezpieczyć program przed wczytaniem niepoprawnych danych wejściowych (np. nieodpowiednia liczba argumentów, niepoprawna wartość argumentu).

W wielu przypadkach konieczna będzie również konwersja wczytanych argumentów wywołania programu do innego typu, np. liczbowego. Istnieją różne metody konwersji, można np. użyć obiektów typu stringstream z biblioteki sstream lub funkcji dostępnych w bibliotece string, np. std::stod, std::stoi.

Proszę zadbać o jakość kodu, w tym o przestrzeganie zaleceń podanych na początku semestru.

