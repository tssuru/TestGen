try:
    a,b,c=2,4,8
    def h(a):
        global c
        a-=3
        b=1
        c=2
        return a+b+c
    
    a,b,c=3,6,1
    print(h(b),a,b,c)
    
except: print('error')
