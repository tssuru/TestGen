try:
    a,b,c=6,1,0
    def g(b):
        a=2
        b=4
        c=1
        return a+b+c
    
    a,b,c=2,3,5
    print(g(b),a,b,c)
    
except: print('error')
