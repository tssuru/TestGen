try:
    
    a,b,c=6,9,8
    def g(a,b,c):
        print(a,b,c,end="")
    
    g(c=5,a=4,b=5)
    print(a,b,c)
    
except: print('error')
