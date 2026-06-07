try:
    a,b,c=6,9,7
    def g(b):
        a=3
        b+=4
        c=2
        return a+b+c
    
    a,b,c=0,1,2
    print(g(b),a,b,c)
    
except: print('error')
