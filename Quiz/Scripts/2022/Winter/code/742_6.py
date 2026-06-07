try:
    a,b,c=8,7,9
    def g(b):
        global c
        a=4
        b+=3
        c=4
        return a+b+c
    
    a,b,c=2,9,4
    print(g(b),a,b,c)
    
except: print('error')
