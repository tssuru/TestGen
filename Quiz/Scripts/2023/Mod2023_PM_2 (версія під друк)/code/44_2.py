try:
    a,b,c=3,0,4
    def g(b):
        a=5
        b=4
        c=3
        return a+b+c
    
    a,b,c=7,2,5
    print(g(b),a,b,c)
    
except: print('error')
