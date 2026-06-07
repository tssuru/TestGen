try:
    a,b,c=5,4,0
    def g(b):
        a-=5
        b=3
        c=2
        return a+b+c
    
    a,b,c=7,1,3
    print(g(b),a,b,c)
    
except: print('error')
