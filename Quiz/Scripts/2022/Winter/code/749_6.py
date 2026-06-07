try:
    a,b,c=3,5,8
    def g(a):
        global c
        a=3
        b*=1
        c=5
        return a+b+c
    
    a,b,c=1,5,6
    print(g(b),a,b,c)
    
except: print('error')
