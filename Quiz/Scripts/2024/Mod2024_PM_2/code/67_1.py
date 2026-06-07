try:
    a,b,c=8,1,2
    def g(b):
        a=3
        b=4
        c=1
        return a+b+c
    
    a,b,c=6,4,7
    print(g(b),a,b,c)
    
except: print('error')
