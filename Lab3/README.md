# Lab3 - Zadanie do wykonania podczas zajęć

Na podstawie poniższego opisu zaprojektuj odpowiednie klasy i związki między klasami (hierarchia klas, zawieranie, odpowiednie pola i metody oraz właściwy poziom ich widoczności). Zdefiniuj odpowiednie metody w odpowiednich klasach, tak by jak najlepiej skorzystać z możliwości języka C++ – konieczne jest przemyślenie wyboru klasy, w której metoda będzie zdefiniowana, tego, czy i gdzie będzie przedefiniowywana, czy będzie wirtualna, czy nie itp. Zaimplementuj niezbędne konstruktory i destruktory. Zaprezentuj działanie wszystkich zaimplementowanych metod. Zaprezentuj działanie polimorfizmu na kolekcji (np. std::vector) wskaźników do klasy bazowej przechowującej obiekty klas bazowej i pochodnych.  

Uwaga: Metoda wirtualna (nie mylić z metodą czysto wirtualną) musi mieć implementację w klasie bazowej, sama deklaracja bez ciała nie wystarczy. Na potrzeby tego zadania można przyjąć, że jeśli nie da się wymyślić sensownego zachowania danej metody w klasie bazowej, to może ona np. zwracać dowolną wartość zgodną z zadeklarowanym typem zwracanym, realizować operację wg algorytmu dla którejś z klas potomnych lub po prostu wyrzucać wyjątek. Właściwym rozwiązaniem w takim wypadku byłoby zadeklarowanie metody jako czysto wirtualnej (wówczas klasa staje się klasą abstrakcyjną i nie można tworzyć jej instancji), ponieważ jednak metody czysto wirtualne nie były jeszcze omawiane, w tym zadaniu nie są wymagane.  

Punktacja: poprawna definicja klas – 2 pkt, prezentacja działania i polimorfizmu – 1 pkt.  

 

Walec (ang. cylinder) oraz stożek (ang. cone) są bryłami obrotowymi (ang. solid of revolution). Każda z nich ma w podstawie koło, ma również określoną wysokość. Dla każdej z tych brył można policzyć pole podstawy (tzn. pole koła określającego podstawę bryły; ang. base area) oraz objętość (ang. volume).  

Ponadto, dla każdej z brył można uzyskać informacje o jej podstawie i wysokości.  