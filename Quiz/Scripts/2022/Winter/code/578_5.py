try:
    
    a,b,c=6,7,8
    def h(a,b=9,c):
        print(a,b,c,end="")
    
    h(a=3,0,a=2)
    print(a,b,c)
    
except: print('error')
