try:
    a,b,c=0,7,6
    def h(a):
        a-=1
        b=5
        c=4
        return a+b+c
    
    a,b,c=2,5,8
    print(h(b),a,b,c)
    
except: print('error')
