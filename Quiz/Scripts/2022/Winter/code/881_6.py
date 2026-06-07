try:
    a,b,c=4,8,2
    def g(b):
        global c
        a=5
        b+=4
        c=3
        return a+b+c
    
    a,b,c=1,7,3
    print(g(b),a,b,c)
    
except: print('error')
