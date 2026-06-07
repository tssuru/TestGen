try:
    a,b,c=5,8,3
    def g(b):
        global c
        a+=5
        b=2
        c=3
        return a+b+c
    
    a,b,c=9,4,6
    print(g(b),a,b,c)
    
except: print('error')
