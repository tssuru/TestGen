try:
    a,b,c=7,2,5
    def g(b):
        a=4
        b-=5
        c=4
        return a+b+c
    
    a,b,c=8,7,4
    print(g(b),a,b,c)
    
except: print('error')
