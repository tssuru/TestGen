try:
    a,b,c=5,6,8
    def g(a):
        global c
        a=5
        b*=1
        c=3
        return a+b+c
    
    a,b,c=9,3,0
    print(g(b),a,b,c)
    
except: print('error')
