try:
    a,b,c=4,9,8
    def g(b):
        global c
        a*=5
        b=1
        c=2
        return a+b+c
    
    a,b,c=5,3,1
    print(g(b),a,b,c)
    
except: print('error')
