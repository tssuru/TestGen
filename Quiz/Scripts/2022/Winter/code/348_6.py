try:
    a,b,c=1,6,9
    def g(b):
        a=1
        b+=3
        c=5
        return a+b+c
    
    a,b,c=2,7,3
    print(g(b),a,b,c)
    
except: print('error')
