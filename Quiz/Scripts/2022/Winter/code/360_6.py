try:
    a,b,c=3,0,2
    def g(b):
        a+=3
        b=1
        c=5
        return a+b+c
    
    a,b,c=7,9,1
    print(g(b),a,b,c)
    
except: print('error')
