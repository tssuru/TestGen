try:
    a,b,c=3,5,3
    def g(b):
        a-=4
        b=4
        c=5
        return a+b+c
    
    a,b,c=6,5,9
    print(g(b),a,b,c)
    
except: print('error')
