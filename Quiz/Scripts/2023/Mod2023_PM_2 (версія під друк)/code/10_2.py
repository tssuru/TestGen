try:
    a,b,c=2,9,7
    def g(a):
        global c
        a=1
        b*=4
        c=3
        return a+b+c
    
    a,b,c=3,1,0
    print(g(b),a,b,c)
    
except: print('error')
