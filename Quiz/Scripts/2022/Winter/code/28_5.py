try:
    
    a,b,c=6,7,8
    def g(a,b=9,c):
        print(a,b,c,end="")
    
    g(4,a=3)
    print(a,b,c)
    
except: print('error')
