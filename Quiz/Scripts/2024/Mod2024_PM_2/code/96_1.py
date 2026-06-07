try:
    a,b,c=1,8,6
    def g(b):
        global c
        a+=3
        b=5
        c=2
        return a+b+c
    
    a,b,c=2,9,4
    print(g(b),a,b,c)
    
except: print('error')
