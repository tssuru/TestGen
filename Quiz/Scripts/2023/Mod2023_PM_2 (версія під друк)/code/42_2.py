try:
    a,b,c=7,8,1
    def h(a):
        global c
        a=5
        b*=2
        c=3
        return a+b+c
    
    a,b,c=6,9,6
    print(h(b),a,b,c)
    
except: print('error')
