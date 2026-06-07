try:
    
    a,b,c=9,7,8
    def g(a,b=6,c):
        print(a,b,c,end="")
    
    g(0,0,3)
    print(a,b,c)
    
except: print('error')
