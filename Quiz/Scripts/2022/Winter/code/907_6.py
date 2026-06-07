try:
    a,b,c=3,0,9
    def g(b):
        global c
        a=1
        b-=3
        c=5
        return a+b+c
    
    a,b,c=1,5,7
    print(g(b),a,b,c)
    
except: print('error')
