try:
    a,b,c=7,3,8
    def h(a):
        global c
        a=3
        b=5
        c=4
        return a+b+c
    
    a,b,c=4,7,2
    print(h(b),a,b,c)
    
except: print('error')
