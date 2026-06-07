try:
    a,b,c=5,0,8
    def h(a):
        global c
        a+=2
        b=4
        c=4
        return a+b+c
    
    a,b,c=4,1,9
    print(h(b),a,b,c)
    
except: print('error')
