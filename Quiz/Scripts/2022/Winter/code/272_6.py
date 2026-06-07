try:
    a,b,c=2,7,5
    def g(b):
        a-=3
        b=2
        c=4
        return a+b+c
    
    a,b,c=3,6,4
    print(g(b),a,b,c)
    
except: print('error')
