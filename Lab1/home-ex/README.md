#Lab1

Kamera w rozproszonym systemie wizyjnym charakteryzuje się: 
* nazwą,  
* symbolem,  
* wielkością sensora (1/2 cala, 1/3 cala, 2/3 cala, 1/1.8cal, 1/4cala),  
* „rozdzielczością przestrzenną” wyrażona w pikselach [W,H}, gdzie W liczba pikseli w wierszu, liczba pikseli w kolumnie, 
* „rozdzielczość bitowa” (Pixel Bit Depth) wyrażona w Bitach w zakresie 8-32bit  

Iloczyn kolumn i wierszy określa „rozdzielczość” urządzenia w MegaPikselach. Na podstawie wielości sensora i „rozdzielczości przestrzennej” można obliczyć wielkość pojedynczego piksela, a na podstawie „rozdzielczości bitowej” i „rozdzielczości” wielkość strumienia danych dla określonej liczby ramek na sekundę. 

Proszę napisać klasę reprezentującą kamerę zgodnie z powyższym opisem. Należy zaimplementować konstruktor argumentowy, gettery i settery (metody służące do odczytywania i modyfikowania danych) dla wszystkich pól oraz metody pozwalające na wyznaczenie: 
* rozdzielczości w MPix,  
* wielkości strumienia dla określonej liczby ramek na sekundę, 
* rozmiarów piksela.  

Należy zapewnić sprawdzanie poprawności wprowadzanych danych. 