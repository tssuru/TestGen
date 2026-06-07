try:
    a,b,c=7,4,8
    def h(a):
        global c
        a=1
        b=5
        c=1
        return a+b+c
    
    a,b,c=2,2,5
    print(h(b),a,b,c)
    
except: print('error')
