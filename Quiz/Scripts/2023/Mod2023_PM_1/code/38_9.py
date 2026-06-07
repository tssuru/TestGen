try:
    a,b,c=8,7,3
    def g(b):
        a=1
        b=4
        c=3
        return a+b+c
    
    a,b,c=5,0,9
    print(g(b),a,b,c)
    
except: print('error')
