try:
    a,b,c=8,1,9
    def g(b):
        global c
        a+=4
        b=5
        c=1
        return a+b+c
    
    a,b,c=3,0,5
    print(g(b),a,b,c)
    
except: print('error')
