'''
2. Hacer un programa que realice la serie de fibonacci -> 1 1 2 3 5 8 13
'''

N = int(input("Numero de elementos de la secuencia: "))

x = 0  
y = 1
z = 1
i = 0

while i<N:    
    if i != N-1:
        print(f"{z}", end=",")
    else:
        print(f"{z}", end=".")
    
    z = x + y;

    x = y;
    y = z;
    
    i=i+1
