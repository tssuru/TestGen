try:
    a,b,c=6,7,0
    def h(a):
        a+=1
        b=3
        c=5
        return a+b+c
    
    a,b,c=7,8,6
    print(h(b),a,b,c)
    
except: print('error')
