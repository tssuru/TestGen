try:
    
    a,b,c=6,8,7
    def h(a,b=9,c):
        print(a,b,c,end="")
    
    h(a=1,0,a=3)
    print(a,b,c)
    
except: print('error')
