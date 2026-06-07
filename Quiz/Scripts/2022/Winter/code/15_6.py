try:
    a,b,c=0,2,8
    def h(a):
        a+=1
        b=3
        c=4
        return a+b+c
    
    a,b,c=7,1,9
    print(h(b),a,b,c)
    
except: print('error')
