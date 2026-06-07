try:
    a,b,c=2,5,8
    def g(b):
        a=2
        b=3
        c=5
        return a+b+c
    
    a,b,c=3,6,9
    print(g(b),a,b,c)
    
except: print('error')
