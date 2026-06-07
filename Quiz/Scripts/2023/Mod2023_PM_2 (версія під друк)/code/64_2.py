try:
    a,b,c=1,6,1
    def h(a):
        global c
        a=4
        b*=5
        c=3
        return a+b+c
    
    a,b,c=5,3,0
    print(h(b),a,b,c)
    
except: print('error')
