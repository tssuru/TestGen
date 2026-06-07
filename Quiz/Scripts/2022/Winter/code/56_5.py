try:
    
    a,b,c=6,7,8
    def g(a,b=9,c):
        print(a,b,c,end="")
    
    g(3,c=2,b=4)
    print(a,b,c)
    
except: print('error')
