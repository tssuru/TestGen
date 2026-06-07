try:
    a,b,c=8,2,9
    def g(b):
        global c
        a-=3
        b=5
        c=4
        return a+b+c
    
    a,b,c=1,4,7
    print(g(b),a,b,c)
    
except: print('error')
