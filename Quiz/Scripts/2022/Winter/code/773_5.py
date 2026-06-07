try:
    
    a,b,c=7,6,8
    def g(a,b,c):
        print(a,b,c,end="")
    
    g(1,c=4,b=3)
    print(a,b,c)
    
except: print('error')
