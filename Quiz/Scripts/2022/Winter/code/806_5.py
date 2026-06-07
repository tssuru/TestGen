try:
    
    a,b,c=9,8,6
    def g(a,b=7,c):
        print(a,b,c,end="")
    
    g(4,c=5,b=3)
    print(a,b,c)
    
except: print('error')
