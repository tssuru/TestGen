try:
    a,b,c=7,1,3
    def h(a):
        global c
        a=3
        b*=1
        c=4
        return a+b+c
    
    a,b,c=4,8,3
    print(h(b),a,b,c)
    
except: print('error')
