try:
    a,b,c=2,1,5
    def g(b):
        a=1
        b=2
        c=1
        return a+b+c
    
    a,b,c=3,4,3
    print(g(b),a,b,c)
    
except: print('error')
