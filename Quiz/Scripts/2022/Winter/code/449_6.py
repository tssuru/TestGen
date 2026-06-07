try:
    a,b,c=5,3,2
    def g(b):
        a=2
        b-=1
        c=5
        return a+b+c
    
    a,b,c=6,7,9
    print(g(b),a,b,c)
    
except: print('error')
