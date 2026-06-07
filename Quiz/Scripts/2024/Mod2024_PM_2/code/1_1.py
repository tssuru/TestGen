try:
    a,b,c=4,5,9
    def g(b):
        global c
        a=2
        b*=4
        c=3
        return a+b+c
    
    a,b,c=1,8,0
    print(g(b),a,b,c)
    
except: print('error')
