# Zettel0

### Arbeitsaufteilung

## Aufgabe 1.1: Interface + UML
        Stack -> Imene
        Queue -> Imene
        Einfach verkettete Liste -> Aicha
        Doppelt verkettete Liste -> Aicha
        Priority Queue -> Aicha
        Hashende Menge -> Lukas
        Geordnete Menge -> Lukas 

        UML Merge:
        Aicha 

    
## Aufgabe 1.2: Implementierung
        Stack -> Imene
        Queue -> Imene
        Einfach verkettete Liste -> Aicha
        Doppelt verkettete Liste -> Aicha
        Priority Queue -> Lukas
        Hashende Menge -> Lukas


## Aufgabe 2.2: Throw 
        Queue -> Imene
        Stack -> Imene
        Hashende Menge -> Lukas
        Priority Queue -> Lukas


## Aufgabe 2.3: Untitest
        Queue -> Imene
        Stack -> Imene
        Einfach verkettete List -> Aicha
        Hashende Menge -> Lukas
        Priority Queue -> Lukas


## Aufgabe 3.1: Laufzeittest
        Priority Queue -> Lukas
        Hashende Menge -> Lukas

## Laufzzeit für Priority Queue

# Insert Funktion
![Employee data](/insertPrio.png?raw=true "Inert Funktion")

# Remove Funktion
![Employee data](/removePrio.png?raw=true "Remove Funktion")

# Size Funktion
![Employee data](/sizePrio.png?raw=true "Size Funktion")


## Laufzeit für Hashende Menge

# Insert Funktion
![Employee data](/insertHash.png?raw=true "Inert Funktion")

# Remove Funktion
![Employee data](/removeHash.png?raw=true "Remove Funktion")

# Find Funktion
![Employee data](/findHash.png?raw=true "Find Funktion")

# Size Funktion
![Employee data](/sizeHash.png?raw=true "Size Funktion")






### Implementierung

## CMake
        cmake_minimum_required(VERSION 3.16)
        project(ProjectAlpha VERSION 0.1.0)
        set(CMAKE_CXX_STANDARD 17)
        add_executable(ProjectAlpha priorityQueue/examples/main.cpp)
        

        Zum ausführen: cmake -S . -B build && cmake --build build   

    
    


## Add your files

- [ ] [Create](https://docs.gitlab.com/ee/user/project/repository/web_editor.html#create-a-file) or [upload](https://docs.gitlab.com/ee/user/project/repository/web_editor.html#upload-a-file) files
- [ ] [Add files using the command line](https://docs.gitlab.com/ee/gitlab-basics/add-file.html#add-a-file-using-the-command-line) or push an existing Git repository with the following command:

```
cd existing_repo
git remote add origin https://gitlab.informatik.uni-bonn.de/baumeisterl0/zettel0.git
git branch -M main
git push -uf origin main
```
