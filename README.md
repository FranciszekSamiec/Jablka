# Jabłka

Na działce Bajtazara rośnie rozłożysta jabłoń. Jak w przypadku większości drzew w Bajtocji, każda gałąź
drzewa dokładnie metr powyżej miejsca rozpoczęcia kończy się lub rozwidla się na dwie mniejsze gałęzie.
Dodatkowo w punkcie każdego rozwidlenia oraz na końcach gałęzi rośnie dokładnie jedno jabłko. Bajtazar
zauważył, że pomimo tego, że jego drzewo jest bardzo duże, to posiada stosunkowo nieskomplikowaną strukturę:
występuje w nim co najwyżej n różnych typów gałęzi. Dzięki drabinie długości d metrów Bajtazar pozrywał
wszystkie jabłka do tej właśnie wysokości włącznie. Teraz zastanawia się, jak wiele jabłek wciąż pozostało na
drzewie. Napisz program, który wczyta reprezentację struktury drzewa i pomoże Bajtazarowi wyznaczyć liczbę
niezebranych jabłek.

## Wejście

Pierwszy wiersz zawiera dwie liczby całkowite n oraz d (1 ≤ n ≤ 106 , 1 ≤ d ≤ 100). Każdy z kolejnych n
wierszy zawiera dwie liczby całkowite ak oraz bk (0 ≤ ak, bk < k), oznaczające, że gałąź typu k rozdziela
się na dwie mniejsze, jedną typu ak i jedną typu bk. Liczba 0 oznacza gałąź, która nie ulega już podziałowi.
Z korzenia wychodzi gałąź typu n.

## Wyjście

Twój program powinien wypisać resztę z dzielenia przez 10^9 liczby węzłów drzewa oddalonych od korzenia
o więcej niż d metrów.

## Przykład

Dla danych wejściowych:
```text
4 3
0 0
1 0
2 1
3 2
```  
Poprawnym wynikiem jest:  
```text
8
```
Natomiast dla danych wejściowych:  
```text
4 4
0 0
1 0
2 1
3 2
```
Poprawnym wynikiem jest:  
```text
2
```
Na rysunku poniżej zilustrowano jabłoń z testów przykładowych. Typy gałęzi podano w miejscach rozgałęzienia.
![tree](https://github.com/FranciszekSamiec/Jablka/blob/master/tree.png)

## Rozwiązanie

Rozwiązaniem jest programowanie dynamiczne. 

