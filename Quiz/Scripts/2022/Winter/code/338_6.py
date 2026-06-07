try:
    a,b,c=2,0,3
    def g(b):
        global c
        a=4
        b*=1
        c=5
        return a+b+c
    
    a,b,c=9,7,5
    print(g(b),a,b,c)
    
except: print('error')
