try:
    a,b,c=6,1,1
    def g(b):
        a+=4
        b=5
        c=4
        return a+b+c
    
    a,b,c=2,0,5
    print(g(b),a,b,c)
    
except: print('error')
