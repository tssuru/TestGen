try:
    a,b,c=7,4,6
    def h(a):
        a-=1
        b=4
        c=2
        return a+b+c
    
    a,b,c=9,8,2
    print(h(b),a,b,c)
    
except: print('error')
