try:
    a,b,c=5,3,0
    def g(b):
        a=2
        b=3
        c=4
        return a+b+c
    
    a,b,c=1,9,6
    print(g(b),a,b,c)
    
except: print('error')
