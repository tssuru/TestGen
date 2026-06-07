try:
    a,b,c=4,1,6
    def g(b):
        a-=4
        b=2
        c=3
        return a+b+c
    
    a,b,c=2,7,3
    print(g(b),a,b,c)
    
except: print('error')
