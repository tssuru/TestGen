try:
    a,b,c=5,7,8
    def h(b):
        a=1
        b-=4
        c=5
        return a+b+c
    
    a,b,c=9,4,3
    print(h(b),a,b,c)
    
except: print('error')
