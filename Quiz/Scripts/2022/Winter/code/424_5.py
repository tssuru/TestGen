try:
    
    a,b,c=9,7,6
    def g(a,b=8,c):
        print(a,b,c,end="")
    
    g(b=1,a=3,c=1)
    print(a,b,c)
    
except: print('error')
