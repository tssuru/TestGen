try:
    a,b,c=4,5,8
    def h(a):
        a-=1
        b=1
        c=3
        return a+b+c
    
    a,b,c=6,4,5
    print(h(b),a,b,c)
    
except: print('error')
