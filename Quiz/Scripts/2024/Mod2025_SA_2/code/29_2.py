try:
    a,b,c=4,2,7
    def g(b):
        a=3
        b=2
        c=5
        return a+b+c
    
    a,b,c=8,5,2
    print(g(b),a,b,c)
except: print('error')
