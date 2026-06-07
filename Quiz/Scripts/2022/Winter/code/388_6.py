try:
    a,b,c=0,8,2
    def g(b):
        global c
        a-=1
        b=5
        c=1
        return a+b+c
    
    a,b,c=0,9,5
    print(g(b),a,b,c)
    
except: print('error')
