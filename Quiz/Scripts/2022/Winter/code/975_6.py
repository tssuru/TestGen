try:
    a,b,c=4,2,1
    def g(b):
        global c
        a=2
        b-=1
        c=2
        return a+b+c
    
    a,b,c=0,1,3
    print(g(b),a,b,c)
    
except: print('error')
