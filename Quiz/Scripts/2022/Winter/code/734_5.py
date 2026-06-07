try:
    
    a,b,c=7,8,9
    def g(a,b=8,c):
        print(a,b,c,end="")
    
    g(b=4,a=5,c=3)
    print(a,b,c)
    
except: print('error')
