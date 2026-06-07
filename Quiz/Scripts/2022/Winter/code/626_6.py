try:
    a,b,c=5,6,2
    def g(b):
        a=4
        b-=2
        c=3
        return a+b+c
    
    a,b,c=1,0,3
    print(g(b),a,b,c)
    
except: print('error')
