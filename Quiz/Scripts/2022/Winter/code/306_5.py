try:
    
    a,b,c=7,6,8
    def g(a,b=9,c):
        print(a,b,c,end="")
    
    g(5,c=1,b=3)
    print(a,b,c)
    
except: print('error')
