try:
    a,b,c=9,8,3
    def g(a):
        global c
        a=3
        b-=1
        c=4
        return a+b+c
    
    a,b,c=0,4,6
    print(g(b),a,b,c)
    
except: print('error')
