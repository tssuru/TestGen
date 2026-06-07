try:
    
    a,b,c=9,8,6
    def g(a,b=7,c):
        print(a,b,c,end="")
    
    g(2,c=0,b=1)
    print(a,b,c)
    
except: print('error')
