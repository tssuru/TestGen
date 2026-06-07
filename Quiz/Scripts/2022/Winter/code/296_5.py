try:
    
    a,b,c=9,7,8
    def h(a,b=6,c):
        print(a,b,c,end="")
    
    h(c=1,a=0,b=3)
    print(a,b,c)
    
except: print('error')
