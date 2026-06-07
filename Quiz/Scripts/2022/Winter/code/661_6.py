try:
    a,b,c=0,8,4
    def g(b):
        global c
        a=1
        b+=2
        c=5
        return a+b+c
    
    a,b,c=9,6,7
    print(g(b),a,b,c)
    
except: print('error')
