for i in range (10,100):
    a = i // 10
    b = i % 10
    for n in range (100):
        c = n // 10
        d = n % 10
        bool = a!=b and a!=c and a!=d and b!=d and c!=b and c!=d
        if bool: print (i*100+n)
