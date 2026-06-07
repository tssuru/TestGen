try:
    a,b,c=6,5,9
    def g(b):
        a=3
        b+=5
        c=2
        return a+b+c
    
    a,b,c=2,4,5
    print(g(b),a,b,c)
    
except: print('error')
