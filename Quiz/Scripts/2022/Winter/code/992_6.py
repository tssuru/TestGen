try:
    a,b,c=5,7,6
    def g(b):
        a=2
        b*=1
        c=3
        return a+b+c
    
    a,b,c=3,0,1
    print(g(b),a,b,c)
    
except: print('error')
