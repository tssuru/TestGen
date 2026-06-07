try:
    a,b,c=4,8,0
    def h(a):
        global c
        a=2
        b=4
        c=5
        return a+b+c
    
    a,b,c=7,5,1
    print(h(b),a,b,c)
    
except: print('error')
