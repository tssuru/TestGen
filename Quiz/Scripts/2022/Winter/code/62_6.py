try:
    a,b,c=2,8,4
    def h(a):
        global c
        a+=3
        b=1
        c=3
        return a+b+c
    
    a,b,c=6,3,2
    print(h(b),a,b,c)
    
except: print('error')
