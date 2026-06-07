try:
    a,b,c=9,2,6
    def h(a):
        global c
        a=1
        b*=4
        c=5
        return a+b+c
    
    a,b,c=0,4,8
    print(h(b),a,b,c)
    
except: print('error')
