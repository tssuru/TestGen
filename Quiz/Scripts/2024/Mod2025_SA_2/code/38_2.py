try:
    a,b,c=5,6,3
    def g(b):
        global c
        a*=4
        b=1
        c=2
        return a+b+c
    
    a,b,c=7,8,0
    print(g(b),a,b,c)
except: print('error')
