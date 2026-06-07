try:
    a,b,c=4,0,2
    def g(b):
        global c
        a=2
        b-=3
        c=5
        return a+b+c
    
    a,b,c=6,9,5
    print(g(b),a,b,c)
    
except: print('error')
