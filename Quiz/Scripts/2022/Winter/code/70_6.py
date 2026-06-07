try:
    a,b,c=8,5,6
    def g(b):
        global c
        a-=2
        b=4
        c=1
        return a+b+c
    
    a,b,c=2,7,0
    print(g(b),a,b,c)
    
except: print('error')
