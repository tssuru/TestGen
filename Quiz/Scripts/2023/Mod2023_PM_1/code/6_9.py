try:
    a,b,c=4,2,8
    def h(a):
        a+=5
        b=3
        c=2
        return a+b+c
    
    a,b,c=1,3,7
    print(h(b),a,b,c)
    
except: print('error')
